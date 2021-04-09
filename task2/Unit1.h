//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ToolWin.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TButton *Button1;
	TButton *Button2;
	TLabel *Label1;
	TPanel *Panel2;
	TLabel *Label2;
	TPanel *Panel4;
	TLabel *Label4;
	TPanel *Panel5;
	TLabel *Label7;
	TPanel *Panel6;
	TLabel *Label8;
	TButton *Button5;
	TPanel *Panel7;
	TLabel *Label9;
	TButton *Button7;
	TTimer *Timer1;
	TPanel *Panel8;
	TPanel *Panel9;
	TLabel *Label5;
	TLabel *Label6;
	TButton *Button3;
	TScrollBar *ScrollBar1;
	TScrollBar *ScrollBar4;
	TButton *Button4;
	TPanel *Panel3;
	TScrollBar *ScrollBar3;
	TLabel *Label15;
	TPanel *Panel10;
	TScrollBar *ScrollBar2;
	TLabel *Label14;
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall FormMouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall FormMouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall ScrollBar1Change(TObject *Sender);
	void __fastcall ScrollBar4Change(TObject *Sender);
	void __fastcall Button7Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall ScrollBar3Change(TObject *Sender);
	void __fastcall ScrollBar2Change(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
