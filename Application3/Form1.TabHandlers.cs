using System;
using System.Linq;
using System.Windows.Forms;

namespace Application3
{
	public partial class Form1 : Form
	{
		// Ensure the SelectedIndexChanged handler exists to avoid designer/compile errors
		private void tabControl1_SelectedIndexChanged(object sender, EventArgs e)
		{
			try
			{
				var tc = sender as TabControl ?? this.tabControl1;
				var tab = tc?.SelectedTab;
				if (tab == null) return;

				bool isForm2Tab = string.Equals(tab.Name, "tabPageForm2", StringComparison.OrdinalIgnoreCase)
								  || (tab.Text != null && tab.Text.IndexOf("Form2", StringComparison.OrdinalIgnoreCase) >= 0);
				if (!isForm2Tab) return;

				// If Form2 is already embedded in this tab, do nothing.
				if (tab.Controls.OfType<Form>().Any(f => f.GetType() == typeof(Form2)))
					return;

				// Try to reuse an existing Form2 instance (if one is open) so we don't create duplicates.
				var existing = Application.OpenForms.OfType<Form>().FirstOrDefault(f => f.GetType() == typeof(Form2));
				Form f2 = existing;
				if (f2 != null)
				{
					// Remove from previous parent (if any) before embedding.
					if (f2.Parent != null)
						f2.Parent.Controls.Remove(f2);

					f2.TopLevel = false;
					f2.FormBorderStyle = FormBorderStyle.None;
					f2.Dock = DockStyle.Fill;
				}
				else
				{
					// Create and configure a new Form2 to host inside the tab.
					f2 = (Form)Activator.CreateInstance(typeof(Form2));
					f2.TopLevel = false;
					f2.FormBorderStyle = FormBorderStyle.None;
					f2.Dock = DockStyle.Fill;
				}

				tab.Controls.Add(f2);
				f2.Show();
			}
			catch (Exception ex)
			{
				System.Diagnostics.Debug.WriteLine($"tabControl1_SelectedIndexChanged error: {ex}");
			}
		}
	}
}