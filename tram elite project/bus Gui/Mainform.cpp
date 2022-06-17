//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Mainform.h"
#include "login.h"
#include "Register.h"
#include "NewBusForm.h"
#include "Reservation.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
THomeForm *HomeForm;
//---------------------------------------------------------------------------
__fastcall THomeForm::THomeForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall THomeForm::addbuttonClick(TObject *Sender)
{
	MyNewBusForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall THomeForm::reserveButtonClick(TObject *Sender)
{
	ReserveForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall THomeForm::LoginButtonClick(TObject *Sender)
{
	LoginForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall THomeForm::RegisterButtonClick(TObject *Sender)
{
    registerForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall THomeForm::exitButtonClick(TObject *Sender)
{
    this->Close();
}
//---------------------------------------------------------------------------

