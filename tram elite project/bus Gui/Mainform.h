//---------------------------------------------------------------------------

#ifndef MainformH
#define MainformH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class THomeForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *mainLabel;
	TButton *addbutton;
	TButton *reserveButton;
	TButton *showButton;
	TButton *availableButton;
	TButton *exitButton;
	TButton *LoginButton;
	TButton *RegisterButton;
	void __fastcall addbuttonClick(TObject *Sender);
	void __fastcall reserveButtonClick(TObject *Sender);
	void __fastcall LoginButtonClick(TObject *Sender);
	void __fastcall RegisterButtonClick(TObject *Sender);
	void __fastcall exitButtonClick(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall THomeForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE THomeForm *HomeForm;
//---------------------------------------------------------------------------
#endif
