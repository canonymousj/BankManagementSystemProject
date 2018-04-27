#ifndef SELECTIONMENU_H
#define SELECTIONMENU_H

//(*Headers(SelectionMenu)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/panel.h>
#include <wx/stattext.h>
//*)
#include "Employee.h"

class SelectionMenu: public wxFrame
{
	public:

		SelectionMenu(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~SelectionMenu();

		//(*Declarations(SelectionMenu)
		wxButton* btnCFunct;
		wxButton* btnEFunct;
		wxButton* btnHelp;
		wxButton* btnLogout;
		wxButton* btnMetr;
		wxPanel* Panel1;
		wxStaticText* lblDays;
		wxStaticText* lblSelection;
		wxStaticText* lblWelcome;
		//*)

		employee *currentLogged = NULL;

	protected:

		//(*Identifiers(SelectionMenu)
		static const long ID_STATICTEXT1;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		static const long ID_BUTTON3;
		static const long ID_STATICTEXT2;
		static const long ID_BUTTON4;
		static const long ID_BUTTON5;
		static const long ID_STATICTEXT3;
		static const long ID_PANEL1;
		//*)

	private:

		//(*Handlers(SelectionMenu)
		void OnbtnLogoutClick(wxCommandEvent& event);
		void OnbtnEFunctClick(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
