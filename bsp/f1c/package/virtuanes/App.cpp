//
// ?pφx?
//
#include "VirtuaNESres.h"
#include "App.h"

// // tWinMainIQΫ΄?
// HINSTANCE CApp::m_hInstance = NULL;
// HINSTANCE CApp::m_hPrevInstance = NULL;
// LPTSTR	CApp::m_lpCmdLine = NULL;
// INT	CApp::m_nCmdShow = 0;

// // ?Ύ?Ή?αT_
// HINSTANCE CApp::m_hPlugin = NULL;
// // εβxϋβxϋIβxϋT_
// HWND	CApp::m_hWnd = NULL;
// // εβxϋIΨ?T_
// HMENU	CApp::m_hMenu = NULL;

// // φHai??Haj
CHAR	CApp::m_szModulePath[_MAX_PATH];

// ??ψi??j
CHAR	szErrorString[256];

// G[p
INT	CApp::m_ErrorStringTableID[] = {
	IDS_ERROR,
	IDS_ERROR_STARTUP,
	IDS_ERROR_UNKNOWN,
	IDS_ERROR_OPEN,
	IDS_ERROR_READ,
	IDS_ERROR_WRITE,
	IDS_ERROR_OUTOFMEMORY,

	IDS_ERROR_ILLEGALOPCODE,
	IDS_ERROR_UNSUPPORTFORMAT,
	IDS_ERROR_INVALIDNESHEADER,
	IDS_ERROR_SMALLFILE,
	IDS_ERROR_UNSUPPORTMAPPER,
	IDS_ERROR_NODISKBIOS,
	IDS_ERROR_UNSUPPORTDISK,
	IDS_ERROR_ILLEGALDISKSIZE,

	IDS_ERROR_ILLEGALMAPPERNO,
	IDS_ERROR_ILLEGALHEADER,

	IDS_ERROR_ILLEGALSTATECRC,
	IDS_ERROR_ILLEGALMOVIEOLD,
	IDS_ERROR_ILLEGALMOVIEVER,
	IDS_ERROR_ILLEGALMOVIECRC,
	IDS_ERROR_ILLEGALMOVIEOLD_A,
	IDS_ERROR_ILLEGALMOVIEVER_A,
	IDS_ERROR_ILLEGALMOVIECRC_A,

	IDS_ERROR_NETWORKDISCONNECT,
	IDS_ERROR_NETWORKERROR,
	0,
};
CHAR*	CApp::m_ErrorStringTable[] = {
	"IDS_ERROR",
	"IDS_ERROR_STARTUP",
	"IDS_ERROR_UNKNOWN",
	"IDS_ERROR_OPEN",
	"IDS_ERROR_READ",
	"IDS_ERROR_WRITE",
	"IDS_ERROR_OUTOFMEMORY",
	"IDS_ERROR_ILLEGALOPCODE",
	"IDS_ERROR_UNSUPPORTFORMAT",
	"IDS_ERROR_INVALIDNESHEADER",
	"IDS_ERROR_SMALLFILE",
	"IDS_ERROR_UNSUPPORTMAPPER",
	"IDS_ERROR_NODISKBIOS",
	"IDS_ERROR_UNSUPPORTDISK",
	"IDS_ERROR_ILLEGALDISKSIZE",
	"IDS_ERROR_ILLEGALMAPPERNO",
	"IDS_ERROR_ILLEGALHEADER",
	"IDS_ERROR_ILLEGALSTATECRC",
	"IDS_ERROR_ILLEGALMOVIEOLD",
	"IDS_ERROR_ILLEGALMOVIEVER",
	"IDS_ERROR_ILLEGALMOVIECRC",
	"IDS_ERROR_ILLEGALMOVIEOLD_A",
	"IDS_ERROR_ILLEGALMOVIEVER_A",
	"IDS_ERROR_ILLEGALMOVIECRC_A",
	"IDS_ERROR_NETWORKDISCONNECT",
	"IDS_ERROR_NETWORKERROR",
};
CHAR	CApp::m_ErrorString[ERRORSTRING_MAX][256];

void	CApp::LoadErrorString()
{
	for( INT i = 0; m_ErrorStringTableID[i]; i++ ) 
	{
		strcpy(  m_ErrorString[i],m_ErrorStringTable[i]);
	}
}

CHAR*	CApp::GetErrorString( INT nID )
{
	for( INT i = 0; m_ErrorStringTableID[i]; i++ ) {
		if( m_ErrorStringTableID[i] == nID )
			return	m_ErrorString[i];
	}
	return	"ERR string NOT FOUND";	// NULL Τρ
}

