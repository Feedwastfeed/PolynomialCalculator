#include "MyForm.h"
#include <string>

#include <msclr\marshal_cppstd.h>

using namespace System;
using namespace std;
using namespace System::IO;
using namespace PolynomialCalculator;
[STAThreadAttribute]

int main(cli::array<System::String ^> ^args)
{
	System::String^ managedString = "test";

	msclr::interop::marshal_context context;
	std::string standardString = context.marshal_as<std::string>(managedString);
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm());
	return 0;
}