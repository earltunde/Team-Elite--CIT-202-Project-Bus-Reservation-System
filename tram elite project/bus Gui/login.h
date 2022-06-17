//---------------------------------------------------------------------------

#ifndef loginH
#define loginH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TLoginForm : public TForm
{
__published:	// IDE-managed Components
	TEdit *UsernameEdit;
	TEdit *PasswordEdit;
	TLabel *UsernameLabel;
	TLabel *PasswordLabel;
	TButton *LoginButton;
	TLabel *messageLabel;
	void __fastcall LoginButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TLoginForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TLoginForm *LoginForm;
//---------------------------------------------------------------------------
#endif
