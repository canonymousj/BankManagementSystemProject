#ifndef ACCOUNT_H
#define ACCOUNT_H

//(*Headers(Account)
#include <wx/frame.h>
//*)

class Account: public wxFrame
{
	public:

		Account(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Account();

		//(*Declarations(Account)
		//*)

	protected:

		//(*Identifiers(Account)
		//*)

	private:

		//(*Handlers(Account)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
