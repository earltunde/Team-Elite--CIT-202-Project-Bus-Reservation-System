//---------------------------------------------------------------------------

#ifndef ReservationH
#define ReservationH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Edit.hpp>
//---------------------------------------------------------------------------
class TReserveForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *BusNumLabel;
	TLabel *PassengerLabel;
	TEdit *BusNumEdit;
	TEdit *SeatNumEdit;
	TLabel *SeatLabel;
	TEdit *PassengerEdit;
	TButton *SaveButton;
	TLabel *successLabel;
	TLabel *pasengerLabel;
	void __fastcall SaveButtonClick(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TReserveForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TReserveForm *ReserveForm;
//---------------------------------------------------------------------------
#endif
