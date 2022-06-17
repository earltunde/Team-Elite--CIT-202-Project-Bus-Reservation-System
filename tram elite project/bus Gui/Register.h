//---------------------------------------------------------------------------

#ifndef RegisterH
#define RegisterH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TregisterForm : public TForm
{
__published:	// IDE-managed Components
	TEdit *UsernameEdit;
	TEdit *IdEdit;
	TEdit *DepartmentEdit;
	TEdit *PasswordEdit;
	TLabel *UserNameLabel;
	TLabel *IdLabel;
	TLabel *DepartmentLabel;
	TLabel *PasswordLabel;
	TButton *SubmitButton;
	void __fastcall SubmitButtonClick(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TregisterForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TregisterForm *registerForm;
//---------------------------------------------------------------------------
#endif
