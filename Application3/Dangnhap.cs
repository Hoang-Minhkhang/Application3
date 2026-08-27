using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Diagnostics;
using System.Drawing;
using System.Drawing.Text;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Controls;
using System.Windows.Forms;

namespace Application3
{
	public partial class Dangnhap : Form
	{
		public Dangnhap()
		{
			InitializeComponent();
			this.AcceptButton = button3; // button3
										 // là nút "Đăng nhập"
		}
		string currentUsername = "";
		string nickname = ""; 
		string cuser = "";
		bool dangnhap = false; 
		private void button3_Click(object sender, EventArgs e)
		{
			string username = TaiKhoan.Text;
			string password = MatKhau.Text;
			string  TruyenForm2 = "";
			var credentials = new Dictionary<string, string>
			{
				{ "MinhKhang1995", "123456987@admin" },
				{ "Administrator", "123456987@admin" },
				{ "Test", "test@123" },
				{ "TurboLines", "TurboLines@123" },
				{ "User1005", "123456987" }
			};
			
			if (credentials.TryGetValue(username, out var expected) && expected == password)
			{
				currentUsername = username;
				cuser = username;

				var nicknames = new Dictionary<string, string>
				{
					{ "MinhKhang1995", "MinhKhang" },
					{ "Administrator", "Quản trị viên" },
					{ "Test", "Người dùng thử" },
					{ "TurboLines", "ToNguyenCat" },
					{ "User1005", "DuyKhang" }
				};

				string nickname;
				if (!nicknames.TryGetValue(username, out nickname))
					nickname = username;

				// open forms with both username and nickname
				Form2 form2 = new Form2(username, nickname , TruyenForm2 );
				form2.Show();

				Form1 form1 = new Form1(username, nickname);
				form1.Show();

				dangnhap = true;
				this.Text = $"Đăng nhập - {nickname}";
				MatKhau.Text = string.Empty;

				ShowBalloonNotification(
					$"Xin chào {nickname}",
					"Bắt đầu quá trình làm việc của bạn"
				);
			}
			else
			{
				dangnhap = false;
				MessageBox.Show("Tên đăng nhập hoặc mật khẩu không đúng. Vui lòng thử lại.", "Lỗi đăng nhập", MessageBoxButtons.OK, MessageBoxIcon.Error);
			}
		}

		private void TaiKhoan_MaskInputRejected(object sender, MaskInputRejectedEventArgs e)
		{

		}

		private void MatKhau_MaskInputRejected(object sender, MaskInputRejectedEventArgs e)
		{

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

		private void button4_Click(object sender, EventArgs e)
		{
			try
			{
				// Mở On-Screen Keyboard
				Process.Start("osk.exe");
			}
			catch (Exception ex)
			{
				MessageBox.Show("Không thể mở On-Screen Keyboard: " + ex.Message);
			}
		}

		private void label65_Click(object sender, EventArgs e)
		{
			MessageBox.Show("Lên hệ với quản trị hay người điều hành ", "Thông báo", MessageBoxButtons.OK, MessageBoxIcon.Information);
		}

		private void thoátToolStripMenuItem_Click(object sender, EventArgs e)
		{
			
		}

		private void Dangnhap_Load(object sender, EventArgs e)
		{

		}

		private void nOKEYBOARDToolStripMenuItem_Click(object sender, EventArgs e)
		{
			Process.Start("osk.exe");
		}

		private void Dangnhap_HelpButtonClicked(object sender, CancelEventArgs e)
		{

		}

		private void button2_Click(object sender, EventArgs e)
		{
			tabControl1.SelectedIndex = 1; 
		}

		private void button5_Click(object sender, EventArgs e)
		{
			tabControl1.SelectedIndex = 0;
		}

		private void button6_Click(object sender, EventArgs e)
		{
			this.Close();
		}
	}
}
