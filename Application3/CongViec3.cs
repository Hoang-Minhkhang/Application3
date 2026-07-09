
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


using System.Threading.Tasks;
using System.Windows.Forms;

using static System.Windows.Forms.VisualStyles.VisualStyleElement.Button;
using static System.Windows.Forms.VisualStyles.VisualStyleElement.StartPanel;

namespace Application3
{
	public partial class CongViec3 : Form
	{
		private string currentUser;
		public string Nickname { get; set; }

		public CongViec3()
		{
			InitializeComponent();
			
		}

		private void CongViec3_Load(object sender, EventArgs e)
		{

		}

		private void eXITToolStripMenuItem_Click(object sender, EventArgs e)
		{
			this.Close(); 
		}

		private void mo83ToolStripMenuItem_Click(object sender, EventArgs e)
		{

		}

		private void button9_Click(object sender, EventArgs e)
		{
			var ket = MessageBox.Show("Ban có muốn thoát không " , "End" , MessageBoxButtons.YesNo, MessageBoxIcon.Question);
			if (ket == DialogResult.Yes) {
				this.Close();
			}
			
		}

		private void button8_Click(object sender, EventArgs e)
		{

		}

		private void button3_Click(object sender, EventArgs e)
		{
			using (var ofd = new OpenFileDialog())
			{
				ofd.Filter = "Text files|*.txt|All files|*.*";
				if (ofd.ShowDialog() != DialogResult.OK) return;
				try
				{
					var lines = File.ReadAllLines(ofd.FileName, Encoding.UTF8);
				} catch { }
			}
		}

		private void button10_Click(object sender, EventArgs e)
		{
			MessageBox.Show("please contact to Administrator or Dev for more ", "MSG.exe -Application3", MessageBoxButtons.OK, MessageBoxIcon.Information); 
		}

		private void Add_Click(object sender, EventArgs e)
		{
			checkedListBox1.Items.Add(comboBox1.SelectedItem);

		}

		private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
		{

		}
		
   

		private void groupBox3_Enter(object sender, EventArgs e)
		{

		}
	}
	}

