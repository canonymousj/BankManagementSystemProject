#include "Loan.h"

//(*InternalHeaders(Loan)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(Loan)
//*)

BEGIN_EVENT_TABLE(Loan,wxFrame)
	//(*EventTable(Loan)
	//*)
END_EVENT_TABLE()

Loan::Loan(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Loan)
	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	//*)
}

Loan::~Loan()
{
	//(*Destroy(Loan)
	//*)
}
