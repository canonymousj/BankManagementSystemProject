#ifndef LOAN_H
#define LOAN_H

//(*Headers(Loan)
#include <wx/frame.h>
//*)

class Loan: public wxFrame
{
	public:

		Loan(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Loan();

		//(*Declarations(Loan)
		//*)

	protected:

		//(*Identifiers(Loan)
		//*)

	private:

		//(*Handlers(Loan)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
