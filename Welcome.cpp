#include "Welcome.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]

int main(array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault;
	Application::EnableVisualStyles;
	Ops::Welcome frm;
	Application::Run(% frm);
	
}

