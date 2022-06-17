//---------------------------------------------------------------------------

#include <fmx.h>
#include <fstream>
#pragma hdrstop

#include "NewBusForm.h"
#include "MainForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TMyNewBusForm *MyNewBusForm;
//---------------------------------------------------------------------------
__fastcall TMyNewBusForm::TMyNewBusForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TMyNewBusForm::SaveButtonClick(TObject *Sender)
{
	fstream myFile;
	myFile.open("newbuses.txt",ios::app);
	if(myFile.is_open()){
		AnsiString busnumber= NumEdit->Text;
		AnsiString drivername= NameEdit->Text;
		AnsiString arrivaltime= AtimeEdit->Text;
		AnsiString departuretime= DtimeEdit->Text;
		AnsiString from= FromEdit->Text;
		AnsiString to= ToEdit->Text;

		myFile<<busnumber<<","<<drivername<<","<<arrivaltime<<","<<
		departuretime<<","<<from<<","<<to<<"\n";
		myFile.close();
		successLabel->Text="New Bus added Sucessfully!";
		HomeForm->Show();

	}
	this->Close();
}
//---------------------------------------------------------------------------

