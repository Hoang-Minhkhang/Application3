using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Diagnostics;

namespace Winnt3._1
{
	public partial class Form1 : Form
	{
		public Form1()
		{
			InitializeComponent();
			
		}
		private void CreateProgramIcon(Panel parent, string text, int x, int y)
		{
			// Nút icon
			Button btn = new Button();
			btn.Text = text;
			btn.TextAlign = ContentAlignment.BottomCenter;
			btn.ImageAlign = ContentAlignment.TopCenter;
			btn.Size = new Size(80, 80);
			btn.Location = new Point(x, y);
			btn.FlatStyle = FlatStyle.Standard;
			btn.BackColor = Color.LightGray;

			// Gắn icon giả (có thể thay bằng ảnh thật)
			Bitmap bmp = new Bitmap(32, 32);
			using (Graphics g = Graphics.FromImage(bmp))
			{
				g.FillRectangle(Brushes.DarkGray, 0, 0, 32, 32);
				g.DrawRectangle(Pens.Black, 0, 0, 31, 31);
			}
			btn.Image = bmp;

			parent.Controls.Add(btn);
		}
		private void Form1_Load(object sender, EventArgs e)
		{

		}

		private void button1_Click(object sender, EventArgs e)
		{
			try
			{
				string winverPath = System.IO.Path.Combine(Environment.SystemDirectory, "winver.exe");
				if (System.IO.File.Exists(winverPath))
				{
					System.Diagnostics.Process.Start(new System.Diagnostics.ProcessStartInfo(winverPath) { UseShellExecute = true });
				}
				else
				{
					System.Diagnostics.Process.Start(new System.Diagnostics.ProcessStartInfo("winver.exe") { UseShellExecute = true });
				}
			}
			catch (Exception ex)
			{
				MessageBox.Show(this, "Failed to start Winver: " + ex.Message, "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
			}
		}

		private void button2_Click(object sender, EventArgs e)
		{
			try
			{
				Process.Start("calc.exe");
			}
			catch (Exception ex)
			{
				MessageBox.Show(this, "Failed to start Calculator: " + ex.Message, "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
			}
		}

		private void button3_Click(object sender, EventArgs e)
		{
			Process.Start("cmd.exe"); 
		}

		private void button4_Click(object sender, EventArgs e)
		{
			Process.Start("taskmgr.exe");
		}

		private void button5_Click(object sender, EventArgs e)
		{
			
			using (OpenFileDialog ofd = new OpenFileDialog())
			{
				ofd.Title = "Chọn file Application Reference (.appref-ms)";
				ofd.Filter = "Application Reference|*.appref-ms";
				ofd.InitialDirectory = Environment.GetFolderPath(Environment.SpecialFolder.Desktop);
				ofd.RestoreDirectory = true;

				if (ofd.ShowDialog() != DialogResult.OK)
					return;

				string selectedPath = ofd.FileName;

				try
				{
					var psi = new System.Diagnostics.ProcessStartInfo
					{
						FileName = selectedPath,
						UseShellExecute = true
					};
					System.Diagnostics.Process.Start(psi);
				}
				catch (Exception ex)
				{
					MessageBox.Show($"Không thể mở file:\r\n{ex.Message}", "Lỗi", MessageBoxButtons.OK, MessageBoxIcon.Error);
				}
			}
		}

		private void button6_Click(object sender, EventArgs e)
		{
			using (OpenFileDialog ofd = new OpenFileDialog())
			{
				ofd.Title = "Chọn file EXE ";
				ofd.Filter = "Executable Files|*.exe|All Files|*.*";
				ofd.InitialDirectory = Environment.GetFolderPath(Environment.SpecialFolder.Desktop);
				ofd.RestoreDirectory = true;

				if (ofd.ShowDialog() != DialogResult.OK)
					return;

				string selectedPath = ofd.FileName;

				try
				{
					var psi = new System.Diagnostics.ProcessStartInfo
					{
						FileName = selectedPath,
						UseShellExecute = true
					};
					System.Diagnostics.Process.Start(psi);
				}
				catch (Exception ex)
				{
					MessageBox.Show($"Không thể mở file:\r\n{ex.Message}", "Lỗi", MessageBoxButtons.OK, MessageBoxIcon.Error);
				}
			}
		}

		private void textBox1_TextChanged(object sender, EventArgs e)
		{
			
		}

		private void button8_Click(object sender, EventArgs e)
		{
			Process.Start(textBox1.Text); 

		}

		private void textBox1_MouseEnter(object sender, EventArgs e)
		{
			
		}

		private void textBox1_Enter(object sender, EventArgs e)
		{
			
		}

		private void textBox1_KeyDown(object sender, KeyEventArgs e)
		{

			if (e.KeyCode == Keys.Enter)
			{
				try
				{
					Process.Start(textBox1.Text);
				}
				catch (Exception ex)
				{
					MessageBox.Show(this, "Failed to start process: " + ex.Message, "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
				}
			}
		}

		private void textBox1_KeyPress(object sender, KeyPressEventArgs e)
		{

		}

		private void eXITToolStripMenuItem_Click(object sender, EventArgs e)
		{
			this.Close(); 
		}
	}
}
