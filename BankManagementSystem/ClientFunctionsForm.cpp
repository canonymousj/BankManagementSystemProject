#include "ClientFunctionsForm.h"
#include "SelectionMenu.h"
#include "Account.h"
#include "ClientalManagement.h"
#include <wx/msgdlg.h>
#include "Database.h"
#include <wx/textdlg.h>
#include "Account.h"

//(*InternalHeaders(ClientFunctionsForm)
#include <wx/bitmap.h>
#include <wx/font.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/settings.h>
#include <wx/string.h>
//*)

//(*IdInit(ClientFunctionsForm)
const long ClientFunctionsForm::ID_STATICBITMAP2 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT1 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT2 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT3 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT4 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT5 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT6 = wxNewId();
const long ClientFunctionsForm::ID_TEXTCTRL1 = wxNewId();
const long ClientFunctionsForm::ID_TEXTCTRL2 = wxNewId();
const long ClientFunctionsForm::ID_TEXTCTRL3 = wxNewId();
const long ClientFunctionsForm::ID_TEXTCTRL4 = wxNewId();
const long ClientFunctionsForm::ID_TEXTCTRL5 = wxNewId();
const long ClientFunctionsForm::ID_BUTTON1 = wxNewId();
const long ClientFunctionsForm::ID_BUTTON2 = wxNewId();
const long ClientFunctionsForm::ID_BUTTON3 = wxNewId();
const long ClientFunctionsForm::ID_TEXTCTRL6 = wxNewId();
const long ClientFunctionsForm::ID_RADIOBUTTON2 = wxNewId();
const long ClientFunctionsForm::ID_RADIOBUTTON1 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT7 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT20 = wxNewId();
const long ClientFunctionsForm::ID_TEXTCTRL7 = wxNewId();
const long ClientFunctionsForm::ID_PANEL2 = wxNewId();
const long ClientFunctionsForm::ID_BUTTON8 = wxNewId();
const long ClientFunctionsForm::ID_BUTTON9 = wxNewId();
const long ClientFunctionsForm::ID_BUTTON4 = wxNewId();
const long ClientFunctionsForm::ID_BUTTON5 = wxNewId();
const long ClientFunctionsForm::ID_PANEL1 = wxNewId();
const long ClientFunctionsForm::ID_STATICBITMAP1 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT9 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT10 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT8 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT11 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT12 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT13 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT14 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT18 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT19 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT21 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT22 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT23 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT24 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT16 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT17 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT28 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT32 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT33 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT34 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT15 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT35 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT43 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT44 = wxNewId();
const long ClientFunctionsForm::ID_PANEL3 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT25 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT26 = wxNewId();
const long ClientFunctionsForm::ID_TEXTCTRL8 = wxNewId();
const long ClientFunctionsForm::ID_TEXTCTRL9 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT27 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT29 = wxNewId();
const long ClientFunctionsForm::ID_TEXTCTRL11 = wxNewId();
const long ClientFunctionsForm::ID_BUTTON6 = wxNewId();
const long ClientFunctionsForm::ID_BUTTON7 = wxNewId();
const long ClientFunctionsForm::ID_BUTTON10 = wxNewId();
const long ClientFunctionsForm::ID_BUTTON11 = wxNewId();
const long ClientFunctionsForm::ID_BUTTON12 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT30 = wxNewId();
const long ClientFunctionsForm::ID_CHOICE1 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT31 = wxNewId();
const long ClientFunctionsForm::ID_PANEL4 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT36 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT37 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT38 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT39 = wxNewId();
const long ClientFunctionsForm::ID_TEXTCTRL10 = wxNewId();
const long ClientFunctionsForm::ID_TEXTCTRL12 = wxNewId();
const long ClientFunctionsForm::ID_TEXTCTRL13 = wxNewId();
const long ClientFunctionsForm::ID_TEXTCTRL14 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT40 = wxNewId();
const long ClientFunctionsForm::ID_TEXTCTRL15 = wxNewId();
const long ClientFunctionsForm::ID_BUTTON13 = wxNewId();
const long ClientFunctionsForm::ID_BUTTON14 = wxNewId();
const long ClientFunctionsForm::ID_BUTTON15 = wxNewId();
const long ClientFunctionsForm::ID_BUTTON16 = wxNewId();
const long ClientFunctionsForm::ID_BUTTON17 = wxNewId();
const long ClientFunctionsForm::ID_BUTTON18 = wxNewId();
const long ClientFunctionsForm::ID_BUTTON19 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT41 = wxNewId();
const long ClientFunctionsForm::ID_TEXTCTRL16 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT42 = wxNewId();
const long ClientFunctionsForm::ID_BUTTON20 = wxNewId();
const long ClientFunctionsForm::ID_BUTTON21 = wxNewId();
const long ClientFunctionsForm::ID_PANEL5 = wxNewId();
const long ClientFunctionsForm::ID_NOTEBOOK1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(ClientFunctionsForm,wxFrame)
	//(*EventTable(ClientFunctionsForm)
	//*)
END_EVENT_TABLE()

int findNextPayment(std::vector< loan > &loanObj);

void DatabaseConnectCF();
Database *dbCF = NULL;

ClientFunctionsForm::ClientFunctionsForm(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(ClientFunctionsForm)
	Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
	SetClientSize(wxSize(455,485));
	Notebook1 = new wxNotebook(this, ID_NOTEBOOK1, wxPoint(0,8), wxSize(320,485), 0, _T("ID_NOTEBOOK1"));
	Notebook1->SetBackgroundColour(wxColour(205,169,46));
	Panel1 = new wxPanel(Notebook1, ID_PANEL1, wxPoint(-28,-28), wxSize(447,457), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	Panel1->SetForegroundColour(wxColour(205,169,46));
	Panel1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNHIGHLIGHT));
	StaticBitmap2 = new wxStaticBitmap(Panel1, ID_STATICBITMAP2, wxBitmap(wxImage(_T("23082-light-gold-square-background-pattern.jpg")).Rescale(wxSize(448,328).GetWidth(),wxSize(448,328).GetHeight())), wxPoint(0,0), wxSize(448,328), 0, _T("ID_STATICBITMAP2"));
	StaticBitmap2->Disable();
	lblCFunct = new wxStaticText(Panel1, ID_STATICTEXT1, _("CLIENT FUNCTIONS"), wxPoint(40,16), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	wxFont lblCFunctFont(24,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Castellar"),wxFONTENCODING_DEFAULT);
	lblCFunct->SetFont(lblCFunctFont);
	lblCName = new wxStaticText(Panel1, ID_STATICTEXT2, _("NAME:"), wxPoint(32,104), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	wxFont lblCNameFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	lblCName->SetFont(lblCNameFont);
	lblCSAID = new wxStaticText(Panel1, ID_STATICTEXT3, _("SA ID NUMBER:"), wxPoint(32,136), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	wxFont lblCSAIDFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	lblCSAID->SetFont(lblCSAIDFont);
	lblCConNum = new wxStaticText(Panel1, ID_STATICTEXT4, _("CONTACT NUMBER:"), wxPoint(32,168), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	wxFont lblCConNumFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	lblCConNum->SetFont(lblCConNumFont);
	lblCAddress = new wxStaticText(Panel1, ID_STATICTEXT5, _("PHYSICAL ADDRESS:"), wxPoint(32,200), wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	wxFont lblCAddressFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	lblCAddress->SetFont(lblCAddressFont);
	lblCID = new wxStaticText(Panel1, ID_STATICTEXT6, _("CLIENT NUMBER:"), wxPoint(32,72), wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	wxFont lblCIDFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	lblCID->SetFont(lblCIDFont);
	txfCID = new wxTextCtrl(Panel1, ID_TEXTCTRL1, wxEmptyString, wxPoint(176,72), wxSize(124,21), 0, wxTextValidator(wxFILTER_DIGITS, NULL), _T("ID_TEXTCTRL1"));
	txfCID->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNHIGHLIGHT));
	txfCID->SetExtraStyle( txfCID->GetExtraStyle() | wxWS_EX_VALIDATE_RECURSIVELY );
	txfCName = new wxTextCtrl(Panel1, ID_TEXTCTRL2, wxEmptyString, wxPoint(176,104), wxSize(124,21), 0, wxTextValidator(wxFILTER_ALPHA, NULL), _T("ID_TEXTCTRL2"));
	txfCName->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNHIGHLIGHT));
	txfCSAID = new wxTextCtrl(Panel1, ID_TEXTCTRL3, wxEmptyString, wxPoint(176,136), wxSize(124,21), 0, wxTextValidator(wxFILTER_DIGITS, NULL), _T("ID_TEXTCTRL3"));
	txfCSAID->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNHIGHLIGHT));
	txfCConNum = new wxTextCtrl(Panel1, ID_TEXTCTRL4, wxEmptyString, wxPoint(176,168), wxSize(124,21), 0, wxTextValidator(wxFILTER_DIGITS, NULL), _T("ID_TEXTCTRL4"));
	txfCConNum->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNHIGHLIGHT));
	txfCAddress = new wxTextCtrl(Panel1, ID_TEXTCTRL5, wxEmptyString, wxPoint(176,200), wxSize(124,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
	txfCAddress->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNHIGHLIGHT));
	btnCCreate = new wxButton(Panel1, ID_BUTTON1, _("CREATE"), wxPoint(184,336), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	btnCCreate->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNHIGHLIGHT));
	btnCCreate->SetBackgroundColour(wxColour(218,177,82));
	wxFont btnCCreateFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	btnCCreate->SetFont(btnCCreateFont);
	btnCBack = new wxButton(Panel1, ID_BUTTON2, _("BACK"), wxPoint(24,384), wxSize(75,32), 0, wxDefaultValidator, _T("ID_BUTTON2"));
	btnCBack->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNHIGHLIGHT));
	btnCBack->SetBackgroundColour(wxColour(218,177,82));
	wxFont btnCBackFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	btnCBack->SetFont(btnCBackFont);
	btnCExit = new wxButton(Panel1, ID_BUTTON3, _("EXIT"), wxPoint(344,384), wxSize(75,32), 0, wxDefaultValidator, _T("ID_BUTTON3"));
	btnCExit->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNHIGHLIGHT));
	btnCExit->SetBackgroundColour(wxColour(218,177,82));
	wxFont btnCExitFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	btnCExit->SetFont(btnCExitFont);
	pnlCAccount = new wxPanel(Panel1, ID_PANEL2, wxPoint(16,232), wxSize(408,88), wxTAB_TRAVERSAL, _T("ID_PANEL2"));
	txfCOAmt = new wxTextCtrl(pnlCAccount, ID_TEXTCTRL6, wxEmptyString, wxPoint(160,8), wxSize(88,21), 0, wxTextValidator(wxFILTER_NUMERIC, NULL), _T("ID_TEXTCTRL6"));
	txfCOAmt->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNHIGHLIGHT));
	RadioButton2 = new wxRadioButton(pnlCAccount, ID_RADIOBUTTON2, _("Savings"), wxPoint(336,8), wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON2"));
	RadioButton1 = new wxRadioButton(pnlCAccount, ID_RADIOBUTTON1, _("Cheque"), wxPoint(264,8), wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON1"));
	lblCOAmt = new wxStaticText(pnlCAccount, ID_STATICTEXT7, _("OPENING AMOUNT:"), wxPoint(16,8), wxDefaultSize, 0, _T("ID_STATICTEXT7"));
	wxFont lblCOAmtFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	lblCOAmt->SetFont(lblCOAmtFont);
	lblInterest = new wxStaticText(pnlCAccount, ID_STATICTEXT20, _("INTEREST:"), wxPoint(16,48), wxDefaultSize, 0, _T("ID_STATICTEXT20"));
	wxFont lblInterestFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	lblInterest->SetFont(lblInterestFont);
	txfInterest = new wxTextCtrl(pnlCAccount, ID_TEXTCTRL7, wxEmptyString, wxPoint(160,48), wxSize(88,21), 0, wxTextValidator(wxFILTER_NUMERIC, NULL), _T("ID_TEXTCTRL7"));
	txfInterest->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNHIGHLIGHT));
	btnCUpdate = new wxButton(Panel1, ID_BUTTON8, _("UPDATE"), wxPoint(184,376), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON8"));
	btnCUpdate->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNHIGHLIGHT));
	btnCUpdate->SetBackgroundColour(wxColour(218,177,82));
	wxFont btnCUpdateFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	btnCUpdate->SetFont(btnCUpdateFont);
	btnCCancel = new wxButton(Panel1, ID_BUTTON9, _("CANCEL"), wxPoint(184,416), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON9"));
	btnCCancel->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNHIGHLIGHT));
	btnCCancel->SetBackgroundColour(wxColour(218,177,82));
	wxFont btnCCancelFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	btnCCancel->SetFont(btnCCancelFont);
	btnCSearch = new wxButton(Panel1, ID_BUTTON4, _("SEARCH"), wxPoint(24,336), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON4"));
	btnCSearch->SetForegroundColour(wxColour(205,169,46));
	btnCSearch->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNHIGHLIGHT));
	wxFont btnCSearchFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	btnCSearch->SetFont(btnCSearchFont);
	btnCNew = new wxButton(Panel1, ID_BUTTON5, _("NEW"), wxPoint(344,336), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON5"));
	btnCNew->SetForegroundColour(wxColour(218,177,82));
	btnCNew->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNHIGHLIGHT));
	wxFont btnCNewFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	btnCNew->SetFont(btnCNewFont);
	Panel2 = new wxPanel(Notebook1, ID_PANEL3, wxPoint(8,10), wxSize(447,442), wxTAB_TRAVERSAL, _T("ID_PANEL3"));
	Panel2->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BACKGROUND));
	Panel2->SetBackgroundColour(wxColour(249,239,208));
	StaticBitmap1 = new wxStaticBitmap(Panel2, ID_STATICBITMAP1, wxBitmap(wxImage(_T("23082-light-gold-square-background-pattern.jpg")).Rescale(wxSize(448,464).GetWidth(),wxSize(448,464).GetHeight())), wxPoint(0,0), wxSize(448,464), wxSIMPLE_BORDER, _T("ID_STATICBITMAP1"));
	StaticText2 = new wxStaticText(Panel2, ID_STATICTEXT9, _("CLIENT NAME:"), wxPoint(64,112), wxDefaultSize, 0, _T("ID_STATICTEXT9"));
	wxFont StaticText2Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	StaticText3 = new wxStaticText(Panel2, ID_STATICTEXT10, _("CLIENT NUMBER:"), wxPoint(64,88), wxDefaultSize, 0, _T("ID_STATICTEXT10"));
	wxFont StaticText3Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText3->SetFont(StaticText3Font);
	StaticText1 = new wxStaticText(Panel2, ID_STATICTEXT8, _("ACCOUNT NUMBER:"), wxPoint(64,160), wxDefaultSize, 0, _T("ID_STATICTEXT8"));
	wxFont StaticText1Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	StaticText4 = new wxStaticText(Panel2, ID_STATICTEXT11, _("ACCOUNT BALANCE:"), wxPoint(64,184), wxDefaultSize, 0, _T("ID_STATICTEXT11"));
	wxFont StaticText4Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText4->SetFont(StaticText4Font);
	StaticText5 = new wxStaticText(Panel2, ID_STATICTEXT12, _("NUMBER OF LOANS:"), wxPoint(64,256), wxDefaultSize, 0, _T("ID_STATICTEXT12"));
	wxFont StaticText5Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText5->SetFont(StaticText5Font);
	StaticText6 = new wxStaticText(Panel2, ID_STATICTEXT13, _("AMOUNT OWED:"), wxPoint(64,280), wxDefaultSize, 0, _T("ID_STATICTEXT13"));
	wxFont StaticText6Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText6->SetFont(StaticText6Font);
	StaticText7 = new wxStaticText(Panel2, ID_STATICTEXT14, _("TOTAL REPAYMENT AMOUNT:"), wxPoint(64,304), wxDefaultSize, 0, _T("ID_STATICTEXT14"));
	wxFont StaticText7Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText7->SetFont(StaticText7Font);
	StaticText11 = new wxStaticText(Panel2, ID_STATICTEXT18, _("TOTAL ASSETS:"), wxPoint(32,360), wxDefaultSize, 0, _T("ID_STATICTEXT18"));
	wxFont StaticText11Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText11->SetFont(StaticText11Font);
	StaticText12 = new wxStaticText(Panel2, ID_STATICTEXT19, _("TOTAL LIABILITY:"), wxPoint(32,400), wxDefaultSize, 0, _T("ID_STATICTEXT19"));
	wxFont StaticText12Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText12->SetFont(StaticText12Font);
	lblClientID = new wxStaticText(Panel2, ID_STATICTEXT21, wxEmptyString, wxPoint(224,88), wxSize(32,13), 0, _T("ID_STATICTEXT21"));
	lblClientName = new wxStaticText(Panel2, ID_STATICTEXT22, wxEmptyString, wxPoint(224,112), wxSize(32,13), 0, _T("ID_STATICTEXT22"));
	lblAccID = new wxStaticText(Panel2, ID_STATICTEXT23, wxEmptyString, wxPoint(224,160), wxSize(32,13), 0, _T("ID_STATICTEXT23"));
	lblAccBal = new wxStaticText(Panel2, ID_STATICTEXT24, wxEmptyString, wxPoint(224,184), wxSize(32,13), 0, _T("ID_STATICTEXT24"));
	lblIntEarnedText = new wxStaticText(Panel2, ID_STATICTEXT16, _("MONTHLY INTEREST EARNED:"), wxPoint(64,208), wxDefaultSize, 0, _T("ID_STATICTEXT16"));
	wxFont lblIntEarnedTextFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	lblIntEarnedText->SetFont(lblIntEarnedTextFont);
	lblInterestEarned = new wxStaticText(Panel2, ID_STATICTEXT17, wxEmptyString, wxPoint(256,208), wxSize(56,13), 0, _T("ID_STATICTEXT17"));
	StaticText13 = new wxStaticText(Panel2, ID_STATICTEXT28, _("CLIENT SUMMARY"), wxPoint(64,32), wxDefaultSize, 0, _T("ID_STATICTEXT28"));
	wxFont StaticText13Font(22,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Castellar"),wxFONTENCODING_DEFAULT);
	StaticText13->SetFont(StaticText13Font);
	lblNumLoans = new wxStaticText(Panel2, ID_STATICTEXT32, wxEmptyString, wxPoint(256,256), wxSize(32,13), 0, _T("ID_STATICTEXT32"));
	lblLoanAmtOwed = new wxStaticText(Panel2, ID_STATICTEXT33, wxEmptyString, wxPoint(256,280), wxSize(32,13), 0, _T("ID_STATICTEXT33"));
	lblNextRPAmt = new wxStaticText(Panel2, ID_STATICTEXT34, wxEmptyString, wxPoint(256,304), wxSize(56,13), 0, _T("ID_STATICTEXT34"));
	StaticText8 = new wxStaticText(Panel2, ID_STATICTEXT15, _("NET WORTH:"), wxPoint(264,400), wxDefaultSize, 0, _T("ID_STATICTEXT15"));
	wxFont StaticText8Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	StaticText8->SetFont(StaticText8Font);
	lblTAss = new wxStaticText(Panel2, ID_STATICTEXT35, wxEmptyString, wxPoint(152,360), wxSize(32,13), 0, _T("ID_STATICTEXT35"));
	wxFont lblTAssFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	lblTAss->SetFont(lblTAssFont);
	lblTLia = new wxStaticText(Panel2, ID_STATICTEXT43, wxEmptyString, wxPoint(160,400), wxSize(24,16), 0, _T("ID_STATICTEXT43"));
	wxFont lblTLiaFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	lblTLia->SetFont(lblTLiaFont);
	lblNWorth = new wxStaticText(Panel2, ID_STATICTEXT44, wxEmptyString, wxPoint(352,400), wxSize(32,13), 0, _T("ID_STATICTEXT44"));
	wxFont lblNWorthFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	lblNWorth->SetFont(lblNWorthFont);
	Panel3 = new wxPanel(Notebook1, ID_PANEL4, wxPoint(186,9), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL4"));
	Panel3->SetForegroundColour(wxColour(0,128,128));
	Panel3->SetBackgroundColour(wxColour(244,244,244));
	StaticText9 = new wxStaticText(Panel3, ID_STATICTEXT25, _("ACCOUNT NUMBER:"), wxPoint(24,88), wxDefaultSize, 0, _T("ID_STATICTEXT25"));
	wxFont StaticText9Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText9->SetFont(StaticText9Font);
	StaticText10 = new wxStaticText(Panel3, ID_STATICTEXT26, _("ACCOUNT BALANCE:"), wxPoint(24,128), wxDefaultSize, 0, _T("ID_STATICTEXT26"));
	wxFont StaticText10Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText10->SetFont(StaticText10Font);
	txfAccID = new wxTextCtrl(Panel3, ID_TEXTCTRL8, wxEmptyString, wxPoint(192,88), wxDefaultSize, 0, wxTextValidator(wxFILTER_DIGITS, NULL), _T("ID_TEXTCTRL8"));
	txfAccBal = new wxTextCtrl(Panel3, ID_TEXTCTRL9, wxEmptyString, wxPoint(192,128), wxDefaultSize, 0, wxTextValidator(wxFILTER_NUMERIC, NULL), _T("ID_TEXTCTRL9"));
	lblAccType = new wxStaticText(Panel3, ID_STATICTEXT27, _("ACCOUNT TYPE:"), wxPoint(24,208), wxDefaultSize, 0, _T("ID_STATICTEXT27"));
	wxFont lblAccTypeFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	lblAccType->SetFont(lblAccTypeFont);
	lblAccInt = new wxStaticText(Panel3, ID_STATICTEXT29, _("INTEREST ON ACCOUNT:"), wxPoint(24,168), wxDefaultSize, 0, _T("ID_STATICTEXT29"));
	wxFont lblAccIntFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	lblAccInt->SetFont(lblAccIntFont);
	txfAccInt = new wxTextCtrl(Panel3, ID_TEXTCTRL11, wxEmptyString, wxPoint(192,168), wxDefaultSize, 0, wxTextValidator(wxFILTER_NUMERIC, NULL), _T("ID_TEXTCTRL11"));
	btnAccWithdraw = new wxButton(Panel3, ID_BUTTON6, _("WITHDRAW"), wxPoint(136,272), wxSize(176,32), 0, wxDefaultValidator, _T("ID_BUTTON6"));
	btnAccWithdraw->SetForegroundColour(wxColour(0,128,128));
	btnAccWithdraw->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNHIGHLIGHT));
	wxFont btnAccWithdrawFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	btnAccWithdraw->SetFont(btnAccWithdrawFont);
	btnAccDeposit = new wxButton(Panel3, ID_BUTTON7, _("DEPOSIT"), wxPoint(136,320), wxSize(176,31), 0, wxDefaultValidator, _T("ID_BUTTON7"));
	btnAccDeposit->SetForegroundColour(wxColour(0,128,128));
	btnAccDeposit->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_HIGHLIGHTTEXT));
	wxFont btnAccDepositFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	btnAccDeposit->SetFont(btnAccDepositFont);
	btnAccBack = new wxButton(Panel3, ID_BUTTON10, _("BACK"), wxPoint(32,392), wxSize(75,31), 0, wxDefaultValidator, _T("ID_BUTTON10"));
	btnAccBack->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNHIGHLIGHT));
	btnAccBack->SetBackgroundColour(wxColour(0,128,128));
	wxFont btnAccBackFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	btnAccBack->SetFont(btnAccBackFont);
	btnAccExit = new wxButton(Panel3, ID_BUTTON11, _("EXIT"), wxPoint(344,392), wxSize(75,31), 0, wxDefaultValidator, _T("ID_BUTTON11"));
	btnAccExit->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNHIGHLIGHT));
	btnAccExit->SetBackgroundColour(wxColour(0,128,128));
	wxFont btnAccExitFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	btnAccExit->SetFont(btnAccExitFont);
	btnAccUpdate = new wxButton(Panel3, ID_BUTTON12, _("UPDATE"), wxPoint(192,392), wxSize(75,31), 0, wxDefaultValidator, _T("ID_BUTTON12"));
	btnAccUpdate->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNHIGHLIGHT));
	btnAccUpdate->SetBackgroundColour(wxColour(0,128,128));
	wxFont btnAccUpdateFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	btnAccUpdate->SetFont(btnAccUpdateFont);
	lblPercent = new wxStaticText(Panel3, ID_STATICTEXT30, _("%"), wxPoint(304,168), wxSize(26,21), 0, _T("ID_STATICTEXT30"));
	cmbAccType = new wxChoice(Panel3, ID_CHOICE1, wxPoint(192,208), wxSize(104,32), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE1"));
	cmbAccType->SetSelection( cmbAccType->Append(_("Savings")) );
	cmbAccType->Append(_("Cheque"));
	StaticText14 = new wxStaticText(Panel3, ID_STATICTEXT31, _("ACCOUNT MANAGEMENT"), wxPoint(24,32), wxDefaultSize, 0, _T("ID_STATICTEXT31"));
	wxFont StaticText14Font(20,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Castellar"),wxFONTENCODING_DEFAULT);
	StaticText14->SetFont(StaticText14Font);
	Panel4 = new wxPanel(Notebook1, ID_PANEL5, wxPoint(268,6), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL5"));
	lblLLoanID = new wxStaticText(Panel4, ID_STATICTEXT36, _("Loan ID:"), wxPoint(40,80), wxDefaultSize, 0, _T("ID_STATICTEXT36"));
	lblLAmt = new wxStaticText(Panel4, ID_STATICTEXT37, _("Loan amount:"), wxPoint(40,112), wxDefaultSize, 0, _T("ID_STATICTEXT37"));
	lblLDOL = new wxStaticText(Panel4, ID_STATICTEXT38, _("Date of loan:"), wxPoint(40,144), wxDefaultSize, 0, _T("ID_STATICTEXT38"));
	lblLRP = new wxStaticText(Panel4, ID_STATICTEXT39, _("Repayment period (months): "), wxPoint(40,176), wxDefaultSize, 0, _T("ID_STATICTEXT39"));
	txfLLoanID = new wxTextCtrl(Panel4, ID_TEXTCTRL10, wxEmptyString, wxPoint(192,72), wxDefaultSize, 0, wxTextValidator(wxFILTER_DIGITS, NULL), _T("ID_TEXTCTRL10"));
	txfLAmt = new wxTextCtrl(Panel4, ID_TEXTCTRL12, wxEmptyString, wxPoint(192,104), wxDefaultSize, 0, wxTextValidator(wxFILTER_NUMERIC, NULL), _T("ID_TEXTCTRL12"));
	txfLDOL = new wxTextCtrl(Panel4, ID_TEXTCTRL13, wxEmptyString, wxPoint(192,136), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL13"));
	txfLRP = new wxTextCtrl(Panel4, ID_TEXTCTRL14, wxEmptyString, wxPoint(192,168), wxDefaultSize, 0, wxTextValidator(wxFILTER_DIGITS, NULL), _T("ID_TEXTCTRL14"));
	lblLInterest = new wxStaticText(Panel4, ID_STATICTEXT40, _("Interest:"), wxPoint(40,208), wxDefaultSize, 0, _T("ID_STATICTEXT40"));
	txfLInterest = new wxTextCtrl(Panel4, ID_TEXTCTRL15, wxEmptyString, wxPoint(192,200), wxDefaultSize, 0, wxTextValidator(wxFILTER_NUMERIC, NULL), _T("ID_TEXTCTRL15"));
	btnLBack = new wxButton(Panel4, ID_BUTTON13, _("Back"), wxPoint(360,400), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON13"));
	btnLExit = new wxButton(Panel4, ID_BUTTON14, _("Exit"), wxPoint(360,424), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON14"));
	btnLUpdate = new wxButton(Panel4, ID_BUTTON15, _("Update"), wxPoint(16,424), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON15"));
	btnLAdd = new wxButton(Panel4, ID_BUTTON16, _("Add"), wxPoint(104,424), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON16"));
	btnLView = new wxButton(Panel4, ID_BUTTON17, _("View table"), wxPoint(184,264), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON17"));
	btnLPrev = new wxButton(Panel4, ID_BUTTON18, _("Previous"), wxPoint(24,264), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON18"));
	btnLNext = new wxButton(Panel4, ID_BUTTON19, _("Next"), wxPoint(352,264), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON19"));
	lblLLoanNum = new wxStaticText(Panel4, ID_STATICTEXT41, _("Loan number:"), wxPoint(40,48), wxDefaultSize, 0, _T("ID_STATICTEXT41"));
	txfLLoanNum = new wxTextCtrl(Panel4, ID_TEXTCTRL16, wxEmptyString, wxPoint(192,40), wxDefaultSize, 0, wxTextValidator(wxFILTER_DIGITS, NULL), _T("ID_TEXTCTRL16"));
	StaticText15 = new wxStaticText(Panel4, ID_STATICTEXT42, _("%"), wxPoint(304,200), wxDefaultSize, 0, _T("ID_STATICTEXT42"));
	btnLNew = new wxButton(Panel4, ID_BUTTON20, _("New"), wxPoint(16,392), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON20"));
	btnLCancel = new wxButton(Panel4, ID_BUTTON21, _("Cancel"), wxPoint(104,392), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON21"));
	Notebook1->AddPage(Panel1, _("Client Functions"), false);
	Notebook1->AddPage(Panel2, _("Client Summary"), false);
	Notebook1->AddPage(Panel3, _("Client Account"), false);
	Notebook1->AddPage(Panel4, _("Client Loans"), false);

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnbtnCCreateClick);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnbtnCBackClick);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnbtnCExitClick);
	Connect(ID_RADIOBUTTON2,wxEVT_COMMAND_RADIOBUTTON_SELECTED,(wxObjectEventFunction)&ClientFunctionsForm::OnRadioButton2Select);
	Connect(ID_RADIOBUTTON1,wxEVT_COMMAND_RADIOBUTTON_SELECTED,(wxObjectEventFunction)&ClientFunctionsForm::OnRadioButton1Select);
	Connect(ID_BUTTON8,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnbtnCUpdateClick);
	Connect(ID_BUTTON9,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnbtnCCancelClick);
	Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnbtnCSearchClick);
	Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnbtnCNewClick);
	Panel2->Connect(wxEVT_PAINT,(wxObjectEventFunction)&ClientFunctionsForm::OnPanel2Paint,0,this);
	Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnbtnAccWithdrawClick);
	Connect(ID_BUTTON7,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnbtnAccDepositClick);
	Connect(ID_BUTTON10,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnbtnAccBackClick);
	Connect(ID_BUTTON11,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnbtnAccExitClick);
	Connect(ID_BUTTON12,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnbtnAccUpdateClick);
	Connect(ID_CHOICE1,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&ClientFunctionsForm::OncmbAccTypeSelect);
	Connect(ID_BUTTON13,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnbtnLBackClick);
	Connect(ID_BUTTON14,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnbtnLExitClick);
	Connect(ID_BUTTON15,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnbtnLUpdateClick);
	Connect(ID_BUTTON16,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnbtnLAddClick);
	Connect(ID_BUTTON17,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnbtnLViewClick);
	Connect(ID_BUTTON18,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnbtnLPrevClick);
	Connect(ID_BUTTON19,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnbtnLNextClick);
	Connect(ID_BUTTON20,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnButton1Click);
	Connect(ID_BUTTON21,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnbtnLCancelClick);
	Connect(ID_NOTEBOOK1,wxEVT_COMMAND_NOTEBOOK_PAGE_CHANGED,(wxObjectEventFunction)&ClientFunctionsForm::OnNotebook1PageChanged);
	//*)
	SetMinSize(GetSize());
    SetMaxSize(GetSize());
    DatabaseConnectCF();
}

ClientFunctionsForm::~ClientFunctionsForm()
{
	//(*Destroy(ClientFunctionsForm)
	//*)
	dbCF->close();
	delete dbCF;
}

void DatabaseConnectCF(){
    dbCF = new Database("Database.sqlite");
}

void ClientFunctionsForm::populateAccount(int cNum){
    std::string q = "SELECT * FROM tblAccount WHERE clientID = "+std::to_string(cNum)+";";
    vector<vector<string> > res = dbCF->query(q.c_str());   //store query to string vector (2D)
    if(!(res.empty())){ //if it contains information populate account object
        accObj = account(atoi(res[0][0].c_str()), atoi(res[0][2].c_str()), atof(res[0][1].c_str()), atof(res[0][3].c_str()));
    }

    //new query to load client with specific client ID
    q = "SELECT * FROM tblClient WHERE clientID = "+std::to_string(cNum)+";";
    res = dbCF->query(q.c_str());   //store result of query to vector
    if(!(res.empty())){ //if not empty populate inherited client details of accObj
        accObj.setClientID(atoi(res[0][0].c_str()));
        accObj.setName(res[0][1]);
        accObj.setSAID(res[0][2]);
        accObj.setContactNumber(res[0][3]);
        accObj.setAddress(res[0][4]);
    }
    populateLoans(accObj);

    populateClientSummary(accObj, loanObj);
}

void ClientFunctionsForm::populateLoans(account &accobj){
    std::string q = "SELECT * FROM tblLoan WHERE clientID = "+std::to_string(accObj.getClientID())+";";
    vector<vector<string> > res = dbCF->query(q.c_str());   //store query to string vector (2D)

    int rowPos = 0;

    if(!(res.empty())){ //if it contains information populate account object
        loanObj.clear();
        loanObj.reserve(res.size());

        for (vector<vector<string> >::iterator it = res.begin(); it < res.end(); ++it)
        {
            vector<string> row = *it;

            int loanID = atoi((row.at(0)).c_str()), rpPeriod = atoi((row.at(3)).c_str()), type = atoi((row.at(6)).c_str());
            double amt = atof((row.at(1)).c_str()), interest = atof((row.at(4)).c_str());
            string dol = row.at(2);

            loanObj.push_back(loan(loanID, amt, interest, type, rpPeriod, dol));

            rowPos++;
        }
    }else{
        loanObj.clear();
    }

}

void ClientFunctionsForm::populateClientSummary(account &accObj, std::vector< loan > &loanObj){   //populate fields in client summary tab
    wxString clID, clName, AccID, intEarned, accBal;    //temporary conversion variables

    wxString AccType;

    double interestEarned = 0.0;

    clientAcc = &accObj;    //use of polymorphism, type-compatible derivative class assigned to pointer of
                            //base class

    interestEarned = clientAcc->interestEarned();   //funct call in account class, using base class pointer through virtual
    intEarned<<("R " + wxString::Format("%.2f", interestEarned) + " @ " + wxString::Format("%.2f", accObj.getInterest()) + "%");


    clID<< accObj.getClientID();
    clName<<accObj.getName();

    AccID<<accObj.getAccountID();

    lblClientID->SetLabel(clID);
    lblClientName->SetLabel(clName);

    accBal = wxString::Format("%.2f", accObj.getBalance());

    lblAccID->SetLabel(AccID);
    txfAccID->SetValue(AccID);
    lblAccBal->SetLabel("R "+accBal);
    txfAccBal->SetValue(accBal);

    lblTAss->SetLabel("R "+accBal);
    lblTAss->SetForegroundColour(wxColour(0, 255, 0));

    cmbAccType->SetSelection(accObj.getType());
    txfAccInt->SetValue(wxString::Format("%.2f", accObj.getInterest()));

    if(accObj.getType() == 0){
        lblIntEarnedText->Show(TRUE);
        lblInterestEarned->Show(TRUE);
        lblInterestEarned->SetLabel(intEarned);

        txfAccInt->Show(TRUE);
        lblAccInt->Show(TRUE);
        lblPercent->Show(TRUE);
    }else{
        lblIntEarnedText->Hide();
        lblInterestEarned->Hide();

        txfAccInt->Hide();
        lblAccInt->Hide();
        lblPercent->Hide();
    }

    double amtOwed = 0.0;
    double interestOwed = 0.0;

    //loan part
    lblNumLoans->SetLabel(to_string(loanObj.size()));
    if(!(loanObj.empty())){ //if it contains information populate account object
        for (unsigned int i = 0; i < loanObj.size(); i++)
        {
            amtOwed += loanObj[i].getAmount();
            interestOwed += loanObj[i].interestEarned();
        }

        double nWorth = wxAtof(accBal) - amtOwed;

        lblLoanAmtOwed->SetLabel("R "+wxString::Format("%.2f", amtOwed));

        lblNextRPAmt->SetLabel("R "+wxString::Format("%.2f", interestOwed));

        lblTLia->SetLabel("R "+ wxString::Format("%.2f", amtOwed));
        lblTLia->SetForegroundColour(wxColour(255, 0, 0));

        lblNWorth->SetLabel("R "+ wxString::Format("%.2f", nWorth));
        lblNWorth->SetForegroundColour(wxColour(0, 0, 255));

        //loan page
        populateLoanFields(0);
    }
}

void ClientFunctionsForm::populateLoanFields(unsigned int pos){
    if(!(loanObj.empty())&&(pos<loanObj.size())){
        txfLLoanNum->SetValue(to_string(pos+1));
        txfLLoanID->SetValue(to_string(loanObj[pos].getLoanID()));
        txfLAmt->SetValue(wxString::Format("%.2f", loanObj[pos].getAmount()));
        txfLDOL->SetValue(loanObj[pos].getDateOfLoan());
        txfLRP->SetValue(to_string(loanObj[pos].getRepayPeriod()));
        txfLInterest->SetValue(wxString::Format("%.2f", loanObj[pos].getInterest()));
    }
}

int ClientFunctionsForm::populateClientFields(int cNum){
    wxString clNum, cName, cSAID, cContact, cAddress;   //main variable init

    std::string q = "SELECT * FROM tblClient WHERE clientID = "+std::to_string(cNum)+";";   //get user record from database
    vector<vector<string> > res = dbCF->query(q.c_str());   //process sql query

    if(!(res.empty())){         //check if it returned results
        clNum << res[0][0];     //populate local variables with elements from client record
        cName << res[0][1];
        cSAID << res[0][2];
        cContact << res[0][3];
        cAddress << res[0][4];
    }else{
        return 0;               //return 0 should client not exit
    }

    txfCID->SetValue(clNum);    //set textfields with elements from client record
    txfCName->SetValue(cName);
    txfCSAID->SetValue(cSAID);
    txfCConNum->SetValue(cContact);
    txfCAddress->SetValue(cAddress);

    populateAccount(cNum);      //populate account associated with the client (derivative class of base client)
    return 1;
}
int ClientFunctionsForm::populateClientFields(std::string SAID){    //overloaded function for query of SAID
    wxString clNum, cName, cSAID, cContact, cAddress;

    std::replace(SAID.begin(), SAID.end(), '\'', ' ');

    std::string q = "SELECT * FROM tblClient WHERE SAID = '"+SAID+"';";
    vector<vector<string> > res = dbCF->query(q.c_str());

    if(!(res.empty())){
        clNum << res[0][0];
        cName << res[0][1];
        cSAID << res[0][2];
        cContact << res[0][3];
        cAddress << res[0][4];
    }else{
        return 0;
    }

    txfCID->SetValue(clNum);
    txfCName->SetValue(cName);
    txfCSAID->SetValue(cSAID);
    txfCConNum->SetValue(cContact);
    txfCAddress->SetValue(cAddress);

    populateAccount(wxAtoi(clNum));
    return 1;
}

void ClientFunctionsForm::setup(){
    loanObj.clear();

    //Reset all fields
    txfCID->SetValue("");
    txfCAddress->SetValue("");
    txfCConNum->SetValue("");
    txfCName->SetValue("");
    txfCOAmt->SetValue("");
    txfCSAID->SetValue("");

    //reset all account and summary fields
    txfAccBal->SetValue("");
    txfAccID->SetValue("");
    txfAccInt->SetValue("");

    lblAccID->SetLabel("");
    lblAccBal->SetLabel("");

    lblClientID->SetLabel("");
    lblClientName->SetLabel("");
    lblInterestEarned->SetLabel("");
    //set default states
    RadioButton1->SetValue(TRUE);
    RadioButton2->SetValue(FALSE);

    lblInterest->Hide();
    txfInterest->Hide();

    btnCCreate->Hide();
    btnCUpdate->Hide();
    btnCCancel->Hide();
    btnCSearch->Show(TRUE);

    pnlCAccount->Hide();

    txfCName->SetEditable(FALSE);
    txfCAddress->SetEditable(FALSE);
    txfCConNum->SetEditable(FALSE);

    txfCID->SetEditable(TRUE);

    //account page
    txfAccID->SetEditable(FALSE);

    //loan page
    txfLLoanID->SetEditable(FALSE);
    txfLLoanNum->SetEditable(FALSE);

    btnLAdd->Hide();
    btnLCancel->Hide();

    btnLUpdate->Show(TRUE);
    btnLNext->Show(TRUE);
    btnLView->Show(TRUE);
    btnLPrev->Show(TRUE);

    txfLAmt->SetValue("");
    txfLDOL->SetValue("");
    txfLInterest->SetValue("");
    txfLRP->SetValue("");
    txfLLoanID->SetValue("");
    txfLLoanNum->SetValue("");
}

void ClientFunctionsForm::OnbtnCBackClick(wxCommandEvent& event)//rebuild
{
    SelectionMenu *seleForm = new SelectionMenu(NULL);

    seleForm->currentLogged = this->curEmployee;
    seleForm->Show(TRUE);
    wxString EmID;
    EmID<<seleForm->currentLogged->getEmployeeNumber();

    seleForm->lblWelcome->SetLabelText("Welcome: "+seleForm->currentLogged->getName()+"\nEmployee ID: "+EmID);
    seleForm->lblDays->SetLabelText(lblTextStore);

    this->Close(TRUE);
}

void ClientFunctionsForm::OnbtnCExitClick(wxCommandEvent& event)
{
    this->Close(TRUE);
}

void ClientFunctionsForm::OnbtnCSearchClick(wxCommandEvent& event)
{
    vector<vector<string> > resulta = dbCF->query("SELECT * FROM tblClient;");

	int max = resulta.size();

	int clientNum = wxAtoi(txfCID->GetValue());
	string SAID = txfCSAID->GetValue().ToStdString();
	std::replace(SAID.begin(), SAID.end(), '\'', ' ');

	if(clientNum <= max && clientNum > 0){
        wxMessageBox("Acceptable");

        int state = populateClientFields(clientNum);

        if(state){
            btnCUpdate->Show(TRUE);

            txfCName->SetEditable(TRUE);
            txfCAddress->SetEditable(TRUE);
            txfCConNum->SetEditable(TRUE);
            txfCID->SetEditable(FALSE);

            btnCSearch->Hide();
            btnCCancel->Show(TRUE);
        }else{
            wxMessageBox("Client doesn't exit");
        }

	}else if(populateClientFields(SAID)){
        wxMessageBox("Acceptable");

        btnCUpdate->Show(TRUE);

        txfCName->SetEditable(TRUE);
        txfCAddress->SetEditable(TRUE);
        txfCConNum->SetEditable(TRUE);

        btnCSearch->Hide();
        btnCCancel->Show(TRUE);
	}else{
        wxMessageBox("Client doesn't exit");
	}
}

void ClientFunctionsForm::OnbtnCNewClick(wxCommandEvent& event)
{
    setup();
    pnlCAccount->Show(TRUE);
    btnCCreate->Show(TRUE);
    btnCCancel->Show(TRUE);
    btnCSearch->Show(FALSE);

    txfCName->SetEditable(TRUE);
    txfCAddress->SetEditable(TRUE);
    txfCConNum->SetEditable(TRUE);

    txfCID->SetEditable(FALSE);

    vector<vector<string> > resulta = dbCF->query("SELECT * FROM tblClient;");

	int max = resulta.size();
	wxString maxStr;
	maxStr << (max+1);

	txfCID->SetValue(maxStr);
}

void ClientFunctionsForm::OnbtnCCancelClick(wxCommandEvent& event)
{
    setup();
}

void ClientFunctionsForm::OnbtnCUpdateClick(wxCommandEvent& event)
{
    vector<vector<string> > resulta = dbCF->query("SELECT * FROM tblClient;");

	int max = resulta.size();

	int cNum = wxAtoi(txfCID->GetValue());
    if(cNum <= max && cNum > 0){
        std::string cName = txfCName->GetValue().ToStdString(), cSAID = txfCSAID->GetValue().ToStdString(), cCon = txfCConNum->GetValue().ToStdString(), cAdd = txfCAddress->GetValue().ToStdString();

        std::replace(cName.begin(), cName.end(), '\'', ' ');
        std::replace(cSAID.begin(), cSAID.end(), '\'', ' ');
        std::replace(cCon.begin(), cCon.end(), '\'', ' ');
        std::replace(cAdd.begin(), cAdd.end(), '\'', ' ');

        std::string name = "clientName = '" + cName + "', ";
        std::string sID = "SAID = '" + cSAID + "', ";
        std::string clCon = "contact = '" + cCon + "', ";
        std::string clAdd = "address = '" + cAdd + "'";

        string q = "UPDATE tblClient SET "+ name + sID + clCon + clAdd + " WHERE clientID = " + to_string(cNum) +";";

        dbCF->query(q.c_str());

        populateClientFields(cNum);
        wxMessageBox("Update successful!");
    }else{
        wxMessageBox("Client doesn't Exist");
    }
}

void ClientFunctionsForm::OnbtnCCreateClick(wxCommandEvent& event)
{
    int check = 1, type = -1;
    int cNumber = wxAtoi(txfCID->GetValue());

    std::string name = txfCName->GetValue().ToStdString();
    std::string ID = txfCSAID->GetValue().ToStdString();
    std::string con = txfCConNum->GetValue().ToStdString();
    std::string add = txfCAddress->GetValue().ToStdString();

    std::replace(name.begin(), name.end(), '\'', ' ');
    std::replace(ID.begin(), ID.end(), '\'', ' ');
    std::replace(con.begin(), con.end(), '\'', ' ');
    std::replace(add.begin(), add.end(), '\'', ' ');

    double openAmt = wxAtof(txfCOAmt->GetValue());
    double openInterest = 0.0;
    bool cheque = RadioButton1->GetValue(), savings = RadioButton2->GetValue();

    if (cheque){
        type = 0;
    }
    if(savings){
        type = 1;
        openInterest = wxAtof(txfInterest->GetValue());
    }

    string q = "SELECT SAID FROM tblClient WHERE SAID = '"+ ID +"';";
    vector<vector<string> > resReg;
    resReg = dbCF->query(q.c_str());
    if (!(resReg.empty())){
        check = 0;
    }


    if (check){
        q = "INSERT INTO tblClient VALUES(null, '" + name + "', '" + ID + "', '" + con + "', '" + add + "');";
        dbCF->query(q.c_str());

        q = "INSERT INTO tblAccount VALUES(null, " + std::to_string(openAmt) + ", " + std::to_string(type) + ", " + std::to_string(openInterest) + ", " + std::to_string(cNumber) + ");";
        dbCF->query(q.c_str());

        wxMessageBox("Reg success");
        wxMessageBox("They are client number: "+txfCID->GetValue());

        setup();

        btnCUpdate->Show(TRUE);
        btnCSearch->Hide();
        btnCCancel->Show(TRUE);

        txfCName->SetEditable(TRUE);
        txfCAddress->SetEditable(TRUE);
        txfCConNum->SetEditable(TRUE);

        populateClientFields(cNumber);
    }else{
        wxMessageBox("Reg failed: Duplicate ID!");
    }

}

void ClientFunctionsForm::OnRadioButton2Select(wxCommandEvent& event)
{
    lblInterest->Show(TRUE);
    txfInterest->Show(TRUE);
}

void ClientFunctionsForm::OnRadioButton1Select(wxCommandEvent& event)
{
    lblInterest->Hide();
    txfInterest->Hide();
}

void ClientFunctionsForm::OnbtnCAccClick(wxCommandEvent& event)
{
}

void ClientFunctionsForm::OnbtnCInvClick(wxCommandEvent& event)
{
}

void ClientFunctionsForm::OnbtnCLoanClick(wxCommandEvent& event)
{
}

void ClientFunctionsForm::OnbtnAccUpdateClick(wxCommandEvent& event)
{
   vector<vector<string> > resulta = dbCF->query("SELECT * FROM tblAccount;");

	int max = resulta.size();

	int accID = wxAtoi(txfAccID->GetValue());
	int clID = accObj.getClientID();

    if(accID <= max && accID > 0){
        int accType = cmbAccType->GetCurrentSelection();
        double accBal = wxAtof(txfAccBal->GetValue()), accInt = wxAtof(txfAccInt->GetValue());

        if(accType == 1){
            accInt=0;
        }

        std::string balance = "balance = " + to_string(accBal) + ", ";
        std::string type = "type = " + to_string(accType) + ", ";
        std::string interest = "interest = " + to_string(accInt);

        string q = "UPDATE tblAccount SET "+ balance + type + interest + " WHERE accID = " + to_string(accID) +";";

        dbCF->query(q.c_str());

        wxMessageBox("Update successful!");

        if(clID <= max && clID > 0){
            populateClientFields(clID);
        }
    }else{
        wxMessageBox("Account doesn't Exist");
    }
}

void ClientFunctionsForm::OncmbAccTypeSelect(wxCommandEvent& event)
{
    if(cmbAccType->GetCurrentSelection() == 0){
        lblAccInt->Show(TRUE);
        txfAccInt->Show(TRUE);
        lblPercent->Show(TRUE);
    }else if(cmbAccType->GetCurrentSelection() == 1){
        lblAccInt->Hide();
        txfAccInt->Hide();
        lblPercent->Hide();
    }else{
        wxMessageBox("Remeber to select a type!");
    }

}

void ClientFunctionsForm::OnbtnAccBackClick(wxCommandEvent& event)
{
    SelectionMenu *seleForm = new SelectionMenu(NULL);

    seleForm->currentLogged = this->curEmployee;
    seleForm->Show(TRUE);
    wxString EmID;
    EmID<<seleForm->currentLogged->getEmployeeNumber();

    seleForm->lblWelcome->SetLabelText("Welcome: "+seleForm->currentLogged->getName()+"\nEmployee ID: "+EmID);
    seleForm->lblDays->SetLabelText(lblTextStore);

    this->Close(TRUE);
}

void ClientFunctionsForm::OnbtnAccExitClick(wxCommandEvent& event)
{
    this->Close(TRUE);
}

void ClientFunctionsForm::OnbtnAccWithdrawClick(wxCommandEvent& event)
{
    vector<vector<string> > resulta = dbCF->query("SELECT * FROM tblClient;");

	int max = resulta.size();

	wxString drawAmt;

    clientAcc = &accObj;
    if(clientAcc->getClientID() <= max && clientAcc->getClientID() > 0){

        wxTextEntryDialog dlg(this,  _("Please enter amount to withdraw"), _("Withdraw Amount"), _("Amount to withdraw"));
        dlg.SetTextValidator(wxFILTER_NUMERIC);
        if ( dlg.ShowModal() == wxID_OK )
        {
            // We can be certain that this string contains numbers only.
            drawAmt = dlg.GetValue();
        }
        if(wxAtof(drawAmt)<=accObj.getBalance()){
            clientAcc->withdraw(wxAtof(drawAmt));

            if(accObj.getClientID()==clientAcc->getClientID()){
                string q = "UPDATE tblAccount SET balance = "+ to_string(accObj.getBalance()) + " WHERE accID = " + to_string(accObj.getAccountID()) +";";

                dbCF->query(q.c_str());

                wxMessageBox("Withdraw successful!");

                populateClientFields(clientAcc->getClientID());

            }
        }else{
            wxMessageBox("Can't draw more than they have! Offer loan.");
        }
    }
}

void ClientFunctionsForm::OnbtnAccDepositClick(wxCommandEvent& event)
{
    vector<vector<string> > resulta = dbCF->query("SELECT * FROM tblClient;");

	int max = resulta.size();

	wxString depAmt;

    clientAcc = &accObj;
    if(clientAcc->getClientID() <= max && clientAcc->getClientID() > 0){

        wxTextEntryDialog dlg(this,  _("Please enter amount to deposit"), _("Deposit Amount"), _("Amount to deposit"));
        dlg.SetTextValidator(wxFILTER_NUMERIC);
        if ( dlg.ShowModal() == wxID_OK )
        {
            // We can be certain that this string contains numbers only.
            depAmt = dlg.GetValue();
        }
        if(wxAtof(depAmt) < 0 && (-1* wxAtof(depAmt)) >=accObj.getBalance()){
            wxMessageBox("Can't draw more than they have! Offer loan.");
        }else{
            clientAcc->deposit(wxAtof(depAmt));


            if(accObj.getClientID()==clientAcc->getClientID()){
                string q = "UPDATE tblAccount SET balance = "+ to_string(accObj.getBalance()) + " WHERE accID = " + to_string(accObj.getAccountID()) +";";

                dbCF->query(q.c_str());

                wxMessageBox("Deposit successful!");

                populateClientFields(clientAcc->getClientID());

            }
        }
    }
}

void ClientFunctionsForm::OnPanel2Paint(wxPaintEvent& event)
{
}


void ClientFunctionsForm::OnNotebook1PageChanged(wxNotebookEvent& event)
{
}

void ClientFunctionsForm::OnbtnLNextClick(wxCommandEvent& event)
{
    unsigned int currentPos = wxAtoi(txfLLoanNum->GetValue()) - 1;
    unsigned int nextPos = currentPos+1;

    if(nextPos<loanObj.size()){
        populateLoanFields(nextPos);
    }else{
        wxMessageBox("End of Loans");
    }
}

void ClientFunctionsForm::OnbtnLPrevClick(wxCommandEvent& event)
{
    unsigned int currentPos = wxAtoi(txfLLoanNum->GetValue()) - 1;
    unsigned int nextPos = currentPos-1;

    if(nextPos<loanObj.size()&&nextPos>=0){
        populateLoanFields(nextPos);
    }else{
        wxMessageBox("End of Loans");
    }
}

void ClientFunctionsForm::OnbtnLBackClick(wxCommandEvent& event)
{
    SelectionMenu *seleForm = new SelectionMenu(NULL);

    seleForm->currentLogged = this->curEmployee;
    seleForm->Show(TRUE);
    wxString EmID;
    EmID<<seleForm->currentLogged->getEmployeeNumber();

    seleForm->lblWelcome->SetLabelText("Welcome: "+seleForm->currentLogged->getName()+"\nEmployee ID: "+EmID);
    seleForm->lblDays->SetLabelText(lblTextStore);

    this->Close(TRUE);
}

void ClientFunctionsForm::OnbtnLExitClick(wxCommandEvent& event)
{
    this->Close(TRUE);
}

void ClientFunctionsForm::OnbtnLViewClick(wxCommandEvent& event)
{
    Account *tableForm = new Account(NULL);

    tableForm->loanObj = this->loanObj;
    tableForm->updateTable();

    tableForm->Show(TRUE);
}

void ClientFunctionsForm::OnbtnLUpdateClick(wxCommandEvent& event)
{
    double lAmt = wxAtof(txfLAmt->GetValue()), lInterest = wxAtof(txfLInterest->GetValue());
    int rpPeriod = wxAtoi(txfLRP->GetValue()), loanNum = wxAtoi(txfLLoanNum->GetValue()) - 1;

    string lDOL = txfLDOL->GetValue().ToStdString();

    std::replace(lDOL.begin(), lDOL.end(), '\'', ' ');

    if(!(loanObj.empty())){
        loanObj[loanNum].setAmount(lAmt);
        loanObj[loanNum].setDateOfLoan(lDOL);
        loanObj[loanNum].setRepayPeriod(rpPeriod);
        loanObj[loanNum].setInterest(lInterest);

        writeLoanChanges();

        wxMessageBox("Update successful!");
    }
}

void ClientFunctionsForm::writeLoanChanges(){
    if(!(loanObj.empty())){
        for (unsigned int i = 0; i < loanObj.size(); i++)
        {
            string amt = "amount = " + to_string(loanObj[i].getAmount()) + ", ";
            string dateOfLoan = "dateOfLoan = '" + loanObj[i].getDateOfLoan() +"', ";
            string repayPeriod = "repayPeriod = " + to_string(loanObj[i].getRepayPeriod()) + ", ";
            string interest = "interest = " + to_string(loanObj[i].getInterest());

            string q = "UPDATE tblLoan SET "+ amt + dateOfLoan + repayPeriod + interest + " WHERE loanID = " + to_string(loanObj[i].getLoanID()) +";";

            dbCF->query(q.c_str());
        }
    }
}

void ClientFunctionsForm::OnbtnLAddClick(wxCommandEvent& event)
{
    double lAmt = wxAtof(txfLAmt->GetValue()), lInterest = wxAtof(txfLInterest->GetValue());
    int rpPeriod = wxAtoi(txfLRP->GetValue()), loanID = wxAtoi(txfLLoanID->GetValue());

    string lDOL = txfLDOL->GetValue().ToStdString();

    std::replace(lDOL.begin(), lDOL.end(), '\'', ' ');

    loanObj.push_back(loan(loanID, lAmt, lInterest, 0, rpPeriod, lDOL));

    btnLAdd->Hide();
    btnLCancel->Hide();

    btnLUpdate->Show(TRUE);
    btnLNext->Show(TRUE);
    btnLView->Show(TRUE);
    btnLPrev->Show(TRUE);

    string q = "INSERT INTO tblLoan VALUES(null, " + to_string(lAmt) + ", '" + lDOL + "', " + to_string(rpPeriod) + ", " + to_string(lInterest) + ", " + to_string(wxAtoi(txfCID->GetValue())) + ", 0);";
    dbCF->query(q.c_str());

    wxMessageBox("New loan added successfully!");
}

void ClientFunctionsForm::OnButton1Click(wxCommandEvent& event)
{
    unsigned int numOfLoans = loanObj.size();

    txfLAmt->SetValue("");
    txfLDOL->SetValue("");
    txfLInterest->SetValue("");
    txfLRP->SetValue("");

    btnLAdd->Show(TRUE);
    btnLCancel->Show(TRUE);

    btnLUpdate->Hide();
    btnLNext->Hide();
    btnLView->Hide();
    btnLPrev->Hide();

    vector<vector<string> > resulta = dbCF->query("SELECT * FROM tblLoan;");

	int max = resulta.size();
	wxString maxStr;
	maxStr << (max+1);

	txfLLoanID->SetValue(maxStr);
	txfLLoanNum->SetValue(to_string(numOfLoans+1));
}

void ClientFunctionsForm::OnbtnLCancelClick(wxCommandEvent& event)
{
    setup();
}
