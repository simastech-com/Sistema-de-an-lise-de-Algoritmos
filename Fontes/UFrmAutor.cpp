//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UFrmAutor.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFrmAutor *FrmAutor;
//---------------------------------------------------------------------------
__fastcall TFrmAutor::TFrmAutor(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFrmAutor::EvFecharFormularioOnClick(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------
void __fastcall TFrmAutor::EvFecharFormularioOnClose(TObject *Sender, TCloseAction &Action)
{
	Action = caFree;
}
//---------------------------------------------------------------------------
