#ifndef CLIENTFUNCTIONSFORM_H
#define CLIENTFUNCTIONSFORM_H

//(*Headers(ClientFunctionsForm)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/notebook.h>
#include <wx/panel.h>
#include <wx/radiobut.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)
#include "Employee.h"
#include <string>

class ClientFunctionsForm: public wxFrame
{
	public:

		ClientFunctionsForm(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~ClientFunctionsForm();

		employee *curEmployee = NULL;
		wxString lblTextStore = "Error";

		void setup();
		int populateClientFields(int cNum, std::string SAID);

		//(*Declarations(ClientFunctionsForm)
		wxButton* btnCBack;
		wxButton* btnCCancel;
		wxButton* btnCCreate;
		wxButton* btnCExit;
		wxButton* btnCInv;
		wxButton* btnCLoan;
		wxButton* btnCNew;
		wxButton* btnCSearch;
		wxButton* btnCUpdate;
		wxNotebook* Notebook1;
		wxPanel* Panel1;
		wxPanel* Panel2;
		wxPanel* pnlCAccount;
		wxRadioButton* RadioButton1;
		wxRadioButton* RadioButton2;
		wxStaticText* StaticText10;
		wxStaticText* StaticText11;
		wxStaticText* StaticText12;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		wxStaticText* StaticText4;
		wxStaticText* StaticText5;
		wxStaticText* StaticText6;
		wxStaticText* StaticText7;
		wxStaticText* StaticText8;
		wxStaticText* StaticText9;
		wxStaticText* lblCAddress;
		wxStaticText* lblCConNum;
		wxStaticText* lblCFunct;
		wxStaticText* lblCID;
		wxStaticText* lblCName;
		wxStaticText* lblCOAmt;
		wxStaticText* lblCSAID;
		wxStaticText* lblInterest;
		wxTextCtrl* txfCAddress;
		wxTextCtrl* txfCConNum;
		wxTextCtrl* txfCID;
		wxTextCtrl* txfCName;
		wxTextCtrl* txfCOAmt;
		wxTextCtrl* txfCSAID;
		wxTextCtrl* txfInterest;
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
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		static const long ID_BUTTON3;
		static const long ID_BUTTON4;
		static const long ID_BUTTON5;
		static const long ID_TEXTCTRL6;
		static const long ID_RADIOBUTTON2;
		static const long ID_RADIOBUTTON1;
		static const long ID_STATICTEXT7;
		static const long ID_STATICTEXT20;
		static const long ID_TEXTCTRL7;
		static const long ID_PANEL2;
		static const long ID_BUTTON8;
		static const long ID_BUTTON7;
		static const long ID_BUTTON6;
		static const long ID_BUTTON9;
		static const long ID_PANEL1;
		static const long ID_STATICTEXT9;
		static const long ID_STATICTEXT10;
		static const long ID_STATICTEXT8;
		static const long ID_STATICTEXT11;
		static const long ID_STATICTEXT12;
		static const long ID_STATICTEXT13;
		static const long ID_STATICTEXT14;
		static const long ID_STATICTEXT15;
		static const long ID_STATICTEXT16;
		static const long ID_STATICTEXT17;
		static const long ID_STATICTEXT18;
		static const long ID_STATICTEXT19;
		static const long ID_PANEL3;
		static const long ID_NOTEBOOK1;
		//*)

	private:

		//(*Handlers(ClientFunctionsForm)
		void OnbtnCBackClick(wxCommandEvent& event);
		void OnbtnCExitClick(wxCommandEvent& event);
		void OnbtnCSearchClick(wxCommandEvent& event);
		void OnbtnCNewClick(wxCommandEvent& event);
		void OnbtnCCancelClick(wxCommandEvent& event);
		void OnbtnCUpdateClick(wxCommandEvent& event);
		void OnbtnCCreateClick(wxCommandEvent& event);
		void OnRadioButton2Select(wxCommandEvent& event);
		void OnRadioButton1Select(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
