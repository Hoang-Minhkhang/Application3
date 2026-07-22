using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Diagnostics;
using System.Drawing;
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

			if ((username == "MinhKhang1995" && password == "123456987@admin") ||
				(username == "Administrator" && password == "123456987@admin") ||
				(username == "Test" && password == "test@123") ||
				(username == "TurboLines" && password == "TurboLines@123") ||
				(username == "User1005" && password == "123456987"))
			{
				currentUsername = username;
				cuser = username;

				// determine nickname before creating other forms
				if (currentUsername == "MinhKhang1995") nickname = "MinhKhang";
				else if (currentUsername == "Administrator") nickname = "Quản trị viên";
				else if (currentUsername == "Test") nickname = "Người dùng thử";
				else if (currentUsername == "TurboLines") nickname = "ToNguyenCat";
				else if (currentUsername == "User1005") nickname = "DuyKhang";
				else nickname = username;

				// open forms with both username and nickname
				Form2 form2 = new Form2(username, nickname);
				form2.Show();

				// chuyển sang form 1 với username và nickname
				Form1 form1 = new Form1(username,nickname );
				form1.Show();


				dangnhap = true;

				// Update this window title to include the nickname
				this.Text = $"Đăng nhập - {nickname}";

				// Show a tray balloon notification (compatible with .NET Framework WinForms)
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
	}
}
