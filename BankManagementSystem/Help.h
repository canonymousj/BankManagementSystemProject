#ifndef HELP_H
#define HELP_H

#include "SelectionMenu.h"
#include "Employee.h"

//(*Headers(Help)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/panel.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
//*)

class Help: public wxFrame
{
	public:

		Help(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Help();

        wxString lblTextStore = "Error";

        employee *curEmployee = NULL;

		//(*Declarations(Help)
		wxButton* Button1;
		wxButton* Button2;
		wxPanel* Panel1;
		wxStaticBitmap* StaticBitmap1;
		wxStaticText* StaticText1;
		//*)

	protected:

		//(*Identifiers(Help)
		static const long ID_STATICBITMAP1;
		static const long ID_STATICTEXT1;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		static const long ID_PANEL1;
		//*)

	private:

		//(*Handlers(Help)
		void OnButton1Click(wxCommandEvent& event);
		void OnButton2Click(wxCommandEvent& event);
		void OnPanel1Paint(wxPaintEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
