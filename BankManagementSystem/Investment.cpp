#include "Investment.h"

//(*InternalHeaders(Investment)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(Investment)
//*)

BEGIN_EVENT_TABLE(Investment,wxFrame)
	//(*EventTable(Investment)
	//*)
END_EVENT_TABLE()

Investment::Investment(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Investment)
	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	//*)
}

Investment::~Investment()
{
	//(*Destroy(Investment)
	//*)
}

