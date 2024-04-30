#include "FEntry.h"

using namespace System;
using namespace System::Windows::Forms;

[System::Runtime::InteropServices::DllImport("user32.dll")]
bool SetProcessDPIAware();

[STAThreadAttribute]
void main() {
	if (Environment::OSVersion->Version->Major >= 6)
		SetProcessDPIAware();

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(true);

	StudentDatabase::FEntry form;
	Application::Run(% form);
}