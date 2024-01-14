#include "Ops.h"
#include <algorithm>
#include "Algorithm.h"


using namespace System;
using namespace System::Windows::Forms;


[STAThread]

int main(array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault;
	Application::EnableVisualStyles;
	/*Algorithm::Algorithm; frm;*/
	Application::Run(% frm);

}

