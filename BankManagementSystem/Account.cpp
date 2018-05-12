#include "Account.h"

//(*InternalHeaders(Account)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(Account)
//*)

BEGIN_EVENT_TABLE(Account,wxFrame)
	//(*EventTable(Account)
	//*)
END_EVENT_TABLE()

Account::Account(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Account)
	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	//*)
}

Account::~Account()
{
	//(*Destroy(Account)
	//*)
}

