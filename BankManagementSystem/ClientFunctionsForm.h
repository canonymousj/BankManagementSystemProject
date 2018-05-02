#ifndef CLIENTFUNCTIONSFORM_H
#define CLIENTFUNCTIONSFORM_H

//(*Headers(ClientFunctionsForm)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/panel.h>
#include <wx/radiobut.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)
#include "Employee.h"

class ClientFunctionsForm: public wxFrame
{
	public:

		ClientFunctionsForm(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~ClientFunctionsForm();

		employee *curEmployee = NULL;
		wxString lblTextStore = "Error";

		//(*Declarations(ClientFunctionsForm)
		wxButton* btnCBack;
		wxButton* btnCCreate;
		wxButton* btnCExit;
		wxButton* btnCInv;
		wxButton* btnCLoan;
		wxButton* btnCNew;
		wxButton* btnCSearch;
		wxPanel* Panel1;
		wxRadioButton* RadioButton1;
		wxRadioButton* RadioButton2;
		wxStaticText* lblCAddress;
		wxStaticText* lblCConNum;
		wxStaticText* lblCFunct;
		wxStaticText* lblCID;
		wxStaticText* lblCName;
		wxStaticText* lblCOAmt;
		wxStaticText* lblCSAID;
		wxTextCtrl* txfCAddress;
		wxTextCtrl* txfCConNum;
		wxTextCtrl* txfCID;
		wxTextCtrl* txfCName;
		wxTextCtrl* txfCOAmt;
		wxTextCtrl* txfCSAID;
		//*)

	protected:

		//(*Identifiers(ClientFunctionsForm)
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		static const long ID_STATICTEXT3;
		static const long ID_STATICTEXT4;
		static const long ID_STATICTEXT5;
		static const long ID_STATICTEXT6;
		static const long ID_TEXTCTRL1;
		static const long ID_TEXTCTRL2;
		static const long ID_TEXTCTRL3;
		static const long ID_TEXTCTRL4;
		static const long ID_TEXTCTRL5;
		static const long ID_STATICTEXT7;
		static const long ID_TEXTCTRL6;
		static const long ID_RADIOBUTTON1;
		static const long ID_RADIOBUTTON2;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		static const long ID_BUTTON3;
		static const long ID_BUTTON4;
		static const long ID_BUTTON5;
		static const long ID_BUTTON6;
		static const long ID_BUTTON7;
		static const long ID_PANEL1;
		//*)

	private:

		//(*Handlers(ClientFunctionsForm)
		void OnbtnCBackClick(wxCommandEvent& event);
		void OnbtnCExitClick(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
