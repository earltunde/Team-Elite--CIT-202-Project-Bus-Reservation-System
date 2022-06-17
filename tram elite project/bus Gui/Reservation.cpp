//---------------------------------------------------------------------------

#include <fmx.h>
#include <fstream>
#pragma hdrstop

#include "Reservation.h"
#include "Mainform.h"
#include "NewBusForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TReserveForm *ReserveForm;
//---------------------------------------------------------------------------
__fastcall TReserveForm::TReserveForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TReserveForm::SaveButtonClick(TObject *Sender)
{
	fstream myFile;
	myFile.open("reservation.txt",ios::app);
	if(myFile.is_open()){
		AnsiString busnumber= BusNumEdit->Text;
		AnsiString seatnumber= SeatNumEdit->Text;
		AnsiString passengername= PassengerEdit->Text;


		myFile<<busnumber<<","<<busnumber<<","<<seatnumber<<","<<
		passengername<<"\n";
		myFile.close();
		successLabel->Text="Passenger added Sucessfully!";
		HomeForm->Show();

	}
	this->Close();
}
//---------------------------------------------------------------------------

