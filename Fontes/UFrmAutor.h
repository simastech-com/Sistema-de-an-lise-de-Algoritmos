//---------------------------------------------------------------------------

#ifndef UFrmAutorH
#define UFrmAutorH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
//---------------------------------------------------------------------------
class TFrmAutor : public TForm
{
__published:	// IDE-managed Components
	TImage *ImgAutor;
	TLabel *lblNome;
	TLabel *lblRa;
	TLabel *lblDisciplina;
	TLabel *lblCurso;
	TLabel *lblPeriodo;
	TLabel *lblTermo;
	TButton *btnSair;
	void __fastcall EvFecharFormularioOnClick(TObject *Sender);
	void __fastcall EvFecharFormularioOnClose(TObject *Sender, TCloseAction &Action);

private:	// User declarations
public:		// User declarations
	__fastcall TFrmAutor(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrmAutor *FrmAutor;
//---------------------------------------------------------------------------
#endif
