using Microsoft.Web.WebView2.Core;
using Microsoft.Web.WebView2.WinForms;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Diagnostics;
using System.Diagnostics.Eventing.Reader;
using System.Drawing;
using System.Drawing.Printing;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Media;
using System.Net.Http;
using System.Runtime.ConstrainedExecution;
using System.Security.Policy;
using System.Security.RightsManagement;
using System.Text;
using System.Threading;
using PdfiumViewer;

using System.Threading.Tasks;
using System.Windows.Forms;
using System.Windows.Media.TextFormatting;
using WMPLib;
using static System.Windows.Forms.VisualStyles.VisualStyleElement.Button;
using static System.Windows.Forms.VisualStyles.VisualStyleElement.StartPanel;

namespace Application3
{

	public partial class Form1 : Form
	{
		private System.Windows.Forms.Timer timer = new System.Windows.Forms.Timer();
		private int SoGiayConLai;
		private string selectedFile;
		private WindowsMediaPlayer player = new WindowsMediaPlayer();
		private bool isPlaying = false;

		private PdfDocument pdfDocument;
		private void Timer_Tick(object sender, EventArgs e)
		{
			SoGiayConLai--;
			lblCountdown.Text = TimeSpan.FromSeconds(SoGiayConLai).ToString(@"hh\:mm\:ss");
			if (SoGiayConLai <= 10)
			{
				lblCountdown.ForeColor = Color.Red;
			}
			else {
				lblCountdown.Visible = true; 
				lblCountdown.ForeColor = Color.Black;
			}
			if (SoGiayConLai <= 0)
			{
				timer.Stop();
				lblCountdown.Text = " Hết giờ!";
				player.URL = selectedFile;

				player.controls.play();
				isPlaying = true;
			}
		}

		// Model cho một tác vụ
		private class TaskItem
		{
			public int Stt { get; set; }
			public string Ten { get; set; }
			public DateTime ThoiGianHoanThanh { get; set; }
			public bool QuanTrong { get; set; }
			public string LinhVuc { get; set; }
			public string NoiDung { get; set; }
		}

		// Designer event handlers (stubs/wrappers) so Designer references compile

		private void đăngNhậpTàiKhoảngKhácToolStripMenuItem_Click(object sender, EventArgs e)
		{
			// empty - handled if needed
		}
		private void CenterTabControl()
		{
			if (tabControl1 == null) return;

			// Lấy kích thước của Form
			int formWidth = this.ClientSize.Width;
			int formHeight = this.ClientSize.Height;

			// Lấy kích thước của TabControl
			int tabWidth = tabControl1.Width;
			int tabHeight = tabControl1.Height;

			// Tính toán vị trí để căn giữa
			int x = (formWidth - tabWidth) / 2;
			int y = (formHeight - tabHeight) / 2;

			// Gán lại vị trí
			tabControl1.Location = new Point(x, y);
		}
		string ver = "MinhKhangApplicationVer1";
		private void maskedTextBox2_MaskInputRejected(object sender, MaskInputRejectedEventArgs e)
		{
			// ensure password masking
			try { maskedTextBox2.PasswordChar = '*'; } catch { }
		}

		private void maskedTextBox1_MaskInputRejected(object sender, MaskInputRejectedEventArgs e)
		{
			// no-op
		}

		private void label8_Click(object sender, EventArgs e)
		{
			// no-op
		}

		// Wrapper methods to match simple Designer click names
		private void button13_Click(object sender, EventArgs e) => button13_Click_Add(sender, e);
		private void button8_Click(object sender, EventArgs e) => button8_Click_Save(sender, e);
		private void button9_Click(object sender, EventArgs e) => button9_Click_Cancel(sender, e);
		private void button10_Click(object sender, EventArgs e) => button10_Click_Delete(sender, e);
		private void button11_Click(object sender, EventArgs e) => button11_Click_Import(sender, e);
		private void button12_Click(object sender, EventArgs e) => button12_Click_Export(sender, e);

		private BindingList<TaskItem> tasks = new BindingList<TaskItem>();
		private DataGridView dgvAllTasks;
		private string currentUsername = string.Empty;

		// Build the form title using application name and current username (if any)
		private string GetFormTitle()
		{
			const string appName = "MinhKhang.exe- CONNECTED TO   ";
			const string appName2 = "Activation  ";
			if (!string.IsNullOrEmpty(currentUsername))
				return $"{appName} : {currentUsername}";
			var userFromInput = maskedTextBox1?.Text;
			if (!string.IsNullOrWhiteSpace(userFromInput))
				return $"{appName} : {userFromInput} - {appName2}  : {Activation}";
			return appName;
		}
		private PrintDocument printDocument1 = new PrintDocument();
		public Form1()
		{
			InitializeComponent();
			CuaSoIn.Document = printDocument1;
			CuaSoIn.MouseWheel += CuaSoIn_MouseWheel;
			printDocument1.PrintPage += PrintDocument1_PrintPage;
			CuaSoIn.MouseWheel += CuaSoIn_MouseWheel;
			timer.Interval = 1000; // 1 giây
			CuaSoIn.Document = printDocument1;
			printDocument1.PrintPage += intep_PrintPage;
			timer.Tick += Timer_Tick;
		}
		string time = DateTime.Now.ToString();
		private void WebView21_CoreWebView2InitializationCompleted(
	object sender,
	CoreWebView2InitializationCompletedEventArgs e)
		{
			if (e.IsSuccess)
			{
				// Khởi tạo thành công, có thể Navigate
				webView21.CoreWebView2.Navigate("https://www.microsoft.com");
			}
			else
			{
				MessageBox.Show("Khởi tạo WebView2 thất bại: " + e.InitializationException.Message);
			}
		}

		private async void Form1_Load(object sender, EventArgs e)
		{
			this.BackColor = SystemColors.Control;

			// MenuStrip hiển thị theo hệ thống
			menuStrip1.RenderMode = ToolStripRenderMode.System;

			// Button hiển thị theo hệ thống
			foreach (Control ctrl in this.Controls)
			{
				if (ctrl is Button btn)
				{
					btn.FlatStyle = FlatStyle.System;
				}
			}
			webView21.NavigationCompleted += WebView21_NavigationCompleted;
			webView21.SourceChanged += WebView21_SourceChanged;
			await webView21.EnsureCoreWebView2Async(null);
			webView21.CoreWebView2.Navigate("https://www.bing.com");
			CenterTabControl();
			// Set window title using application name and current username (if present)
			this.Text = GetFormTitle();

			// Khởi tạo DataGridView hiển thị All Task
			dgvAllTasks = new DataGridView
			{
				Dock = DockStyle.Fill,
				AutoGenerateColumns = false,
				DataSource = tasks
			};

			dgvAllTasks.Columns.Add(new DataGridViewTextBoxColumn { HeaderText = "Stt", DataPropertyName = "Stt" });
			dgvAllTasks.Columns.Add(new DataGridViewTextBoxColumn { HeaderText = "Tên", DataPropertyName = "Ten" });
			dgvAllTasks.Columns.Add(new DataGridViewTextBoxColumn { HeaderText = "Thời gian hoàn thành", DataPropertyName = "ThoiGianHoanThanh" });
			dgvAllTasks.Columns.Add(new DataGridViewCheckBoxColumn { HeaderText = "Quan trọng", DataPropertyName = "QuanTrong" });
			dgvAllTasks.Columns.Add(new DataGridViewTextBoxColumn { HeaderText = "Lĩnh vực", DataPropertyName = "LinhVuc" });
			dgvAllTasks.Columns.Add(new DataGridViewTextBoxColumn { HeaderText = "Nội dung", DataPropertyName = "NoiDung" });

			// Thêm DataGridView vào groupBox4 (all task) từ Designer
			if (groupBox4 != null)
			{
				groupBox4.Controls.Add(dgvAllTasks);
			}

			// Đặt mật khẩu hiển thị dấu *
			maskedTextBox2.PasswordChar = '*';
		}
		bool dangnhap = false;
		// Đăng nhập
		string nickname = "";
		string cuser = "";
		private void button3_Click(object sender, EventArgs e)
		{
			string username = maskedTextBox1.Text;
			string password = maskedTextBox2.Text;

			if ((username == "MinhKhang1995" && password == "123456987@admin") ||
				(username == "Administrator" && password == "123456987@admin") ||
				(username == "Test" && password == "test@123") ||
				(username == "TurboLines" && password == "TurboLines@123") ||
				(username == "User1005" && password == "123456987"))
			{
				currentUsername = username;
				cuser = username;
				Form2 form2 = new Form2(username, nickname); // truyền đủ 2 tham số
				form2.Show();
				if (currentUsername == "MinhKhang1995") nickname = "MinhKhang";
				else if (currentUsername == "Administrator") nickname = "Quản trị viên ";
				else if (currentUsername == "Test") nickname = "Người dùng thử ";
				else if (currentUsername == "TurboLines") nickname = "ToNguyenCat";
				else if (currentUsername == "User1005") nickname = "DuyKhang";
				ttdangnhap.Text = MaKhuVuc.Text;
				if (MaKhuVuc.Text == "")
				{
					ttdangnhap.Text = "Đã Đăng nhập ";
				}
				else if (MaKhuVuc.Text == "A01")
				{
					ttdangnhap.Text = "Administrator";
				}
				else if (MaKhuVuc.Text == "A02")
				{
					ttdangnhap.Text = "Hội đồng làm việc ";
				}
				else if (MaKhuVuc.Text == "A03")
				{
					ttdangnhap.Text = "Giám Sát Viên ";
				}
				else if (MaKhuVuc.Text == "LocalServer")
				{
					ttdangnhap.Text = "Nội bộ máy chủ ";
				}
				label2.Text = currentUsername;
				tinhtrang.Text = username;

				
				dangnhap = true;
				richTextBox7.AppendText($"{DateTime.Now} - Đăng nhập thành công với tài khoản: {username} ({nickname})\n");
				if (username == "MinhKhang1995" || username == "Administrator")
				{
					label79.Text = "Administrator(1003.269.105)";
					label79.ForeColor = Color.Green;
				}
				else
				{
					label79.Text = "NoServer";
					label79.ForeColor = Color.Red;
				}

				if (label26 != null) label26.Text = currentUsername; // hiển thị tên người dùng lên label26
				tabControl1.SelectedIndex = 1; // sang tab thứ hai
											   // Update window title to include username
				this.Text = GetFormTitle();

				// Show a tray balloon notification (compatible with .NET Framework WinForms)
				ShowBalloonNotification(
					"Xin chào người dùng ",
					"Bắt đầu quá trình làm việc của bạn "
				);
			}
			else
			{
				ShowBalloonNotification(
					"Báo lỗi tài khoản  ",
					"nếu sai tài khoản mật khẩu quá 03 lần thì vui lòng liên hệ quản trị viên 	"
				);
				richTextBox7.AppendText ("" + $"{DateTime.Now} - Đăng nhập thất bại với tài khoản: {username} - ({nickname})\n");
				richTextBox7.AppendText("		Tài khoản mật khẩu ..............................Kiểm tra \n");
				richTextBox7.AppendText("		Mã khu vực ......................................Kiểm tra \n");
				richTextBox7.AppendText("		NẾU KHÔNG HOẠT ĐỘNG \n");
				richTextBox7.AppendText("		Hội Đồng tài khoản ..............................Báo CÁo \n");
				richTextBox7.AppendText("		Giám sát viên ...................................Báo CÁo \n");
				richTextBox7.AppendText("		Yêu cầu hỗ trợ \n");
				richTextBox7.AppendText("		tài khoản mật khẩu .............................Đặt lại 	\n");

				MessageBox.Show("Sai tài khoản hoặc mật khẩu! - kiểm tra log đểbiết hướng xử lý ", "Thông báo", MessageBoxButtons.OK, MessageBoxIcon.Warning);
			}
		}
		
		private void ShowBalloonNotification(string title, string message, int timeoutMs = 5000)
		{
			try
			{
				var ni = new NotifyIcon
				{
					Icon = SystemIcons.Application,
					Visible = true,
					BalloonTipTitle = title,
					BalloonTipText = message,
					BalloonTipIcon = ToolTipIcon.Info
				};

				// Show the balloon tip. Some systems expect a small positive value.
				ni.ShowBalloonTip(Math.Max(1000, timeoutMs));

				// Dispose the notify icon after a delay to ensure the balloon is shown.
				var timer = new System.Windows.Forms.Timer { Interval = Math.Max(1500, timeoutMs + 500) };
				timer.Tick += (s, e) =>
				{
					timer.Stop();
					timer.Dispose();
					try
					{
						ni.Visible = false;
						ni.Dispose();
					}
					catch { /* swallow */ }
				};
				timer.Start();
			}
			catch
			{
				// Fallback to MessageBox if tray notifications fail
				try { MessageBox.Show(message, title, MessageBoxButtons.OK, MessageBoxIcon.Information); } catch { }
			}
		}

		// Button 5: mở file TKB
		private void button5_Click(object sender, EventArgs e)
		{
			tabControl1.SelectedIndex = 4;
			richTextBox7.AppendText($"{DateTime.Now} - {cuser} đang kiểm tra thời khóa biểu  ({nickname})\n");
		}

		// Button 6: mở website
		private void button6_Click(object sender, EventArgs e)
		{
			tabControl1.SelectedIndex = 10; 
			richTextBox7.AppendText($"{DateTime.Now} - {cuser} đang truy cập website hoctructuyen \n");
			webView21.CoreWebView2.Navigate("https://hoctructuyen.hcm.edu.vn/");
		}

		// Giới thiệu
		private void giớiThiệuToolStripMenuItem_Click(object sender, EventArgs e)
		{
			MessageBox.Show("Hoàng Minh Khang_(C) copyright by MinhKhang\nCảm ơn vì sử dụng ");
		}

		// Đăng nhập không tài khoản
		private void button4_Click(object sender, EventArgs e)
		{
			MessageBox.Show("Bạn Đã đăng nhập với không tài khoản\nCác thông tin sẽ không khả dụng ");
			tabControl1.SelectedIndex = 1;
		}

		// Thoát
		private void thoátToolStripMenuItem_Click(object sender, EventArgs e)
		{
			Application.Exit();
		}

		// ================== PHẦN TÁC VỤ ==================

		private void RecalculateStt()
		{
			for (int i = 0; i < tasks.Count; i++) tasks[i].Stt = i + 1;
			dgvAllTasks?.Refresh();
		}

		// Thêm tác vụ: dọn form để nhập
		private void button13_Click_Add(object sender, EventArgs e)
		{
			richTextBox1.Text = string.Empty; // tên
			maskedTextBox3.Text = string.Empty; // giờ
			maskedTextBox4.Text = string.Empty; // ngày
			checkBox3.Checked = false; // quan trọng
			richTextBox2.Text = string.Empty; // lĩnh vực
			richTextBox3.Text = string.Empty; // nội dung
		}

		// Lưu tác vụ (thêm vào danh sách)
		private void button8_Click_Save(object sender, EventArgs e)
		{
			DateTime combined = DateTime.Now;
			string dateText = maskedTextBox4.Text.Trim();
			string timeText = maskedTextBox3.Text.Trim();
			DateTime datePart, timePart;
			if (!string.IsNullOrEmpty(dateText) && !string.IsNullOrEmpty(timeText) &&
				DateTime.TryParseExact(dateText, new[] { "dd/MM/yyyy", "d/M/yyyy" }, CultureInfo.InvariantCulture, DateTimeStyles.None, out datePart) &&
				DateTime.TryParseExact(timeText, new[] { "HH:mm", "H:mm" }, CultureInfo.InvariantCulture, DateTimeStyles.None, out timePart))
			{
				combined = datePart.Date + timePart.TimeOfDay;
			}

			var item = new TaskItem
			{
				Ten = richTextBox1.Text.Trim(),
				ThoiGianHoanThanh = combined,
				QuanTrong = checkBox3.Checked,
				LinhVuc = richTextBox2.Text.Trim(),
				NoiDung = richTextBox3.Text.Trim()
			};
			tasks.Add(item);
			RecalculateStt();
		}

		// Hủy nhập
		private void button9_Click_Cancel(object sender, EventArgs e)
		{
			richTextBox1.Text = string.Empty;
			maskedTextBox3.Text = string.Empty;
			maskedTextBox4.Text = string.Empty;
			checkBox3.Checked = false;
			richTextBox2.Text = string.Empty;
			richTextBox3.Text = string.Empty;
		}

		// Xóa tác vụ được chọn
		private void button10_Click_Delete(object sender, EventArgs e)
		{
			if (dgvAllTasks == null) return;
			if (dgvAllTasks.SelectedRows.Count == 0) return;
			var toRemove = new List<TaskItem>();
			foreach (DataGridViewRow r in dgvAllTasks.SelectedRows)
			{
				if (r.DataBoundItem is TaskItem t) toRemove.Add(t);
			}
			foreach (var t in toRemove) tasks.Remove(t);
			RecalculateStt();
		}

		// Import tasks from TXT (tab-separated). Header expected in first line.
		private void button11_Click_Import(object sender, EventArgs e)
		{
			using (var ofd = new OpenFileDialog())
			{
				ofd.Filter = "Text files|*.txt|All files|*.*";
				if (ofd.ShowDialog() != DialogResult.OK) return;
				try
				{
					var lines = File.ReadAllLines(ofd.FileName, Encoding.UTF8);
					for (int i = 1; i < lines.Length; i++)
					{
						var parts = lines[i].Split('\t');
						if (parts.Length < 5) continue;
						DateTime dt;
						DateTime.TryParse(parts[2], out dt);
						bool qt = parts[3].Trim().ToLower() == "true" || parts[3].Trim() == "1" || parts[3].Trim().ToLower() == "x";
						var t = new TaskItem { Ten = parts[1], ThoiGianHoanThanh = dt, QuanTrong = qt, LinhVuc = parts[4], NoiDung = parts.Length > 5 ? parts[5] : string.Empty };
						tasks.Add(t);
					}
					RecalculateStt();
					MessageBox.Show("Import thành công");
				}
				catch (Exception ex)
				{
					MessageBox.Show("Không thể import: " + ex.Message);
				}
			}
		}

		// Export tasks to TXT (tab-separated)
		private void button12_Click_Export(object sender, EventArgs e)
		{
			using (var sfd = new SaveFileDialog())
			{
				sfd.Filter = "Text files|*.txt|All files|*.*";
				if (sfd.ShowDialog() != DialogResult.OK) return;
				try
				{
					using (var sw = new StreamWriter(sfd.FileName, false, Encoding.UTF8))
					{
						sw.WriteLine("Stt\tTên\tThời gian hoàn thành\tQuan trọng\tLĩnh vực\tNội dung");
						foreach (var t in tasks)
						{
							sw.WriteLine($"{t.Stt}\t{t.Ten}\t{t.ThoiGianHoanThanh:dd/MM/yyyy HH:mm}\t{t.QuanTrong}\t{t.LinhVuc}\t{t.NoiDung}");
						}
					}
					MessageBox.Show("Export thành công");
				}
				catch (Exception ex)
				{
					MessageBox.Show("Không thể export: " + ex.Message);
				}
			}
		}

		private void kếtThúcPhiênLàmViệcToolStripMenuItem_Click(object sender, EventArgs e)
		{
			// Clear current user and update title when ending session
			MessageBox.Show("chúng tôi khuyên bạn nên thoát phần mềm vì lý do bảo mật , Xóa toàn bộ ô đăng nhập  ", "Kết thúc phiên làm việc ", MessageBoxButtons.OK, MessageBoxIcon.Information);
			currentUsername = string.Empty;
			ttdangnhap.Text = "Đẵ Đăng Xuất ";
			richTextBox7.AppendText($"{DateTime.Now} - Đăng xuất thành công khỏi {currentUsername} ({nickname})\n");
			richTextBox7.Text = "";
			maskedTextBox2.Text = "";
			pictureBox3.Visible = false;
			tableLayoutPanel3.Visible = false;
			dangnhap = false;
			this.Text = GetFormTitle();
			tabControl1.SelectedIndex = 0;
			dangnhap = false;
		}

		private void aboutThisApplicationToolStripMenuItem_Click(object sender, EventArgs e)
		{
			MessageBox.Show("Xin chào , đây là Application 3 của Hoàng Minh Khang ");
		}

		private void tabPage4_Click(object sender, EventArgs e)
		{

		}

		private void documentaryToolStripMenuItem_Click(object sender, EventArgs e)
		{
			tabControl1.SelectedIndex = 3;
		}

		private void button2_Click(object sender, EventArgs e)
		{
			string ngdung = maskedTextBox1.Text;
			if (ngdung == "MinhKhang1995" || ngdung == "Administrator" || ngdung == "Test" || ngdung == "TurboLines" || ngdung == "User1005")
			{
				MessageBox.Show($"Chúng tôi tìm thấy tài khoản tên là {ngdung}", "Thông báo", MessageBoxButtons.OK, MessageBoxIcon.Information);
			}
			else
			{
				MessageBox.Show("Có thể bạn đã nhập sai , chúng tôi không tìm thấy tài khoản nào ", "Thông báo", MessageBoxButtons.OK, MessageBoxIcon.Warning);
			}
		}

		private void button11_Click_1(object sender, EventArgs e)
		{
			using (var ofd = new OpenFileDialog())
			{
				ofd.Filter = "Text files|*.txt|All files|*.*";
				if (ofd.ShowDialog() != DialogResult.OK) return;
				try
				{
					var lines = File.ReadAllLines(ofd.FileName, Encoding.UTF8);
					for (int i = 1; i < lines.Length; i++)
					{
						var parts = lines[i].Split('\t');
						if (parts.Length < 5) continue;
						DateTime dt;
						DateTime.TryParse(parts[2], out dt);
						bool qt = parts[3].Trim().ToLower() == "true" || parts[3].Trim() == "1" || parts[3].Trim().ToLower() == "x";
						var t = new TaskItem { Ten = parts[1], ThoiGianHoanThanh = dt, QuanTrong = qt, LinhVuc = parts[4], NoiDung = parts.Length > 5 ? parts[5] : string.Empty };
						tasks.Add(t);
					}
					RecalculateStt();
					MessageBox.Show("Import thành công");
				}
				catch (Exception ex)
				{
					MessageBox.Show("Không thể import: " + ex.Message);
				}
			}
		}

		private void button12_Click_1(object sender, EventArgs e)
		{
			using (var sfd = new SaveFileDialog())
			{
				sfd.Filter = "Text files|*.txt|All files|*.*";
				if (sfd.ShowDialog() != DialogResult.OK) return;
				try
				{
					using (var sw = new StreamWriter(sfd.FileName, false, Encoding.UTF8))
					{
						sw.WriteLine("Stt\tTên\tThời gian hoàn thành\tQuan trọng\tLĩnh vực\tNội dung");
						foreach (var t in tasks)
						{
							sw.WriteLine($"{t.Stt}\t{t.Ten}\t{t.ThoiGianHoanThanh:dd/MM/yyyy HH:mm}\t{t.QuanTrong}\t{t.LinhVuc}\t{t.NoiDung}");
						}
					}
					MessageBox.Show("Export thành công");
				}
				catch (Exception ex)
				{
					MessageBox.Show("Không thể export: " + ex.Message);
				}
			}
		}

		private void button13_Click_1(object sender, EventArgs e)
		{
			richTextBox1.Text = string.Empty; // tên
			maskedTextBox3.Text = string.Empty; // giờ
			maskedTextBox4.Text = string.Empty; // ngày
			checkBox3.Checked = false; // quan trọng
			richTextBox2.Text = string.Empty; // lĩnh vực
			richTextBox3.Text = string.Empty; // nội dung
		}

		private void button10_Click_1(object sender, EventArgs e)
		{

			if (dgvAllTasks == null) return;
			if (dgvAllTasks.SelectedRows.Count == 0) return;
			var toRemove = new List<TaskItem>();
			foreach (DataGridViewRow r in dgvAllTasks.SelectedRows)
			{
				if (r.DataBoundItem is TaskItem t) toRemove.Add(t);
			}
			foreach (var t in toRemove) tasks.Remove(t);
			RecalculateStt();
		}

		private void button9_Click_1(object sender, EventArgs e)
		{
			richTextBox1.Text = string.Empty;
			maskedTextBox3.Text = string.Empty;
			maskedTextBox4.Text = string.Empty;
			checkBox3.Checked = false;
			richTextBox2.Text = string.Empty;
			richTextBox3.Text = string.Empty;
		}

		private void button8_Click_1(object sender, EventArgs e)
		{
			DateTime combined = DateTime.Now;
			string dateText = maskedTextBox4.Text.Trim();
			string timeText = maskedTextBox3.Text.Trim();
			DateTime datePart, timePart;
			if (!string.IsNullOrEmpty(dateText) && !string.IsNullOrEmpty(timeText) &&
				DateTime.TryParseExact(dateText, new[] { "dd/MM/yyyy", "d/M/yyyy" }, CultureInfo.InvariantCulture, DateTimeStyles.None, out datePart) &&
				DateTime.TryParseExact(timeText, new[] { "HH:mm", "H:mm" }, CultureInfo.InvariantCulture, DateTimeStyles.None, out timePart))
			{
				combined = datePart.Date + timePart.TimeOfDay;
			}

			var item = new TaskItem
			{
				Ten = richTextBox1.Text.Trim(),
				ThoiGianHoanThanh = combined,
				QuanTrong = checkBox3.Checked,
				LinhVuc = richTextBox2.Text.Trim(),
				NoiDung = richTextBox3.Text.Trim()
			};
			tasks.Add(item);
			RecalculateStt();
		}

		private void xácThựcĐăngNhậpToolStripMenuItem_Click(object sender, EventArgs e)
		{
			tabControl1.SelectedIndex = 0;
		}

		private void xácThựcĐăngNhậpToolStripMenuItem_Click_1(object sender, EventArgs e)
		{
			tabControl1.SelectedIndex = 0;
		}

		private void startToolStripMenuItem_Click(object sender, EventArgs e)
		{
			tabControl1.SelectedIndex = 4;
		}

		private void stopToolStripMenuItem_Click(object sender, EventArgs e)
		{
			tabControl1.SelectedIndex = 1;
		}

		private void aboutToolStripMenuItem_Click(object sender, EventArgs e)
		{
			MessageBox.Show("ImagePreviewer :: Version 1.0", "Verison--image", MessageBoxButtons.OK, MessageBoxIcon.Information);
		}

		private void settingsToolStripMenuItem_Click(object sender, EventArgs e)
		{
			tabControl1.SelectedIndex = 5;
		}
		bool Activation = false;
		private void button14_Click(object sender, EventArgs e)
		{
			string cdkey = richTextBox5.Text;
			if (cdkey == "10035-AAA13-39dsa-33318-32042")
			{
				MessageBox.Show("CD Key hợp lệ! Cảm ơn bạn đã kích hoạt sản phẩm.", "Kích hoạt)", MessageBoxButtons.OK, MessageBoxIcon.Information);
				Activation = true;
			}
			else
			{
				MessageBox.Show("CD Key không hợp lệ. Vui lòng kiểm tra lại và thử lại.", "Kích hoạt", MessageBoxButtons.OK, MessageBoxIcon.Error);
			}
		}

		private void label26_Click(object sender, EventArgs e)
		{
			// Khi click lên label, hiển thị tên người dùng hiện tại
			var user = !string.IsNullOrEmpty(currentUsername) ? currentUsername : maskedTextBox1.Text;
			if (string.IsNullOrEmpty(user))
				MessageBox.Show("Chưa có tên người dùng.", "Thông báo", MessageBoxButtons.OK, MessageBoxIcon.Information);
			else
				MessageBox.Show("Người dùng hiện tại: " + user, "Người dùng", MessageBoxButtons.OK, MessageBoxIcon.Information);
		}

		private void label29_Click(object sender, EventArgs e)
		{
			var user = !string.IsNullOrEmpty(currentUsername) ? currentUsername : maskedTextBox1.Text;
			if (string.IsNullOrWhiteSpace(user))
			{
				MessageBox.Show("Chưa có tên người dùng.", "Thông báo", MessageBoxButtons.OK, MessageBoxIcon.Information);
				return;
			}

			string role;
			var u = user.ToLowerInvariant();
			role = nickname; 

			if (label29 != null) label29.Text = role;
			MessageBox.Show($"Người dùng: {user}\nPhân loại: {role}", "Thông tin người dùng", MessageBoxButtons.OK, MessageBoxIcon.Information);
		}

		private void richTextBox5_TextChanged(object sender, EventArgs e)
		{

		}

		private void label31_Click(object sender, EventArgs e)
		{
			if (currentUsername == "MinhKhang1995" || currentUsername == "Administrator")
			{
				Activation = true;
			}
			if (Activation)
			{
				if (label31 != null)
				{
					label31.Text = "Đã kích hoạt";
				}
			}
			else
			{
				if (label31 != null)
				{
					label31.Text = "Chưa kích hoạt";
				}
			}
		}

		private void label33_Click(object sender, EventArgs e)
		{
			if (richTextBox5.Text == "")
			{
				label33.Text = "Không có sẵn ";
			}
			else
			{
				label33.Text = richTextBox5.Text;
			}
		}

		private void label35_Click(object sender, EventArgs e)
		{
			if (currentUsername == "Administrator" || currentUsername == "MinhKhang1995")
			{
				label35.Text = "Có";
			}
			else
			{
				label35.Text = "Không";
			}
		}

		private void linkLabel1_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
		{
			tabControl1.SelectedIndex = 0;
		}

		private void linkLabel2_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
		{
			tabControl1.SelectedIndex = 2;
			richTextBox7.AppendText($"{DateTime.Now} - {cuser} đang kiểm tra tác vụ \n");
		}



		private void pictureBox3_Click(object sender, EventArgs e)
		{

			// If you later need to hide the picture and release its image to free resources,
			// you can call:
			// pictureBox3.Visible = false;
			// pictureBox3.Image?.Dispose();
			// pictureBox3.Image = null;
		}

		private void progressBar1_Click(object sender, EventArgs e)
		{

		}

		private void tabPage7_Click(object sender, EventArgs e)
		{

		}

		private void button15_Click(object sender, EventArgs e)
		{
			// in ra tệp PDF (export contents of groupBox4 to a PDF file)
			using (var sfd = new SaveFileDialog { Filter = "PDF files|*.pdf", FileName = "groupBox4.pdf" })
			{
				if (sfd.ShowDialog() != DialogResult.OK) return;

				// Capture the entire visual content of groupBox4 (including items not currently visible)
				Bitmap bmp = CaptureControlFull(groupBox4);

				try
				{
					// Encode bitmap to JPEG in memory (ensure JPEG so PDF embedding is simple)
					byte[] jpegBytes;
					using (var msJ = new System.IO.MemoryStream())
					{
						// Try to save as JPEG; fall back to saving as PNG then converting to JPEG
						try
						{
							bmp.Save(msJ, System.Drawing.Imaging.ImageFormat.Jpeg);
						}
						catch
						{
							msJ.SetLength(0);
							bmp.Save(msJ, System.Drawing.Imaging.ImageFormat.Png);
							msJ.Position = 0;
							using (var tmp = System.Drawing.Image.FromStream(msJ))
							using (var msJ2 = new System.IO.MemoryStream())
							{
								tmp.Save(msJ2, System.Drawing.Imaging.ImageFormat.Jpeg);
								jpegBytes = msJ2.ToArray();
								goto HaveJpeg;
							}
						}
						jpegBytes = msJ.ToArray();
					}
				HaveJpeg:

					// Build a minimal PDF embedding the JPEG as an image XObject
					byte[] pdfBytes = CreatePdfWithImage(jpegBytes, bmp.Width, bmp.Height);

					// Save to disk
					System.IO.File.WriteAllBytes(sfd.FileName, pdfBytes);
					MessageBox.Show("PDF saved to: " + sfd.FileName, "Export PDF", MessageBoxButtons.OK, MessageBoxIcon.Information);
				}
				finally
				{
					bmp.Dispose();
				}
			}

			// Helper: captures a control's entire content. Handles common list/grid controls and scrollable containers.
			Bitmap CaptureControlFull(Control ctrl)
			{
				// ListBox: draw all items
				if (ctrl is ListBox lb)
				{
					int count = lb.Items.Count;
					int itemHeight = lb.ItemHeight;
					int width = Math.Max(lb.Width, 1);
					int height = Math.Max(itemHeight * Math.Max(1, count), 1);
					var bm = new Bitmap(width, height);
					using (var g = Graphics.FromImage(bm))
					{
						g.Clear(lb.BackColor);
						for (int i = 0; i < count; i++)
						{
							var r = new Rectangle(0, i * itemHeight, width, itemHeight);
							string text = lb.GetItemText(lb.Items[i]);
							TextRenderer.DrawText(g, text, lb.Font, r, lb.ForeColor, TextFormatFlags.VerticalCenter | TextFormatFlags.Left);
						}
					}
					return bm;
				}

				// ListView: simple textual rendering (columns + rows)
				if (ctrl is ListView lv)
				{
					int colCount = lv.Columns.Count;
					int[] colWidths = new int[colCount];
					int totalWidth = 0;
					for (int i = 0; i < colCount; i++)
					{
						colWidths[i] = Math.Max(80, lv.Columns[i].Width);
						totalWidth += colWidths[i];
					}
					int headerHeight = (int)(lv.Font.GetHeight() + 8);
					int itemHeight = (int)(lv.Font.GetHeight() + 6);
					int totalHeight = headerHeight + Math.Max(1, lv.Items.Count) * itemHeight;
					var bm = new Bitmap(Math.Max(totalWidth, 1), Math.Max(totalHeight, 1));
					using (var g = Graphics.FromImage(bm))
					{
						g.Clear(lv.BackColor);
						// draw headers
						int x = 0;
						using (var headerBrush = new SolidBrush(SystemColors.Control))
						using (var borderPen = new Pen(SystemColors.ControlDark))
						{
							for (int c = 0; c < colCount; c++)
							{
								var hr = new Rectangle(x, 0, colWidths[c], headerHeight);
								g.FillRectangle(headerBrush, hr);
								g.DrawRectangle(borderPen, hr);
								TextRenderer.DrawText(g, lv.Columns[c].Text, lv.Font, hr, lv.ForeColor, TextFormatFlags.VerticalCenter | TextFormatFlags.Left);
								x += colWidths[c];
							}
						}
						// draw items
						for (int r = 0; r < lv.Items.Count; r++)
						{
							int y = headerHeight + r * itemHeight;
							x = 0;
							for (int c = 0; c < colCount; c++)
							{
								var cr = new Rectangle(x, y, colWidths[c], itemHeight);
								TextRenderer.DrawText(g, lv.Items[r].SubItems.Count > c ? lv.Items[r].SubItems[c].Text : string.Empty, lv.Font, cr, lv.ForeColor, TextFormatFlags.VerticalCenter | TextFormatFlags.Left);
								g.DrawRectangle(Pens.LightGray, cr);
								x += colWidths[c];
							}
						}
					}
					return bm;
				}

				// DataGridView: render headers and all rows as text
				if (ctrl is DataGridView dgv)
				{
					int cols = dgv.ColumnCount;
					int[] colWidths = new int[cols];
					int totalW = 0;
					for (int i = 0; i < cols; i++)
					{
						colWidths[i] = Math.Max(80, dgv.Columns[i].Width);
						totalW += colWidths[i];
					}
					int headerH = dgv.ColumnHeadersHeight > 0 ? dgv.ColumnHeadersHeight : (int)(dgv.Font.GetHeight() + 8);
					int rowH = dgv.RowTemplate.Height > 0 ? dgv.RowTemplate.Height : (int)(dgv.Font.GetHeight() + 6);
					int totalH = headerH + dgv.RowCount * rowH;
					var bm = new Bitmap(Math.Max(totalW, 1), Math.Max(totalH, 1));
					using (var g = Graphics.FromImage(bm))
					{
						g.Clear(dgv.BackgroundColor);
						int x = 0;
						for (int c = 0; c < cols; c++)
						{
							var hr = new Rectangle(x, 0, colWidths[c], headerH);
							g.FillRectangle(Brushes.LightGray, hr);
							g.DrawRectangle(Pens.Gray, hr);
							TextRenderer.DrawText(g, dgv.Columns[c].HeaderText, dgv.Font, hr, dgv.ForeColor, TextFormatFlags.VerticalCenter | TextFormatFlags.Left);
							x += colWidths[c];
						}
						for (int r = 0; r < dgv.RowCount; r++)
						{
							x = 0;
							for (int c = 0; c < cols; c++)
							{
								var cr = new Rectangle(x, headerH + r * rowH, colWidths[c], rowH);
								var cell = dgv.Rows[r].Cells[c];
								string txt = cell?.EditedFormattedValue?.ToString() ?? string.Empty;
								TextRenderer.DrawText(g, txt, dgv.Font, cr, dgv.ForeColor, TextFormatFlags.VerticalCenter | TextFormatFlags.Left);
								g.DrawRectangle(Pens.LightGray, cr);
								x += colWidths[c];
							}
						}
					}
					return bm;
				}

				// ScrollableControl with content larger than viewport: capture by tiling the viewport
				if (ctrl is ScrollableControl sc && sc.DisplayRectangle.Height > sc.ClientSize.Height)
				{
					int fullW = Math.Max(sc.DisplayRectangle.Width, sc.ClientSize.Width);
					int fullH = Math.Max(sc.DisplayRectangle.Height, sc.ClientSize.Height);
					var big = new Bitmap(Math.Max(fullW, 1), Math.Max(fullH, 1));
					var view = new Bitmap(Math.Max(sc.ClientSize.Width, 1), Math.Max(sc.ClientSize.Height, 1));
					var orig = sc.AutoScrollPosition;
					try
					{
						using (var g = Graphics.FromImage(big))
						{
							for (int y = 0; y < fullH; y += view.Height)
							{
								sc.AutoScrollPosition = new Point(0, y);
								sc.DrawToBitmap(view, new Rectangle(0, 0, view.Width, view.Height));
								int copyH = Math.Min(view.Height, fullH - y);
								g.DrawImage(view, new Rectangle(0, y, view.Width, copyH), new Rectangle(0, 0, view.Width, copyH), GraphicsUnit.Pixel);
							}
						}
					}
					finally
					{
						sc.AutoScrollPosition = new Point(-orig.X, -orig.Y); // restore
						view.Dispose();
					}
					return big;
				}

				// Fallback: draw visible area only
				{
					var bmp = new Bitmap(Math.Max(ctrl.Width, 1), Math.Max(ctrl.Height, 1));
					ctrl.DrawToBitmap(bmp, new Rectangle(0, 0, bmp.Width, bmp.Height));
					return bmp;
				}
			}
		}

		// Local function: creates a simple single-page PDF embedding the JPEG image bytes.
		byte[] CreatePdfWithImage(byte[] jpegData, int imgWidth, int imgHeight)
		{
			var ms = new System.IO.MemoryStream();
			var enc = System.Text.Encoding.ASCII;

			// PDF header (with binary comment to ensure readers treat as binary)
			Write("%PDF-1.4\n%âãÏÓ\n");

			var objOffsets = new System.Collections.Generic.List<long>();

			// helper to write raw string
			void Write(string s) { var b = enc.GetBytes(s); ms.Write(b, 0, b.Length); }

			// helper to write object (non-stream)
			void WriteObject(int id, string content)
			{
				objOffsets.Add(ms.Position);
				Write($"{id} 0 obj\n{content}\nendobj\n");
			}

			// Object 1: Catalog
			WriteObject(1, "<< /Type /Catalog /Pages 2 0 R >>");

			// Object 2: Pages
			WriteObject(2, "<< /Type /Pages /Kids [3 0 R] /Count 1 >>");

			// Object 3: Page
			WriteObject(3, $"<< /Type /Page /Parent 2 0 R /Resources << /XObject << /Im0 4 0 R >> /ProcSet [/PDF /ImageC] >> /MediaBox [0 0 {imgWidth} {imgHeight}] /Contents 5 0 R >>");

			// Object 4: Image XObject (stream) - JPEG
			objOffsets.Add(ms.Position);
			Write($"4 0 obj\n<< /Type /XObject /Subtype /Image /Width {imgWidth} /Height {imgHeight} /ColorSpace /DeviceRGB /BitsPerComponent 8 /Filter /DCTDecode /Length {jpegData.Length} >>\nstream\n");
			ms.Write(jpegData, 0, jpegData.Length);
			Write("\nendstream\nendobj\n");

			// Object 5: Content stream that paints the image to the page
			var contentStream = $"q\n{imgWidth} 0 0 {imgHeight} 0 0 cm\n/Im0 Do\nQ\n";
			var contentBytes = enc.GetBytes(contentStream);
			objOffsets.Add(ms.Position);
			Write($"5 0 obj\n<< /Length {contentBytes.Length} >>\nstream\n");
			ms.Write(contentBytes, 0, contentBytes.Length);
			Write("\nendstream\nendobj\n");

			// xref
			var xrefStart = ms.Position;
			Write("xref\n");
			Write($"0 {objOffsets.Count + 1}\n");
			Write("0000000000 65535 f \n");
			foreach (var off in objOffsets)
			{
				Write(off.ToString("D10") + " 00000 n \n");
			}

			// trailer
			Write("trailer\n");
			Write($"<< /Size {objOffsets.Count + 1} /Root 1 0 R >>\n");
			Write("startxref\n");
			Write(xrefStart.ToString() + "\n");
			Write("%%EOF\n");

			return ms.ToArray();
		}
		private void đăngNhậpToolStripMenuItem_Click(object sender, EventArgs e)
		{
			tabControl1.SelectedIndex = 0;
		}

		private void thôngTinChungToolStripMenuItem_Click(object sender, EventArgs e)
		{
			tabControl1.SelectedIndex = 1;
		}

		private void tácVụToolStripMenuItem_Click(object sender, EventArgs e)
		{
			tabControl1.SelectedIndex = 2;
		}

		private void documentaryToolStripMenuItem1_Click(object sender, EventArgs e)
		{
			tabControl1.SelectedIndex = 3;
		}

		private void thờiKhóaBiểuToolStripMenuItem_Click(object sender, EventArgs e)
		{
			tabControl1.SelectedIndex = 4;
		}

		private void càiĐặtToolStripMenuItem_Click(object sender, EventArgs e)
		{
			tabControl1.SelectedIndex = 5;
		}

		private void linkLabel3_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
		{
			MessageBox.Show("Nếu bạn là quản trị viên , vui lòng sử dụng phần mềm Visual Studio để chình sửa ", "Thông tin cần sửa ", MessageBoxButtons.OKCancel, MessageBoxIcon.Exclamation);
		}

		private void button16_Click(object sender, EventArgs e)
		{
			DialogResult resu = MessageBox.Show("Bạn thấy thời khóa biểu này hết hạn và yêu cầu cập nhật ", "Xác nhận ", MessageBoxButtons.YesNo, MessageBoxIcon.Warning);
			if (resu == DialogResult.Yes)
			{
				MessageBox.Show("Cảm ơn bạn đã đóng góp ý kiến , chúng tôi sẽ cập nhật thời khóa biểu sớm nhất có thể ", "Cập nhật TKB ", MessageBoxButtons.OK, MessageBoxIcon.Information);
			}

		}

		private void button17_Click(object sender, EventArgs e)
		{
			DialogResult SDS = MessageBox.Show("Báo cáo ", "report", MessageBoxButtons.YesNo, MessageBoxIcon.Information);

		}

		private void progressBar2_Click(object sender, EventArgs e)
		{
			// Set progress bar to 100% (use Maximum to be robust if max != 100)

		}

		private void label63_Click(object sender, EventArgs e)
		{

		}

		private void button1_Click(object sender, EventArgs e)
		{
			Application.Exit();
		}

		private void label65_Click(object sender, EventArgs e)
		{
			MessageBox.Show("Nếu bạn nhập sai mã khu vực - đồng nghĩa việc tài khoản của bạn không hợp lệ ", "Info", MessageBoxButtons.OK, MessageBoxIcon.Information);
		}
		int  tkbhethangngay = 30;
		int tkbhethangthang = 5;
		int tkbhethangnam	 = 2026;
		private void button18_Click(object sender, EventArgs e)
		{
			if (dangnhap == true)
			{
				// Ensure the picture is visible
				pictureBox3.Visible = true;
				tableLayoutPanel3.Visible = true;
				progressBar2.Value = progressBar2.Maximum;
				richTextBox7.AppendText($"{DateTime.Now} - {cuser} đang kiểm tra thời khóa biểu   ({nickname})\n");
				try
				{
					var expiry = new DateTime(tkbhethangnam, tkbhethangthang, tkbhethangngay);
					if (DateTime.Now.Date <= expiry.Date)
					{
						label53.Text = "Còn Hiệu Lực ";
						label53.ForeColor = Color.Green; 
					}
					else
					{
						label53.Text = "Hết  Hiệu Lực ";
						label53.ForeColor = Color.Red;
					}
				}
				catch (ArgumentOutOfRangeException)
				{
					MessageBox.Show("Ngày hết hạn không hợp lệ", "Lỗi", MessageBoxButtons.OK, MessageBoxIcon.Error);
				}
			}
			else
			{
				MessageBox.Show("Vui lòng đăng nhập để sử dụng chức năng này ", "Thông báo", MessageBoxButtons.OK, MessageBoxIcon.Warning);
				richTextBox7.AppendText($"{DateTime.Now} - {cuser} đã cố gắng kiểm tra thời khóa biểu nhưng chưa đăng nhập ({nickname})\n");
				richTextBox7.AppendText("		Tài khoản mật khẩu .............................Đặt lại 	\n");


			}
		}

		private void button19_Click(object sender, EventArgs e)
		{
			tabControl1.SelectedIndex = 0;
		}

		private void groupBox9_Enter(object sender, EventArgs e)
		{

		}

		private void button20_Click(object sender, EventArgs e)
		{
			groupBox9.Visible = false;
		}

		private void button21_Click(object sender, EventArgs e)
		{
			groupBox9.Visible = true;

		}

		private void tableLayoutPanel3_Paint(object sender, PaintEventArgs e)
		{

		}

		private void label2_Click(object sender, EventArgs e)
		{
			if (dangnhap)
			{
				label2.Text = currentUsername;
			}
		}

		private void button23_Click(object sender, EventArgs e)
		{
			tabControl1.SelectedIndex = 5;
		}

		private void groupBox1_Enter(object sender, EventArgs e)
		{

		}

		private void button22_Click(object sender, EventArgs e)
		{
			groupBox1.Visible = true;
		}

		private void button24_Click(object sender, EventArgs e)
		{
			tabControl1.SelectedIndex = 4;
		}

		private void button25_Click(object sender, EventArgs e)
		{
			Application.Exit();
		}

		private void ttdangnhap_Click(object sender, EventArgs e)
		{

		}

		private void groupBox12_Enter(object sender, EventArgs e)
		{

		}

		private void button26_Click(object sender, EventArgs e)
		{
			groupBox12.Visible = false;
		}

		private void menuStrip1_ItemClicked(object sender, ToolStripItemClickedEventArgs e)
		{

		}

		private void checkBox5_CheckedChanged(object sender, EventArgs e)
		{
			//if (menuStrip1 == null) return;
			// Hide the menu strip when checkbox5 is checked, show it when unchecked
			menuStrip1.Visible = !checkBox5.Checked;
		}

		private void checkBox6_CheckedChanged(object sender, EventArgs e)
		{
			if (!checkBox6.Checked)
				return;

			var traloi = MessageBox.Show("Thao tác này sẽ ngắt kết nối với máy chủ của bạn - bạn không thể tiếp tục sử dụng các chức năng liên quan trừ khi bạn khởi động lại phần mềm ", "Đăng xuất", MessageBoxButtons.YesNo, MessageBoxIcon.Question);
			if (traloi == DialogResult.Yes)
			{
				dangnhap = false;
				currentUsername = string.Empty;
				ttdangnhap.Text = "Đã Đăng Xuất";
				maskedTextBox2.Text = "";
				pictureBox3.Visible = false;
				maskedTextBox3.Visible = false;
				groupBox1.Visible = false;
				tabControl1.SelectedIndex = 0;
				button22.Visible = false;
				// Uncheck without retriggering the handler
				checkBox6.CheckedChanged -= checkBox6_CheckedChanged;
				checkBox6.Checked = false;
				checkBox6.CheckedChanged += checkBox6_CheckedChanged;
			}
			else
			{
				// User cancelled: revert the checkbox without retriggering the handler
				checkBox6.CheckedChanged -= checkBox6_CheckedChanged;
				checkBox6.Checked = false;
				checkBox6.CheckedChanged += checkBox6_CheckedChanged;
			}
		}

		private void checkBox7_CheckedChanged(object sender, EventArgs e)
		{

		}

		private void button27_Click(object sender, EventArgs e)
		{

		}

		private void tableLayoutPanel4_Paint(object sender, PaintEventArgs e)
		{

		}

		private void tabControl1_SelectedIndexChanged(object sender, EventArgs e)
		{

		}

		private void linkLabel4_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
		{
			MessageBox.Show("Đây là phần mở rộng của phần mềm  , khi bạn nhận được code này từ quản trị viên , bạn có một lần sử dụng để đăng nhập .Sau đó sẽ bị vô hiệu hóa để đảm bảo tính bảo một ", "PREapplication", MessageBoxButtons.OK, MessageBoxIcon.Information);
		}

		private void label79_Click(object sender, EventArgs e)
		{

		}

		private void toolStripComboBox1_Click(object sender, EventArgs e)
		{

		}
		private void CuaSoIn_MouseWheel(object sender, MouseEventArgs e)
		{
			if (pdfDocument == null) return;
    if (e.Delta < 0 && CuaSoIn.StartPage < pdfDocument.PageCount - 1)
        CuaSoIn.StartPage++;
    else if (e.Delta > 0 && CuaSoIn.StartPage > 0)
        CuaSoIn.StartPage--;
		}
		
		private void CuaSoIn_Click(object sender, EventArgs e)
		{
			
			CuaSoIn.Zoom = 1.2; // zoom 120%
		

		}

		private void checkBox8_CheckedChanged(object sender, EventArgs e)
		{
			CuaSoIn.Visible = !checkBox8.Checked;
		}

		private void button30_Click(object sender, EventArgs e)
		{
			if (dangnhap == true)
			{
				if (pictureBox3.Image == null)
				{
					MessageBox.Show("Không có hình để xuất.", "Lỗi", MessageBoxButtons.OK, MessageBoxIcon.Warning);
					richTextBox7.AppendText($" {DateTime.Now} - {currentUsername} ({nickname}) đã cố gắng xuất hình nhưng Lỗi  \n");
					richTextBox7.AppendText("	quản trị viên .....................................Báo Cáo \n");


					return;
				}

				using (var sfd = new SaveFileDialog())
				{
					sfd.Filter = "PDF files (*.pdf)|*.pdf";
					sfd.FileName = "ThoiKhoaBieu.pdf";
					if (sfd.ShowDialog() != DialogResult.OK) return;
					string outputPath = sfd.FileName;

					var pd = new System.Drawing.Printing.PrintDocument();
					try
					{
						// Try to use Microsoft Print to PDF if available
						const string pdfPrinterName = "Microsoft Print to PDF";
						if (pd.PrinterSettings.IsValid && Array.IndexOf(System.Drawing.Printing.PrinterSettings.InstalledPrinters.Cast<string>().ToArray(), pdfPrinterName) >= 0)
						{
							pd.PrinterSettings.PrinterName = pdfPrinterName;
							pd.PrinterSettings.PrintToFile = true;
							pd.PrinterSettings.PrintFileName = outputPath;
						}
						else
						{
							// If Microsoft Print to PDF not found, show PrintDialog so user can pick a PDF printer
							using (var printDlg = new PrintDialog())
							{
								printDlg.Document = pd;
								printDlg.AllowSomePages = false;
								printDlg.AllowSelection = false;
								if (printDlg.ShowDialog() != DialogResult.OK)
									return;
							}
						}

						// Render the PictureBox image to the print page, preserving aspect ratio
						pd.PrintController = new System.Drawing.Printing.StandardPrintController(); // suppress UI
						pd.DefaultPageSettings.Landscape = false;
						pd.PrintPage += (snd, ev) =>
						{
							var img = pictureBox3.Image;
							var g = ev.Graphics;
							g.InterpolationMode = System.Drawing.Drawing2D.InterpolationMode.HighQualityBicubic;
							g.SmoothingMode = System.Drawing.Drawing2D.SmoothingMode.HighQuality;
							var marginBounds = ev.MarginBounds;

							// If the image is larger than the printable area, scale it down while preserving aspect ratio
							float imgRatio = (float)img.Width / img.Height;
							float areaRatio = (float)marginBounds.Width / marginBounds.Height;
							int drawWidth, drawHeight;
							if (imgRatio > areaRatio)
							{
								drawWidth = marginBounds.Width;
								drawHeight = (int)(marginBounds.Width / imgRatio);
							}
							else
							{
								drawHeight = marginBounds.Height;
								drawWidth = (int)(marginBounds.Height * imgRatio);
							}

							var drawX = marginBounds.X + (marginBounds.Width - drawWidth) / 2;
							var drawY = marginBounds.Y + (marginBounds.Height - drawHeight) / 2;
							var drawRect = new System.Drawing.Rectangle(drawX, drawY, drawWidth, drawHeight);

							g.Clear(System.Drawing.Color.White);
							g.DrawImage(img, drawRect);
							ev.HasMorePages = false;
						};

						pd.Print();
						MessageBox.Show("Đã xuất thành công: " + outputPath, "Hoàn tất", MessageBoxButtons.OK, MessageBoxIcon.Information);
					}
					catch (Exception ex)
					{
						MessageBox.Show("Lỗi khi xuất PDF: " + ex.Message, "Lỗi", MessageBoxButtons.OK, MessageBoxIcon.Error);
					}
					finally
					{
						pd.PrintPage -= null;
						pd.Dispose();
					}
				}
			}
			else
			{
				MessageBox.Show("Vui lòng đăng nhập để sử dụng chức năng này ", "Thông báo", MessageBoxButtons.OK, MessageBoxIcon.Warning);
			}

		}

		private void InRaTep_CheckedChanged(object sender, EventArgs e)
		{

		}

		private void SoBan_MaskInputRejected(object sender, MaskInputRejectedEventArgs e)
		{

		}

		private void NutIn_Click(object sender, EventArgs e)
		{

		}

		private void MaCongViec_MaskInputRejected(object sender, MaskInputRejectedEventArgs e)
		{

		}

		private void button31_Click(object sender, EventArgs e)

		{
			if (MaCongViec.Text == "QT01")
			{
				richTextBox1.Text = "Kiểm tra ";
				richTextBox2.Text = "TEST";
			}
			else if (MaCongViec.Text == "")
			{
				MessageBox.Show("Vui lòng nhập mã công việc để hiển thị thông tin ", "Thông báo", MessageBoxButtons.OK, MessageBoxIcon.Warning);
			}
			else if (MaCongViec.Text == "QT00" || MaCongViec.Text == "KTTQ")
			{
				richTextBox1.Text = "Kiểm tra tổng quát ";
				richTextBox2.Text = "TEST";
			}
			else if (MaCongViec.Text == "MOI" || MaCongViec.Text == "QT10")
			{
				richTextBox1.Text = "Giấy mời làm việc  ";
				richTextBox2.Text = "Biên bản ";
			}
			else if (MaCongViec.Text == "BIENBAN" || MaCongViec.Text == "QT11")
			{
				richTextBox1.Text = "Biên Bản ";
				richTextBox2.Text = "Biên bản ";
			}
			else if (MaCongViec.Text == "QT02")
			{
				richTextBox1.Text = "Dò Bài ";
				richTextBox2.Text = "TEST";
			}
			else if (MaCongViec.Text == "QT03")
			{
				richTextBox1.Text = "Kiểm tra hành chính ";
				richTextBox2.Text = "A33";
			}
			else if (MaCongViec.Text == "A00" || MaCongViec.Text == "BTVN")
			{
				richTextBox1.Text = "Bài Tập Về Nhà ";
				richTextBox2.Text = "Học Tập";
			}
			else if (MaCongViec.Text == "A01" || MaCongViec.Text == "LMS")
			{
				richTextBox1.Text = "Tác Vụ Trên Trang HocTrucTuyen ";
				richTextBox2.Text = "HocTrucTuyen";
			}
			else if (MaCongViec.Text == "A02")
			{
				richTextBox1.Text = "Soạn bài theo TKB";
				richTextBox2.Text = "Soạn bài ";
			}
			else if (MaCongViec.Text == "A03")
			{
				richTextBox1.Text = "B.REPORTER ";
				richTextBox2.Text = "Report";
			}
			else if (MaCongViec.Text == "A04")
			{
				richTextBox1.Text = "Kiểm tra báo cáo ";
				richTextBox2.Text = "Khác ";
			}
			else if (MaCongViec.Text == "Z00")
			{
				richTextBox1.Text = "Ghi Chú ";
				richTextBox2.Text = "Note";
			}
			else
			{
				MessageBox.Show("Mã Công Việc của bạn bị sai hoặc không tồn tại , vui lòng kiểm tra lại ", "Thông báo", MessageBoxButtons.OK, MessageBoxIcon.Warning);
			}
		}

		private void richTextBox1_TextChanged(object sender, EventArgs e)
		{

		}

		private void richTextBox2_TextChanged(object sender, EventArgs e)
		{

		}

		private void toolStripProgressBar1_Click(object sender, EventArgs e)
		{

		}

		private void toolStripStatusLabel1_Click(object sender, EventArgs e)
		{
			if (dangnhap == true)
			{
				toolStripStatusLabel1.Text = $"Người dùng: {currentUsername} | Trạng thái: Đăng nhập";
				MessageBox.Show($"Người dùng hiện tại: {currentUsername}", "Thông tin người dùng", MessageBoxButtons.OK, MessageBoxIcon.Information);
			}
			else
			{
				MessageBox.Show("Chưa có người dùng nào đăng nhập.", "Thông tin người dùng", MessageBoxButtons.OK, MessageBoxIcon.Information);
				toolStripStatusLabel1.Text = "Người dùng: Không có | Trạng thái: Chưa đăng nhập";
			}
		}

		private void trởVềD8angNhậpToolStripMenuItem_Click(object sender, EventArgs e)
		{
			tabControl1.SelectedIndex = 0;
		}

		private void whatIsThisToolStripMenuItem_Click(object sender, EventArgs e)
		{
			MessageBox.Show("đây là thời khóa biểu   ", "Thông tin thời khóa biểu", MessageBoxButtons.OK, MessageBoxIcon.Information);
		}

		private void linkLabel5_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
		{
			MessageBox.Show("Contact to your administrator to change your username or get more info about your account ", "Account Information", MessageBoxButtons.OK, MessageBoxIcon.Information);
		}

		private void label96_Click(object sender, EventArgs e)
		{
			if (dangnhap == true)
			{
				label96.Text = "Đang hoạt động ";
			}
			else
			{
				label96.Text = "Bị vô hiệu hóa / chưa đăng nhập  ";
			}
		}

		private void openApplicationToolStripMenuItem_Click(object sender, EventArgs e)
		{

		}

		private void openToolStripMenuItem_Click(object sender, EventArgs e)
		{
			tabControl1.Visible = true;
		}

		private void cLoseToolStripMenuItem_Click(object sender, EventArgs e)
		{
			tabControl1.Visible = false;
		}

		private void button33_Click(object sender, EventArgs e)
		{
			tabControl1.Visible = false;
		}

		private void openVisualApplicationToolStripMenuItem_Click(object sender, EventArgs e)
		{
			tabControl1.Visible = true;
		}

		private void hiddenToolStripMenuItem_Click(object sender, EventArgs e)
		{
			tabControl1.Visible = false;
		}

		private void toolStripStatusLabel2_Click(object sender, EventArgs e)
		{
			tabControl1.Visible = !tabControl1.Visible;
		}

		private void pictureBox1_Click(object sender, EventArgs e)
		{

		}

		private void button34_Click(object sender, EventArgs e)
		{
			System.Diagnostics.Process.Start("SystemPropertiesPerformance.exe");
		}

		private void button35_Click(object sender, EventArgs e)
		{
			System.Diagnostics.Process.Start("SystemPropertiesPerformance.exe");
		}

		private void button37_Click(object sender, EventArgs e)
		{
			Process.Start("control.exe", "mouse");
		}

		private void toolStripStatusLabel3_Click(object sender, EventArgs e)
		{
			MessageBox.Show($"Phiên bản hiện tại là {ver}", "Thông tin phiên bản", MessageBoxButtons.OK, MessageBoxIcon.Information);
		}

		private void mởToolStripMenuItem_Click(object sender, EventArgs e)
		{
			using (var ofd = new OpenFileDialog())
			{
				ofd.Filter = "Text files|*.txt|All files|*.*";
				if (ofd.ShowDialog() != DialogResult.OK) return;
				try
				{
					var lines = File.ReadAllLines(ofd.FileName, Encoding.UTF8);
					for (int i = 1; i < lines.Length; i++)
					{
						var parts = lines[i].Split('\t');
						if (parts.Length < 5) continue;
						DateTime dt;
						DateTime.TryParse(parts[2], out dt);
						bool qt = parts[3].Trim().ToLower() == "true" || parts[3].Trim() == "1" || parts[3].Trim().ToLower() == "x";
						var t = new TaskItem { Ten = parts[1], ThoiGianHoanThanh = dt, QuanTrong = qt, LinhVuc = parts[4], NoiDung = parts.Length > 5 ? parts[5] : string.Empty };
						tasks.Add(t);
					}
					RecalculateStt();
					MessageBox.Show("Import thành công");
				}
				catch (Exception ex)
				{
					MessageBox.Show("Không thể import: " + ex.Message);
				}
			}
		}

		private void lưuToolStripMenuItem_Click(object sender, EventArgs e)
		{
			using (var sfd = new SaveFileDialog())
			{
				sfd.Filter = "Text files|*.txt|All files|*.*";
				if (sfd.ShowDialog() != DialogResult.OK) return;
				try
				{
					using (var sw = new StreamWriter(sfd.FileName, false, Encoding.UTF8))
					{
						sw.WriteLine("Stt\tTên\tThời gian hoàn thành\tQuan trọng\tLĩnh vực\tNội dung");
						foreach (var t in tasks)
						{
							sw.WriteLine($"{t.Stt}\t{t.Ten}\t{t.ThoiGianHoanThanh:dd/MM/yyyy HH:mm}\t{t.QuanTrong}\t{t.LinhVuc}\t{t.NoiDung}");
						}
					}
					MessageBox.Show("Export thành công");
				}
				catch (Exception ex)
				{
					MessageBox.Show("Không thể export: " + ex.Message);
				}
			}
		}

		private void hànhĐộngToolStripMenuItem_Click(object sender, EventArgs e)
		{
			if (tabControl1.Visible != true)
			{
				tabControl1.Visible = true;
			}
			tabControl1.SelectedIndex = 2
 ;
		}

		private void toolStripStatusLabel4_Click(object sender, EventArgs e)
		{

		}

		private void tạiSaoTôiKhôngThểXemĐượcHìnhẢnhToolStripMenuItem_Click(object sender, EventArgs e)
		{
			MessageBox.Show("Nếu bạn không thể xem được hình ảnh, có thể do một số nguyên nhân sau:\n\n1. Hình ảnh bị thiếu hoặc đã bị xóa.\n2. Định dạng hình ảnh không được hỗ trợ.\n3. Vấn đề về quyền truy cập tệp hình ảnh với tài khoản và quyền truy cập của bạn .\n4. Lỗi phần mềm hoặc trình xem hình ảnh.\n\nVui lòng kiểm tra lại các nguyên nhân trên và đảm bảo rằng hình ảnh tồn tại, có định dạng hợp lệ và bạn có quyền truy cập vào nó.", "Lỗi hiển thị hình ảnh", MessageBoxButtons.OK, MessageBoxIcon.Error);
		}

		private void tạiSaoTôiKhôngThểChỉnhSửaĐượcChúngToolStripMenuItem_Click(object sender, EventArgs e)
		{
			MessageBox.Show("lý do là hình ảnh với chế độ READ ONLY , bạn có thể sử dụng phần mềm chỉnh sửa ảnh để chỉnh sửa sau đó lưu lại với tên khác và tải lên lại phần mềm này để xem được hình ảnh đã chỉnh sửa ", "Lý do không thể chỉnh sửa", MessageBoxButtons.OK, MessageBoxIcon.Information);
		}

		private void tôiKhôngThểZoomHìnhẢnhToolStripMenuItem_Click(object sender, EventArgs e)
		{
			MessageBox.Show("Nếu bạn không thể zoom hình ảnh, có thể do một số nguyên nhân sau:\n\n1. Hình ảnh đã được thiết lập ở chế độ cố định (Fixed Size) hoặc không hỗ trợ zoom.\n2. Lỗi phần mềm hoặc trình xem hình ảnh không hỗ trợ tính năng zoom.\n3. Vấn đề về quyền truy cập tệp hình ảnh với tài khoản và quyền truy cập của bạn .\n\nVui lòng kiểm tra lại các nguyên nhân trên và đảm bảo rằng hình ảnh hỗ trợ zoom, phần mềm của bạn có tính năng zoom và bạn có quyền truy cập vào tệp hình ảnh.", "Lỗi zoom hình ảnh", MessageBoxButtons.OK, MessageBoxIcon.Error);
		}

		private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
		{

		}

		private void groupBox11_Enter(object sender, EventArgs e)
		{

		}

		private void thựcHiệnToolStripMenuItem_Click(object sender, EventArgs e)
		{
			// thực hiên in toàn bộ tác vụ ra pdf 

		}

		private void groupBox10_Enter(object sender, EventArgs e)
		{

		}

		private void centerWindowsToolStripMenuItem_Click(object sender, EventArgs e)
		{
			CenterTabControl();
		}

		private void chínhGiữaToolStripMenuItem_Click(object sender, EventArgs e)
		{
			CenterTabControl();
		}

		private void toCửaSổHơnToolStripMenuItem_Click(object sender, EventArgs e)
		{
			tabControl1.Dock = DockStyle.Fill;
		}

		private void toiuuhoa_TextChanged(object sender, EventArgs e)
		{

		}

		private void progressBar3_Click(object sender, EventArgs e)
		{

		}

		private void button34_Click_1(object sender, EventArgs e)
		{
			richTextBox7.AppendText($"Tối ưu hóa phần mềm \n");
			toiuuhoa.Text = toiuuhoa.Text + "chuẩn bị... ";
			int phantram = 0;
			for (int i = 0; i <= 100; i++)
			{
				phantram = i;
				tientrinh.Value = phantram;
				Tientrinhchuso.Text = $"Đang tối ưu hóa... {phantram}%";
				toiuuhoa.Text = $"Đang tối ưu hóa phần số   {phantram * 265}   của system ( Thành công )";
				Application.DoEvents(); // Cập nhật giao diện
				System.Threading.Thread.Sleep(50); // Giả lập thời gian xử lý
			}
		}

		private void Tientrinhchuso_Click(object sender, EventArgs e)
		{

		}

		private void button35_Click_1(object sender, EventArgs e)
		{
			toiuuhoa.Text = toiuuhoa.Text + "Installation ";
			int phantram = 0;
			for (int i = 0; i <= 100; i++)
			{
				phantram = i;
				tientrinh.Value = phantram;
				Tientrinhchuso.Text = $"Đang cài đặt ... {phantram}%";
				toiuuhoa.Text = $"Đang cài đặt phần số   {phantram * 265}   của system ( Thành công )";
				Application.DoEvents(); // Cập nhật giao diện
				System.Threading.Thread.Sleep(50); // Giả lập thời gian xử lý

			}
			MessageBox.Show("vui lòng sử dụng cài đặt từ file để hoàn tất  ", "Cài đặt hoàn tất ", MessageBoxButtons.OK, MessageBoxIcon.Information);
		}

		private void button36_Click(object sender, EventArgs e)
		{
			checkedListBox3.Items.Add(Nhanvienthamgia.Text);
		}

		private void button37_Click_1(object sender, EventArgs e)
		{
			OpenFileDialog openFileDialog = new OpenFileDialog();
			openFileDialog.Filter = "Text files (*.txt)|*.txt|All files (*.*)|*.*";
			openFileDialog.Title = "Chọn tệp TXT";

			if (openFileDialog.ShowDialog() == DialogResult.OK)
			{
				// Đọc tất cả các dòng trong file
				string[] lines = System.IO.File.ReadAllLines(openFileDialog.FileName);

				// Xóa nội dung cũ trong checkedListBox3
				checkedListBox3.Items.Clear();

				// Thêm từng dòng vào checkedListBox3
				foreach (string line in lines)
				{
					checkedListBox3.Items.Add(line);
				}
			}
		}

		private void button42_Click(object sender, EventArgs e)
		{
			for (int i = 0; i < checkedListBox3.Items.Count; i++)
			{
				checkedListBox3.SetItemChecked(i, true);
			}
		}

		private void groupBox4_Enter(object sender, EventArgs e)
		{

		}

		private void printImageToolStripMenuItem_Click(object sender, EventArgs e)
		{
			if (dangnhap == true)
			{
			 if (pictureBox3.Image == null)
				{
					MessageBox.Show("Không có hình để xuất.", "Lỗi", MessageBoxButtons.OK, MessageBoxIcon.Warning);
					return;
				}

				using (var sfd = new SaveFileDialog())
				{
					sfd.Filter = "PDF files (*.pdf)|*.pdf";
					sfd.FileName = "ThoiKhoaBieu.pdf";
					if (sfd.ShowDialog() != DialogResult.OK) return;
					string outputPath = sfd.FileName;

					var pd = new System.Drawing.Printing.PrintDocument();
					try
					{
						// Try to use Microsoft Print to PDF if available
						const string pdfPrinterName = "Microsoft Print to PDF";
						if (pd.PrinterSettings.IsValid && Array.IndexOf(System.Drawing.Printing.PrinterSettings.InstalledPrinters.Cast<string>().ToArray(), pdfPrinterName) >= 0)
						{
							pd.PrinterSettings.PrinterName = pdfPrinterName;
							pd.PrinterSettings.PrintToFile = true;
							pd.PrinterSettings.PrintFileName = outputPath;
						}
						else
						{
							// If Microsoft Print to PDF not found, show PrintDialog so user can pick a PDF printer
							using (var printDlg = new PrintDialog())
							{
								printDlg.Document = pd;
								printDlg.AllowSomePages = false;
								printDlg.AllowSelection = false;
								if (printDlg.ShowDialog() != DialogResult.OK)
									return;
							}
						}

						// Render the PictureBox image to the print page, preserving aspect ratio
						pd.PrintController = new System.Drawing.Printing.StandardPrintController(); // suppress UI
						pd.DefaultPageSettings.Landscape = false;
						pd.PrintPage += (snd, ev) =>
						{
							var img = pictureBox3.Image;
							var g = ev.Graphics;
							g.InterpolationMode = System.Drawing.Drawing2D.InterpolationMode.HighQualityBicubic;
							g.SmoothingMode = System.Drawing.Drawing2D.SmoothingMode.HighQuality;
							var marginBounds = ev.MarginBounds;

							// If the image is larger than the printable area, scale it down while preserving aspect ratio
							float imgRatio = (float)img.Width / img.Height;
							float areaRatio = (float)marginBounds.Width / marginBounds.Height;
							int drawWidth, drawHeight;
							if (imgRatio > areaRatio)
							{
								drawWidth = marginBounds.Width;
								drawHeight = (int)(marginBounds.Width / imgRatio);
							}
							else
							{
								drawHeight = marginBounds.Height;
								drawWidth = (int)(marginBounds.Height * imgRatio);
							}

							var drawX = marginBounds.X + (marginBounds.Width - drawWidth) / 2;
							var drawY = marginBounds.Y + (marginBounds.Height - drawHeight) / 2;
							var drawRect = new System.Drawing.Rectangle(drawX, drawY, drawWidth, drawHeight);

							g.Clear(System.Drawing.Color.White);
							g.DrawImage(img, drawRect);
							ev.HasMorePages = false;
						};

						pd.Print();
						MessageBox.Show("Đã xuất thành công: " + outputPath, "Hoàn tất", MessageBoxButtons.OK, MessageBoxIcon.Information);
					}
					catch (Exception ex)
					{
						MessageBox.Show("Lỗi khi xuất PDF: " + ex.Message, "Lỗi", MessageBoxButtons.OK, MessageBoxIcon.Error);
					}
					finally
					{
						pd.PrintPage -= null;
						pd.Dispose();
					}
				}
			}
			else
			{
				MessageBox.Show("Vui lòng đăng nhập để sử dụng chức năng này ", "Thông báo", MessageBoxButtons.OK, MessageBoxIcon.Warning);
			}
		}

		private void Rev_Enter(object sender, EventArgs e)
		{
			// Khi GroupBox được focus hoặc mở, ta sẽ tạo giao diện trắc nghiệm
			int soCauHoi;
			if (int.TryParse(maskedTextBox1.Text, out soCauHoi))
			{
				TaoCauHoi(soCauHoi);
			}
		}

		private void SoCauHoi_MaskInputRejected(object sender, MaskInputRejectedEventArgs e)
		{
			int soCauHoi;
			if (int.TryParse(maskedTextBox1.Text, out soCauHoi))
			{
				TaoCauHoi(soCauHoi);
			}
		}
		private void TaoCauHoi(int soCauHoi)
		{
			groupBox1.Controls.Clear();

			TableLayoutPanel table = new TableLayoutPanel
			{
				RowCount = soCauHoi,
				ColumnCount = 5, // 1 cột số câu + 4 cột A-D
				Dock = DockStyle.Fill,
				AutoSize = true,
				CellBorderStyle = TableLayoutPanelCellBorderStyle.Single // để dễ nhìn
			};

			// Đặt độ rộng cột
			table.ColumnStyles.Add(new ColumnStyle(SizeType.Absolute, 50)); // số câu
			for (int i = 0; i < 4; i++)
			{
				table.ColumnStyles.Add(new ColumnStyle(SizeType.Absolute, 50)); // A-D
			}

			// Sinh từng hàng
			for (int i = 0; i < soCauHoi; i++)
			{
				table.RowStyles.Add(new RowStyle(SizeType.AutoSize));

				// Label số câu
				Label lbl = new Label
				{
					Text = (i + 1).ToString(),
					TextAlign = ContentAlignment.MiddleCenter,
					Dock = DockStyle.Fill,
					AutoSize = true,
					Margin = new Padding(3)
				};
				table.Controls.Add(lbl, 0, i);

				// FlowLayoutPanel cho từng câu
				FlowLayoutPanel fl = new FlowLayoutPanel
				{
					Dock = DockStyle.Fill,
					FlowDirection = FlowDirection.LeftToRight,
					AutoSize = true,
					WrapContents = false,
					Margin = new Padding(0)
				};

				string[] dapAn = { "A", "B", "C", "D" };
				for (int j = 0; j < dapAn.Length; j++)
				{
					System.Windows.Forms.RadioButton rb = new System.Windows.Forms.RadioButton
					{
						Text = dapAn[j],
						TextAlign = ContentAlignment.MiddleCenter,
						AutoSize = true,
						Margin = new Padding(6, 3, 6, 3)
					};
					fl.Controls.Add(rb);
				}

				table.Controls.Add(fl, 1, i);
				table.SetColumnSpan(fl, 4);
			}

			groupBox1.Controls.Add(table);
		}

		private void richTextBox7_TextChanged(object sender, EventArgs e)
		{

		}

		private void button44_Click(object sender, EventArgs e)
		{
			richTextBox7.Text = "";
		}

		private void button45_Click(object sender, EventArgs e)
		{

		}

		private void NutQuayVe_Click(object sender, EventArgs e)
		{
			webView21.GoBack(); 
		}

		private void NutTien_Click(object sender, EventArgs e)
		{
			webView21.GoForward(); 
		}

		private void TruyCap_Click(object sender, EventArgs e)
		{
			string url = DiaChiThanh.Text.Trim();
			richTextBox7.AppendText("" + $"{DateTime.Now} -Truy cập internet  {cuser} - ({nickname})\n");
			if (string.IsNullOrEmpty(url))
			{
				MessageBox.Show("Nhập địa chỉ .");
				return;
			}

			// Nếu người dùng quên http:// thì tự thêm vào
			if (!url.StartsWith("http://") && !url.StartsWith("https://"))
			{
				url = "https://" + url;
			}
			if (webView21.CoreWebView2 != null)
			{
				webView21.CoreWebView2.Navigate(url);
			}

		}

		private void ThanhDiaChi_TextChanged(object sender, EventArgs e)
		{
			
		}

		private void TaiLai_Click(object sender, EventArgs e)
		{
			webView21.Refresh();
		}
		private void WebView21_NavigationCompleted(object sender, Microsoft.Web.WebView2.Core.CoreWebView2NavigationCompletedEventArgs e)
		{
			if (webView21.Source != null)
			{
				DiaChiThanh.Text = webView21.Source.ToString();
			}
		}
		private void WebView21_SourceChanged(object sender, Microsoft.Web.WebView2.Core.CoreWebView2SourceChangedEventArgs e)
		{
			if (webView21.Source != null)
			{
				DiaChiThanh.Text = webView21.Source.ToString();
			}
		}
		private void webView21_Click(object sender, EventArgs e)
		{

		}

		private void banĐầuToolStripMenuItem_Click(object sender, EventArgs e)
		{
			tabControl1.Dock = DockStyle.None;
		}

		private void button46_Click(object sender, EventArgs e)
		{
			tabControl1.Dock = DockStyle.Fill; 
		}

		private void fullWindowsToolStripMenuItem_Click(object sender, EventArgs e)
		{
			tabControl1.Dock = DockStyle.Fill;
		}

		private void normalWindowsToolStripMenuItem_Click(object sender, EventArgs e)
		{
			tabControl1.Dock = DockStyle.None;
		}

		private void aboutToolStripMenuItem1_Click(object sender, EventArgs e)
		{
			MessageBox.Show("HMKA broswer app ver 1.0 - using WebView2" , "about "  , MessageBoxButtons.OK, MessageBoxIcon.Information);
		}

		private void button47_Click(object sender, EventArgs e)
		{
			tabControl1.SelectedIndex = 10;
			richTextBox7.AppendText($"{DateTime.Now} - {cuser} đang truy cập website làm bài  \n");
			webView21.CoreWebView2.Navigate("https://forms.office.com/Pages/ResponsePage.aspx?id=DQSIkWdsW0yxEjajBLZtrQAAAAAAAAAAAANAATt2igZUMTdaM0NEVjAxREZJOEhVVVRWNklFOEE0Qi4u");
		}

		private void label53_Click(object sender, EventArgs e)
		{

		}

		private void button48_Click(object sender, EventArgs e)
		{
			tabControl1.SelectedIndex = 10;
			richTextBox7.AppendText($"{DateTime.Now} - {cuser} đang truy cập website làm bài  \n");	
		}
		
		private void start_Click(object sender, EventArgs e)
		{
			if (int.TryParse(txtMinutes.Text, out int minutes))
			{
				SoGiayConLai = minutes * 60;
			}
			else
			{
				MessageBox.Show("Vui lòng nhập số phút hợp lệ!");
				return;
			}
			int phut = int.Parse(txtMinutes.Text);
			SoGiayConLai = minutes * 60;
			timer.Start();
		}

		private void chosechon_Click(object sender, EventArgs e)
		{
			OpenFileDialog ofd = new OpenFileDialog();
			ofd.Filter = "Âm thanh|*.mp3;*.wav";
			if (ofd.ShowDialog() == DialogResult.OK)
			{
				selectedFile = ofd.FileName;
			}
		}

		private void Test_Click(object sender, EventArgs e)
		{
			if (string.IsNullOrEmpty(selectedFile))
			{
				MessageBox.Show("Bạn chưa chọn file âm thanh!");
				return;
			}

			if (!isPlaying)
			{
				player.URL = selectedFile;
				player.controls.play();
				isPlaying = true;
			}
			else
			{
				player.controls.stop();
				isPlaying = false;
			}
		}

		private void button51_Click(object sender, EventArgs e)
		{
			if (isPlaying)
			{
				player.controls.stop();
				isPlaying = false;
			}
			
		}

		private void DiaChiThanh_TextChanged(object sender, EventArgs e)
		{

		}

		private void Print_Click(object sender, EventArgs e)
		{
			if (pdfDocument == null) return;

			PrintDialog pd = new PrintDialog();
			pd.Document = pdfDocument.CreatePrintDocument();
			if (pd.ShowDialog() == DialogResult.OK)
			{
				pd.Document.Print();
			}
		}
		private void PrintDocument1_PrintPage(object sender, PrintPageEventArgs e)
		{
			// Ví dụ: in một đoạn text
			e.Graphics.DrawString(" ",
				new Font("Arial", 14),
				Brushes.Black,
				new PointF(100, 100));
		}
		private string selectedFilePath;
		private void intep_PrintPage(object sender, PrintPageEventArgs e)
		{
			if (!string.IsNullOrEmpty(selectedFilePath))
			{
				string content = File.ReadAllText(selectedFilePath);
				e.Graphics.DrawString(content,
					new Font("Arial", 12),
					Brushes.Black,
					new RectangleF(50, 50, e.PageBounds.Width - 100, e.PageBounds.Height - 100));
			}
		}

		private void XemLai_Click(object sender, EventArgs e)
		{
			OpenFileDialog ofd = new OpenFileDialog();
			ofd.Filter = "PDF files|*.pdf";
			if (ofd.ShowDialog() == DialogResult.OK)
			{
				
				pdfDocument = PdfDocument.Load(ofd.FileName);

				// Gắn vào PrintPreviewControl (CuaSoIn)
				CuaSoIn.Document = pdfDocument.CreatePrintDocument();
			}
		}

		private void groupBox14_Enter(object sender, EventArgs e)
		{

		}
		private void LoadPdf(string filePath)
		{
			pdfDocument = PdfDocument.Load(filePath);
			CuaSoIn.Document = pdfDocument.CreatePrintDocument();

			// Thiết lập thanh cuộn theo số trang
			vScrollBar1.Minimum = 0;
			vScrollBar1.Maximum = pdfDocument.PageCount - 1;
			vScrollBar1.Value = 0;
		}
		private void vScrollBar1_Scroll(object sender, ScrollEventArgs e)
		{
			CuaSoIn.StartPage = vScrollBar1.Value;
		}

		private void button29_Click(object sender, EventArgs e)
		{
			PrintPreviewDialog previewDialog = new PrintPreviewDialog();
			previewDialog.Document = pdfDocument.CreatePrintDocument();
			previewDialog.PrintPreviewControl.Zoom = 1.2; // zoom 120%
			previewDialog.ShowDialog();
		}

		private void cửaSổ2ToolStripMenuItem_Click(object sender, EventArgs e)
		{
			Form2 f2 = new Form2();
			f2.Show();
		}

		private void lblCountdown_Click(object sender, EventArgs e)
		{

		}

		private void txtMinutes_TextChanged(object sender, EventArgs e)
		{

		}

		private void quảnLýThờiGianToolStripMenuItem_Click(object sender, EventArgs e)
		{

		}

		private void mởTabToolStripMenuItem_Click(object sender, EventArgs e)
		{
			tabControl1.SelectedIndex = 3; 
		}

		private void chọnÂmBáoToolStripMenuItem_Click(object sender, EventArgs e)
		{
			OpenFileDialog ofd = new OpenFileDialog();
			ofd.Filter = "Âm thanh|*.mp3;*.wav";
			if (ofd.ShowDialog() == DialogResult.OK)
			{
				selectedFile = ofd.FileName;
			}
		}

		private void button55_Click(object sender, EventArgs e)
		{
			txtMinutes.Text += "7";
		}

		private void button54_Click(object sender, EventArgs e)
		{
			txtMinutes.Text += "8";
		}

		private void button53_Click(object sender, EventArgs e)
		{
			txtMinutes.Text += "9";
		}

		private void Number1_Click(object sender, EventArgs e)
		{
			txtMinutes.Text += "1"; 
		}

		private void Number2_Click(object sender, EventArgs e)
		{
			txtMinutes.Text += "2";
		}

		private void button52_Click(object sender, EventArgs e)
		{
			txtMinutes.Text += "3";
		}

		private void Number6_Click(object sender, EventArgs e)
		{
			txtMinutes.Text += "6";
		}

		private void Number4_Click(object sender, EventArgs e)
		{
			txtMinutes.Text += "4";
		}

		private void Number5_Click(object sender, EventArgs e)
		{
			txtMinutes.Text += "5";
		}

		private void Number0_Click(object sender, EventArgs e)
		{
			txtMinutes.Text += "0";
		}

		private void ClearButton_Click(object sender, EventArgs e)
		{
			if (!string.IsNullOrEmpty(txtMinutes.Text))
			{
				// Xóa ký tự cuối cùng
				txtMinutes.Text = txtMinutes.Text.Substring(0, txtMinutes.Text.Length - 1);
			}
		}

		private void Starttimer_Click(object sender, EventArgs e)
		{
			if (int.TryParse(txtMinutes.Text, out int minutes))
			{
				SoGiayConLai = minutes * 60;
			}
			else
			{
				MessageBox.Show("Vui lòng nhập số phút hợp lệ!");
				return;
			}
			int phut = int.Parse(txtMinutes.Text);
			SoGiayConLai = minutes * 60;
			timer.Start();
		}
	}

}

		


