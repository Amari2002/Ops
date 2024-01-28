#include "Form2.h"


using namespace System;
using namespace System::Windows::Forms;


int main1(array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault;
	Application::EnableVisualStyles;
	Ops::Form2 frm;
	Application::Run(% frm);
	return 0;
}

