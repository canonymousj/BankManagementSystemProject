#ifndef EMPLOYEEFUNCTIONSFORM_H
#define EMPLOYEEFUNCTIONSFORM_H

//(*Headers(EmployeeFunctionsForm)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/grid.h>
#include <wx/notebook.h>
#include <wx/panel.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

#include "Employee.h"

class EmployeeFunctionsForm: public wxFrame
{
	public:

		EmployeeFunctionsForm(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~EmployeeFunctionsForm();
        void setupCurEmployee();
        void populateUpdateFields(int EmNum);
        void updateTable();
        wxString lblTextStore = "Error";

		//(*Declarations(EmployeeFunctionsForm)
		wxButton* btnGridRefresh;
		wxButton* btnUpBack;
		wxButton* btnUpExit;
		wxButton* btnUpSearch;
		wxButton* btnUpUpdate;
		wxButton* btnViewTblBack;
		wxButton* btnViewTblExit;
		wxGrid* Grid1;
		wxNotebook* Notebook1;
		wxPanel* pnlUpdateEm;
		wxPanel* pnlViewEm;
		wxStaticBitmap* StaticBitmap1;
		wxStaticBitmap* StaticBitmap2;
		wxStaticText* StaticText1;
		wxStaticText* lblEinfo;
		wxStaticText* lblUpEName;
		wxStaticText* lblUpEPass;
		wxStaticText* lblUpEPriv;
		wxStaticText* lblUpESAID;
		wxStaticText* lblUpESal;
		wxStaticText* lblUpEmNum;
		wxTextCtrl* txfUpEName;
		wxTextCtrl* txfUpEPass;
		wxTextCtrl* txfUpEPriv;
		wxTextCtrl* txfUpESAID;
		wxTextCtrl* txfUpESal;
		wxTextCtrl* txfUpEmNum;
		//*)
        employee *curEmployee = NULL;
	protected:

		//(*Identifiers(EmployeeFunctionsForm)
		static const long ID_STATICBITMAP1;
		static const long ID_GRID1;
		static const long ID_BUTTON5;
		static const long ID_BUTTON6;
		static const long ID_BUTTON7;
		static const long ID_STATICTEXT7;
		static const long ID_PANEL1;
		static const long ID_STATICBITMAP2;
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		static const long ID_BUTTON1;
		static const long ID_TEXTCTRL2;
		static const long ID_TEXTCTRL3;
		static const long ID_TEXTCTRL4;
		static const long ID_TEXTCTRL5;
		static const long ID_STATICTEXT2;
		static const long ID_STATICTEXT3;
		static const long ID_STATICTEXT4;
		static const long ID_STATICTEXT5;
		static const long ID_BUTTON2;
		static const long ID_STATICTEXT6;
		static const long ID_TEXTCTRL6;
		static const long ID_BUTTON3;
		static const long ID_BUTTON4;
		static const long ID_STATICTEXT8;
		static const long ID_PANEL2;
		static const long ID_NOTEBOOK1;
		//*)

	private:

		//(*Handlers(EmployeeFunctionsForm)
		void OnbtnUpUpdateClick(wxCommandEvent& event);
		void OnbtnUpExitClick(wxCommandEvent& event);
		void OnbtnUpSearchClick(wxCommandEvent& event);
		void OnbtnUpBackClick(wxCommandEvent& event);
		void OnbtnGridRefreshClick(wxCommandEvent& event);
		void OnButton1Click(wxCommandEvent& event);
		void OnbtnViewTblExitClick(wxCommandEvent& event);
		void OntxfUpESAIDText(wxCommandEvent& event);
		void OnpnlUpdateEmPaint(wxPaintEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
