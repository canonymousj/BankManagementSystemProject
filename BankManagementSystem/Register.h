#ifndef REGISTER_H
#define REGISTER_H

//(*Headers(Register)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/panel.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class Register: public wxFrame
{
	public:

		Register(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Register();

		//(*Declarations(Register)
		wxButton* btnBack;
		wxButton* btnSubmit;
		wxPanel* Panel1;
		wxStaticText* lblEID;
		wxStaticText* lblEPass;
		wxStaticText* lblEmNum;
		wxStaticText* lblMPass;
		wxStaticText* lblName;
		wxStaticText* lblRegister;
		wxTextCtrl* txfEID;
		wxTextCtrl* txfEName;
		wxTextCtrl* txfEPass;
		wxTextCtrl* txfEmNum;
		wxTextCtrl* txfMPass;
		//*)
		wxString emNum = "1";

	protected:

		//(*Identifiers(Register)
		static const long ID_TEXTCTRL1;
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL2;
		static const long ID_STATICTEXT2;
		static const long ID_TEXTCTRL3;
		static const long ID_STATICTEXT3;
		static const long ID_STATICTEXT4;
		static const long ID_TEXTCTRL4;
		static const long ID_BUTTON2;
		static const long ID_BUTTON1;
		static const long ID_STATICTEXT5;
		static const long ID_TEXTCTRL5;
		static const long ID_STATICTEXT6;
		static const long ID_PANEL1;
		//*)

	private:

		//(*Handlers(Register)
		void OnButton1Click(wxCommandEvent& event);
		void OnbtnSubmitClick(wxCommandEvent& event);
		void OntxfEIDText(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
