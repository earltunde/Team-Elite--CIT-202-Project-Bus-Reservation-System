//---------------------------------------------------------------------------

#ifndef NewBusFormH
#define NewBusFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Edit.hpp>
//---------------------------------------------------------------------------
class TMyNewBusForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *NumLabel;
	TLabel *NameLabel;
	TLabel *DtimeLabel;
	TLabel *AtimeLabel;
	TLabel *FromLabel;
	TLabel *ToLabel;
	TLabel *successLabel;
	TEdit *AtimeEdit;
	TEdit *FromEdit;
	TEdit *DtimeEdit;
	TEdit *NumEdit;
	TEdit *ToEdit;
	TEdit *NameEdit;
	TButton *SaveButton;
	TLabel *busLabel;
	void __fastcall SaveButtonClick(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TMyNewBusForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMyNewBusForm *MyNewBusForm;
//---------------------------------------------------------------------------
#endif
