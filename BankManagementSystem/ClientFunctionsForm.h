#ifndef CLIENTFUNCTIONSFORM_H
#define CLIENTFUNCTIONSFORM_H

//(*Headers(ClientFunctionsForm)
#include <wx/button.h>
#include <wx/choice.h>
#include <wx/frame.h>
#include <wx/notebook.h>
#include <wx/panel.h>
#include <wx/radiobut.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)
#include "Employee.h"
#include <string>
#include <vector>
#include "ClientalManagement.h"

class ClientFunctionsForm: public wxFrame
{
	public:

		ClientFunctionsForm(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~ClientFunctionsForm();

		employee *curEmployee = NULL;
		wxString lblTextStore = "Error";

		void setup();
		int populateClientFields(int cNum);
		int populateClientFields(std::string SAID);

		void populateAccount(int cNum);
		void populateClientSummary(account &accObj, std::vector< loan > &loanObj);
		void populateLoans(account &accObj);
		void populateLoanFields(unsigned int pos);

		void writeLoanChanges();

		client *clientAcc = new account;
		account accObj;
		std::vector< loan > loanObj;

		//(*Declarations(ClientFunctionsForm)
		wxButton* btnAccBack;
		wxButton* btnAccDeposit;
		wxButton* btnAccExit;
		wxButton* btnAccUpdate;
		wxButton* btnAccWithdraw;
		wxButton* btnCBack;
		wxButton* btnCCancel;
		wxButton* btnCCreate;
		wxButton* btnCExit;
		wxButton* btnCNew;
		wxButton* btnCSearch;
		wxButton* btnCUpdate;
		wxButton* btnLAdd;
		wxButton* btnLBack;
		wxButton* btnLCancel;
		wxButton* btnLExit;
		wxButton* btnLNew;
		wxButton* btnLNext;
		wxButton* btnLPrev;
		wxButton* btnLUpdate;
		wxButton* btnLView;
		wxChoice* cmbAccType;
		wxNotebook* Notebook1;
		wxPanel* Panel1;
		wxPanel* Panel2;
		wxPanel* Panel3;
		wxPanel* Panel4;
		wxPanel* pnlCAccount;
		wxRadioButton* RadioButton1;
		wxRadioButton* RadioButton2;
		wxStaticBitmap* StaticBitmap1;
		wxStaticBitmap* StaticBitmap2;
		wxStaticBitmap* StaticBitmap3;
		wxStaticText* StaticText10;
		wxStaticText* StaticText11;
		wxStaticText* StaticText12;
		wxStaticText* StaticText13;
		wxStaticText* StaticText14;
		wxStaticText* StaticText15;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		wxStaticText* StaticText4;
		wxStaticText* StaticText5;
		wxStaticText* StaticText6;
		wxStaticText* StaticText7;
		wxStaticText* StaticText8;
		wxStaticText* StaticText9;
		wxStaticText* lblAccBal;
		wxStaticText* lblAccID;
		wxStaticText* lblAccInt;
		wxStaticText* lblAccType;
		wxStaticText* lblCAddress;
		wxStaticText* lblCConNum;
		wxStaticText* lblCFunct;
		wxStaticText* lblCID;
		wxStaticText* lblCName;
		wxStaticText* lblCOAmt;
		wxStaticText* lblCSAID;
		wxStaticText* lblClientID;
		wxStaticText* lblClientName;
		wxStaticText* lblCloans;
		wxStaticText* lblIntEarnedText;
		wxStaticText* lblInterest;
		wxStaticText* lblInterestEarned;
		wxStaticText* lblLAmt;
		wxStaticText* lblLDOL;
		wxStaticText* lblLInterest;
		wxStaticText* lblLLoanID;
		wxStaticText* lblLLoanNum;
		wxStaticText* lblLRP;
		wxStaticText* lblLoanAmtOwed;
		wxStaticText* lblNWorth;
		wxStaticText* lblNextRPAmt;
		wxStaticText* lblNumLoans;
		wxStaticText* lblPercent;
		wxStaticText* lblTAss;
		wxStaticText* lblTLia;
		wxTextCtrl* txfAccBal;
		wxTextCtrl* txfAccID;
		wxTextCtrl* txfAccInt;
		wxTextCtrl* txfCAddress;
		wxTextCtrl* txfCConNum;
		wxTextCtrl* txfCID;
		wxTextCtrl* txfCName;
		wxTextCtrl* txfCOAmt;
		wxTextCtrl* txfCSAID;
		wxTextCtrl* txfInterest;
		wxTextCtrl* txfLAmt;
		wxTextCtrl* txfLDOL;
		wxTextCtrl* txfLInterest;
		wxTextCtrl* txfLLoanID;
		wxTextCtrl* txfLLoanNum;
		wxTextCtrl* txfLRP;
		//*)

	protected:

		//(*Identifiers(ClientFunctionsForm)
		static const long ID_STATICBITMAP2;
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
		static const long ID_TEXTCTRL6;
		static const long ID_RADIOBUTTON2;
		static const long ID_RADIOBUTTON1;
		static const long ID_STATICTEXT7;
		static const long ID_STATICTEXT20;
		static const long ID_TEXTCTRL7;
		static const long ID_PANEL2;
		static const long ID_BUTTON8;
		static const long ID_BUTTON9;
		static const long ID_BUTTON4;
		static const long ID_BUTTON5;
		static const long ID_PANEL1;
		static const long ID_STATICBITMAP1;
		static const long ID_STATICTEXT9;
		static const long ID_STATICTEXT10;
		static const long ID_STATICTEXT8;
		static const long ID_STATICTEXT11;
		static const long ID_STATICTEXT12;
		static const long ID_STATICTEXT13;
		static const long ID_STATICTEXT14;
		static const long ID_STATICTEXT18;
		static const long ID_STATICTEXT19;
		static const long ID_STATICTEXT21;
		static const long ID_STATICTEXT22;
		static const long ID_STATICTEXT23;
		static const long ID_STATICTEXT24;
		static const long ID_STATICTEXT16;
		static const long ID_STATICTEXT17;
		static const long ID_STATICTEXT28;
		static const long ID_STATICTEXT32;
		static const long ID_STATICTEXT33;
		static const long ID_STATICTEXT34;
		static const long ID_STATICTEXT15;
		static const long ID_STATICTEXT35;
		static const long ID_STATICTEXT43;
		static const long ID_STATICTEXT44;
		static const long ID_PANEL3;
		static const long ID_STATICTEXT25;
		static const long ID_STATICTEXT26;
		static const long ID_TEXTCTRL8;
		static const long ID_TEXTCTRL9;
		static const long ID_STATICTEXT27;
		static const long ID_STATICTEXT29;
		static const long ID_TEXTCTRL11;
		static const long ID_BUTTON6;
		static const long ID_BUTTON7;
		static const long ID_BUTTON10;
		static const long ID_BUTTON11;
		static const long ID_BUTTON12;
		static const long ID_STATICTEXT30;
		static const long ID_CHOICE1;
		static const long ID_STATICTEXT31;
		static const long ID_PANEL4;
		static const long ID_STATICBITMAP3;
		static const long ID_STATICTEXT36;
		static const long ID_STATICTEXT37;
		static const long ID_STATICTEXT38;
		static const long ID_STATICTEXT39;
		static const long ID_TEXTCTRL10;
		static const long ID_TEXTCTRL12;
		static const long ID_TEXTCTRL13;
		static const long ID_TEXTCTRL14;
		static const long ID_STATICTEXT40;
		static const long ID_TEXTCTRL15;
		static const long ID_BUTTON13;
		static const long ID_BUTTON14;
		static const long ID_BUTTON15;
		static const long ID_BUTTON16;
		static const long ID_BUTTON17;
		static const long ID_BUTTON18;
		static const long ID_BUTTON19;
		static const long ID_STATICTEXT41;
		static const long ID_TEXTCTRL16;
		static const long ID_STATICTEXT42;
		static const long ID_BUTTON20;
		static const long ID_BUTTON21;
		static const long ID_STATICTEXT45;
		static const long ID_PANEL5;
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
		void OnbtnCAccClick(wxCommandEvent& event);
		void OnbtnCInvClick(wxCommandEvent& event);
		void OnbtnCLoanClick(wxCommandEvent& event);
		void OnbtnAccUpdateClick(wxCommandEvent& event);
		void OncmbAccTypeSelect(wxCommandEvent& event);
		void OnbtnAccBackClick(wxCommandEvent& event);
		void OnbtnAccExitClick(wxCommandEvent& event);
		void OnbtnAccWithdrawClick(wxCommandEvent& event);
		void OnbtnAccDepositClick(wxCommandEvent& event);
		void OnPanel2Paint(wxPaintEvent& event);
		void OnNotebook1PageChanged(wxNotebookEvent& event);
		void OnbtnLNextClick(wxCommandEvent& event);
		void OnbtnLPrevClick(wxCommandEvent& event);
		void OnbtnLBackClick(wxCommandEvent& event);
		void OnbtnLExitClick(wxCommandEvent& event);
		void OnbtnLViewClick(wxCommandEvent& event);
		void OnbtnLUpdateClick(wxCommandEvent& event);
		void OnbtnLAddClick(wxCommandEvent& event);
		void OnButton1Click(wxCommandEvent& event);
		void OnbtnLCancelClick(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
