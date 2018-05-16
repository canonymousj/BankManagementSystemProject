#ifndef METRICS_H
#define METRICS_H

#include "Employee.h"
//(*Headers(Metrics)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/panel.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
//*)

class Metrics: public wxFrame
{
	public:

		Metrics(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Metrics();

        wxString lblTextStore = "Error";

        employee *curEmployee = NULL;

        void setup();

		//(*Declarations(Metrics)
		wxButton* btnBack;
		wxButton* btnExit;
		wxPanel* Panel1;
		wxStaticBitmap* StaticBitmap1;
		wxStaticText* StaticText15;
		wxStaticText* StaticText16;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		wxStaticText* StaticText4;
		wxStaticText* StaticText5;
		wxStaticText* StaticText6;
		wxStaticText* StaticText7;
		wxStaticText* StaticText8;
		wxStaticText* lblNet;
		wxStaticText* lblNumCl;
		wxStaticText* lblNumEm;
		wxStaticText* lblNumLoans;
		wxStaticText* lblTBal;
		wxStaticText* lblTSal;
		wxStaticText* lbllblTAmt;
		//*)

	protected:

		//(*Identifiers(Metrics)
		static const long ID_STATICBITMAP1;
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		static const long ID_STATICTEXT3;
		static const long ID_STATICTEXT4;
		static const long ID_STATICTEXT5;
		static const long ID_STATICTEXT6;
		static const long ID_STATICTEXT7;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		static const long ID_STATICTEXT8;
		static const long ID_STATICTEXT9;
		static const long ID_STATICTEXT10;
		static const long ID_STATICTEXT11;
		static const long ID_STATICTEXT12;
		static const long ID_STATICTEXT13;
		static const long ID_STATICTEXT14;
		static const long ID_STATICTEXT15;
		static const long ID_STATICTEXT16;
		static const long ID_STATICTEXT17;
		static const long ID_PANEL1;
		//*)

	private:

		//(*Handlers(Metrics)
		void OnbtnExitClick(wxCommandEvent& event);
		void OnbtnBackClick(wxCommandEvent& event);
		void OnPanel1Paint(wxPaintEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
