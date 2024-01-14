#include "Ops.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]

int main(array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault;
	Application::EnableVisualStyles;
	Ops::Ops frm;
	Application::Run(% frm);

}

