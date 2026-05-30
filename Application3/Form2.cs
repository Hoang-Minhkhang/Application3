using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;


namespace Application3
{
	public partial class Form2 : Form
	{
		private Stack<string> backHistory = new Stack<string>();
		private Stack<string> forwardHistory = new Stack<string>();
		private string currentUser;
		public string Nickname { get; set; }
		public Form2()
		{
			InitializeComponent();
			
		}
		public Form2(string username, string nickname)
		{
			InitializeComponent();
			currentUser = username;
			this.Nickname = nickname; // gán vào property
		}
		private void thoátToolStripMenuItem_Click(object sender, EventArgs e)
		{
			this.Close();
		}




		private void Form2_Load(object sender, EventArgs e)
		{
			this.Font = new Font("Tahoma", 8.25F, FontStyle.Regular);
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
			if (currentUser == "MinhKhang1995") {
				richTextBox1.Text = "---------------------Message from Administrator---------------------"+ "!\n"  +
					"Xin chào " + currentUser + "! chúc bạn một ngày tốt lành! " + "!\n" +
					"khám phá những gì có trong đây " + "!\n" +
					"to save this document : go to NotepadOption -> save file " + "!\n";

			}
			else if (currentUser == "Administrator")
			{
				richTextBox1.Text = "---------------------Message from Administrator---------------------" + "!\n" +
					"Xin chào " + currentUser + "! chúc bạn một ngày tốt lành! " + "!\n" +
					"to save this document : go to NotepadOption -> save file " + "!\n";

			}
			else if (currentUser == "TurboLines")
			{
				richTextBox1.Text = "---------------------Message from Administrator--------------------- " + "!\n" +
					"Xin chào " + currentUser + "! chúc bạn một ngày tốt lành! " + "!\n" +
					"Xin cảm ơn bạn đã sử dụng phần mềm!" + "!\n" +
					"to save this document : go to NotepadOption -> save file " + "!\n";
			}
			else if (currentUser == "User1005")
			{
				richTextBox1.Text = "---------------------Message from Administrator(Hoàng Minh Khang )--------------------- " + "!\n" +
					"Xin chào " + "Duy Khang " + "! chúc bạn một ngày tốt lành! " + "!\n" +
					"như nghững gì bạn đã nói sáng (28-5-2026) - mình gửi cho bạn phần mềm này " + "!\n" +
					"Hãy khám phá những gì trong đây nhé " + "!\n" +
					"Các tính năng còn thô sơ -chưa phát triển hoàn thiện .Nên nếu có gì thì cho mình biết " + "!\n" +
					"về phần thời khóa biểu - mình đã cập nhật lên bản mới nhất - nhớ xem ngày hết hạn đó " + "!\n" +
					"Contact me via hoangminhkhang2021@outlook.com " + "!\n" +
					"Sent from MinhKhang1995 to " + currentUser + " " + "!\n" +

					"to save this document : go to NotepadOption -> save file " + "!\n";
			}
		}


		private void File_BeforeExpand(object sender, TreeViewCancelEventArgs e)
		{
			TreeNode node = e.Node;
			node.Nodes.Clear(); // xoá placeholder
			string path = node.Tag.ToString();

			try
			{
				foreach (var dir in Directory.GetDirectories(path))
				{
					TreeNode subNode = new TreeNode(System.IO.Path.GetFileName(dir));
					subNode.Tag = dir;
					subNode.Nodes.Add("..."); // thêm placeholder để có dấu +
					node.Nodes.Add(subNode);
				}
			}
			catch { }
		}
		private string MinhKhangNotepad = null;
		private void richTextBox1_TextChanged(object sender, EventArgs e)
		{

		}

		private void newFileToolStripMenuItem_Click(object sender, EventArgs e)
		{
			richTextBox1.Clear();

			// Reset trạng thái file
			MinhKhangNotepad = null;

			// Cập nhật tiêu đề form giống Notepad
			this.Text = $"MinhKhang.exe - notepad";
		}

		private void saveFileToolStripMenuItem_Click(object sender, EventArgs e)
		{
			if (!string.IsNullOrEmpty(MinhKhangNotepad))
			{
				File.WriteAllText(MinhKhangNotepad, richTextBox1.Text);
			}
			else
			{
				SaveFileDialog sfd = new SaveFileDialog();
				sfd.Filter = "Text Files|*.txt";
				if (sfd.ShowDialog() == DialogResult.OK)
				{
					MinhKhangNotepad = sfd.FileName;
					File.WriteAllText(MinhKhangNotepad, richTextBox1.Text);
				}
			}
		}

		private void openToolStripMenuItem_Click(object sender, EventArgs e)
		{
			OpenFileDialog ofd = new OpenFileDialog();
			ofd.Filter = "Text Files|*.txt";
			if (ofd.ShowDialog() == DialogResult.OK)
			{
				MinhKhangNotepad = ofd.FileName;
				richTextBox1.Text = File.ReadAllText(MinhKhangNotepad);
			}
		}

		private void aboutUsToolStripMenuItem_Click(object sender, EventArgs e)
		{
			tabControl1.SelectedIndex = 1; 
		}
	}
}
