#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <vector>
#include "ClientalManagement.h"

//(*Headers(Account)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/grid.h>
#include <wx/panel.h>
//*)

class Account: public wxFrame
{
	public:

		Account(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Account();

        std::vector< loan > loanObj;

        void updateTable();

		//(*Declarations(Account)
		wxButton* btnExit;
		wxButton* btnRefresh;
		wxGrid* Grid1;
		wxPanel* Panel1;
		//*)

	protected:

		//(*Identifiers(Account)
		static const long ID_GRID1;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		static const long ID_PANEL1;
		//*)

	private:

		//(*Handlers(Account)
		void OnGrid1CellLeftClick(wxGridEvent& event);
		void OnButton2Click(wxCommandEvent& event);
		void OnbtnRefreshClick(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
