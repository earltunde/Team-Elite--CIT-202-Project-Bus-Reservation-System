//---------------------------------------------------------------------------

#include <fmx.h>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#pragma hdrstop

#include "login.h"
#include "Mainform.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TLoginForm *LoginForm;
//---------------------------------------------------------------------------
__fastcall TLoginForm::TLoginForm(TComponent* Owner)
	: TForm(Owner)
{
}

std::vector<std::string> parseCommaDelimitedString(std::string line){
	 std::vector<std::string> result;
	 std::stringstream s_stream(line);

	 while(s_stream.good()){
		   std::string substr;
		   getline(s_stream,substr,',');
		   result.push_back(substr);
	 }
	 return result;
}
//---------------------------------------------------------------------------
void __fastcall TLoginForm::LoginButtonClick(TObject *Sender)
{
    fstream myFile;
  myFile.open("register.txt",ios::in);

  if(myFile.is_open()){
	 std::string line;

	 while(getline(myFile,line)){
		std::vector<std::string> parsedLine= parseCommaDelimitedString(line);
		const char* username= parsedLine.at(2).c_str();

		AnsiString editUsername=UsernameEdit->Text;
		const char* usernameString=editUsername.c_str();

		if(std::strcmp(username,usernameString)==0){
		   const char* password= parsedLine.at(3).c_str();

		   AnsiString editPassword=PasswordEdit->Text;
		   const char* passwordString=editPassword.c_str();

		   if(std::strcmp(password,passwordString)==0)
			 messageLabel->Text="Success!!!";
		   else
			 messageLabel->Text="Error!!!";
		}
		HomeForm->Show();
	 }
     this->Close();
  }
}
//---------------------------------------------------------------------------
