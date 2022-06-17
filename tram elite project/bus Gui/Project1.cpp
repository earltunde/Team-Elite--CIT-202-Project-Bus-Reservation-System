//---------------------------------------------------------------------------

#include <fmx.h>
#ifdef _WIN32
#include <tchar.h>
#endif
#pragma hdrstop
#include <System.StartUpCopy.hpp>
//---------------------------------------------------------------------------
USEFORM("Register.cpp", registerForm);
USEFORM("Reservation.cpp", ReserveForm);
USEFORM("Mainform.cpp", HomeForm);
USEFORM("NewBusForm.cpp", MyNewBusForm);
USEFORM("login.cpp", LoginForm);
USEFORM("exit.cpp", Form2);
//---------------------------------------------------------------------------
extern "C" int FMXmain()
{
	try
	{
		Application->Initialize();
		Application->CreateForm(__classid(THomeForm), &HomeForm);
		Application->CreateForm(__classid(TMyNewBusForm), &MyNewBusForm);
		Application->CreateForm(__classid(TReserveForm), &ReserveForm);
		Application->CreateForm(__classid(TregisterForm), &registerForm);
		Application->CreateForm(__classid(TLoginForm), &LoginForm);
		Application->CreateForm(__classid(TForm2), &Form2);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
