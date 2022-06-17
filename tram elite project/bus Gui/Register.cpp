//---------------------------------------------------------------------------

#include <fmx.h>
#include <fstream>
#pragma hdrstop

#include "Register.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TregisterForm *registerForm;
//---------------------------------------------------------------------------
__fastcall TregisterForm::TregisterForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TregisterForm::SubmitButtonClick(TObject *Sender)
{
	fstream myFile;
	myFile.open("register.txt", ios::app);
	if (myFile.is_open()) {
		AnsiString username= UsernameEdit->Text;
		AnsiString password= PasswordEdit->Text;
		AnsiString ID= IdEdit->Text;
		AnsiString department= DepartmentEdit->Text;

		myFile<<username<<","<<password<<","<<department<<","<<ID<<"/n";
		myFile.close();
        this->Close();
	}

}
//---------------------------------------------------------------------------

