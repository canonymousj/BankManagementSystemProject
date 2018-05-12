#ifndef INVESTMENT_H
#define INVESTMENT_H

//(*Headers(Investment)
#include <wx/frame.h>
//*)

class Investment: public wxFrame
{
	public:

		Investment(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Investment();

		//(*Declarations(Investment)
		//*)

	protected:

		//(*Identifiers(Investment)
		//*)

	private:

		//(*Handlers(Investment)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
