//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------













































USEFORM("UFrmAutor.cpp", FrmAutor);
USEFORM("UFrmBibliografia.cpp", FrmBibliografia);
USEFORM("UFrmPrincipal.cpp", FrmPrincipal);
USEFORM("UFrmAnaliseDeAlgoritmosDeBusca.cpp", FrmAnaliseDeAlgoritmosDeBusca);
USEFORM("UFrmAnaliseDeAlgoritmosDeOrdenacao.cpp", FrmAnaliseDeAlgoritmosDeOrdenacao);
//---------------------------------------------------------------------------
WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TFrmPrincipal), &FrmPrincipal);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
