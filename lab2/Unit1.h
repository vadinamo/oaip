//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Dialogs.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TLabel *Label1;
	TPanel *Panel2;
	TEdit *Edit2;
	TEdit *Edit4;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TPanel *Panel3;
	TButton *Button1;
	TButton *Button2;
	TButton *Button4;
	TButton *Button6;
	TEdit *Edit3;
	TEdit *Edit1;
	TEdit *Edit5;
	TLabel *Label7;
	TEdit *Edit6;
	TComboBox *ComboBox1;
	TMemo *Memo1;
	TFileSaveDialog *FileSaveDialog1;
	TFileOpenDialog *FileOpenDialog1;
	TButton *Button8;
	TButton *Button9;
	TEdit *Edit11;
	TButton *Button5;
	TPanel *Panel4;
	TRadioButton *RadioButton1;
	TRadioButton *RadioButton2;
	TRadioButton *RadioButton3;
	TRadioButton *RadioButton4;
	TRadioButton *RadioButton5;
	TButton *Button3;
	TButton *Button7;
	TEdit *Edit7;
	TEdit *Edit8;
	void __fastcall Button6Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button8Click(TObject *Sender);
	void __fastcall Button9Click(TObject *Sender);
	void __fastcall RadioButton1Click(TObject *Sender);
	void __fastcall RadioButton2Click(TObject *Sender);
	void __fastcall RadioButton3Click(TObject *Sender);
	void __fastcall RadioButton4Click(TObject *Sender);
	void __fastcall RadioButton5Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall outp(int i);
    void __fastcall clear();
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button7Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
