#include "SelectionMenu.h"
#include "BankManagementSystemMain.h"
#include "EmployeeFunctionsForm.h"
#include "ClientFunctionsForm.h"

//(*InternalHeaders(SelectionMenu)
#include <wx/bitmap.h>
#include <wx/font.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/settings.h>
#include <wx/string.h>
//*)

//(*IdInit(SelectionMenu)
const long SelectionMenu::ID_BUTTON2 = wxNewId();
const long SelectionMenu::ID_BUTTON3 = wxNewId();
const long SelectionMenu::ID_STATICTEXT1 = wxNewId();
const long SelectionMenu::ID_BUTTON1 = wxNewId();
const long SelectionMenu::ID_STATICTEXT2 = wxNewId();
const long SelectionMenu::ID_BUTTON4 = wxNewId();
const long SelectionMenu::ID_BUTTON5 = wxNewId();
const long SelectionMenu::ID_STATICTEXT3 = wxNewId();
const long SelectionMenu::ID_STATICBITMAP1 = wxNewId();
const long SelectionMenu::ID_STATICBITMAP2 = wxNewId();
const long SelectionMenu::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(SelectionMenu,wxFrame)
	//(*EventTable(SelectionMenu)
	//*)
END_EVENT_TABLE()

SelectionMenu::SelectionMenu(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(SelectionMenu)
	Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
	SetClientSize(wxSize(394,388));
	Panel1 = new wxPanel(this, ID_PANEL1, wxPoint(0,0), wxSize(392,388), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	Panel1->SetForegroundColour(wxColour(205,167,37));
	Panel1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	btnCFunct = new wxButton(Panel1, ID_BUTTON2, _("CLIENT FUNCTIONS"), wxPoint(104,208), wxSize(184,32), 0, wxDefaultValidator, _T("ID_BUTTON2"));
	btnCFunct->SetBackgroundColour(wxColour(219,192,102));
	wxFont btnCFunctFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	btnCFunct->SetFont(btnCFunctFont);
	btnMetr = new wxButton(Panel1, ID_BUTTON3, _("BANK METRICS"), wxPoint(104,264), wxSize(184,32), 0, wxDefaultValidator, _T("ID_BUTTON3"));
	btnMetr->SetBackgroundColour(wxColour(219,192,100));
	wxFont btnMetrFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	btnMetr->SetFont(btnMetrFont);
	lblWelcome = new wxStaticText(Panel1, ID_STATICTEXT1, _("WELCOME: *Name* \nEMPLOYEE ID: *ID*"), wxPoint(24,88), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	btnEFunct = new wxButton(Panel1, ID_BUTTON1, _("EMPLOYEE FUNCTIONS"), wxPoint(104,152), wxSize(184,32), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	btnEFunct->SetBackgroundColour(wxColour(219,192,100));
	wxFont btnEFunctFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	btnEFunct->SetFont(btnEFunctFont);
	lblDays = new wxStaticText(Panel1, ID_STATICTEXT2, _("Days to birthday: *days*"), wxPoint(264,96), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	btnLogout = new wxButton(Panel1, ID_BUTTON4, _("LOGOUT"), wxPoint(32,328), wxSize(104,31), 0, wxDefaultValidator, _T("ID_BUTTON4"));
	btnLogout->SetForegroundColour(wxColour(190,157,44));
	btnLogout->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	wxFont btnLogoutFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	btnLogout->SetFont(btnLogoutFont);
	btnHelp = new wxButton(Panel1, ID_BUTTON5, _("HELP MANUAL"), wxPoint(256,328), wxSize(109,31), 0, wxDefaultValidator, _T("ID_BUTTON5"));
	btnHelp->SetForegroundColour(wxColour(191,163,62));
	btnHelp->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	wxFont btnHelpFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	btnHelp->SetFont(btnHelpFont);
	lblSelection = new wxStaticText(Panel1, ID_STATICTEXT3, _("MAIN MENU"), wxPoint(72,32), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	wxFont lblSelectionFont(26,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Castellar"),wxFONTENCODING_DEFAULT);
	lblSelection->SetFont(lblSelectionFont);
	StaticBitmap1 = new wxStaticBitmap(Panel1, ID_STATICBITMAP1, wxBitmap(wxImage(_T("abstract-icons-tree-gold.jpg")).Rescale(wxSize(48,56).GetWidth(),wxSize(48,56).GetHeight())), wxPoint(328,16), wxSize(48,56), 0, _T("ID_STATICBITMAP1"));
	StaticBitmap2 = new wxStaticBitmap(Panel1, ID_STATICBITMAP2, wxBitmap(wxImage(_T("abstract-icons-tree-gold.jpg")).Rescale(wxSize(48,56).GetWidth(),wxSize(48,56).GetHeight())), wxPoint(16,16), wxSize(48,56), 0, _T("ID_STATICBITMAP2"));

	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&SelectionMenu::OnbtnCFunctClick);
	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&SelectionMenu::OnbtnEFunctClick);
	Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&SelectionMenu::OnbtnLogoutClick);
	//*)
	SetMinSize(GetSize());
    SetMaxSize(GetSize());
}

SelectionMenu::~SelectionMenu()
{
	//(*Destroy(SelectionMenu)
	//*)
}


void SelectionMenu::OnbtnLogoutClick(wxCommandEvent& event)
{
    BankManagementSystemFrame *logForm = new BankManagementSystemFrame(NULL);

    logForm->Show(TRUE);
    //delete logForm;

    this->Close(TRUE);
}

void SelectionMenu::OnbtnEFunctClick(wxCommandEvent& event)
{
    EmployeeFunctionsForm *emFunctForm = new EmployeeFunctionsForm(NULL);

    emFunctForm->Show(TRUE);
    emFunctForm->curEmployee = this->currentLogged;
    emFunctForm->setupCurEmployee();
    emFunctForm->lblTextStore = lblDays->GetLabel();
    emFunctForm->updateTable();
    //delete emFunctForm;

    this->Close(TRUE);
}

void SelectionMenu::OnbtnCFunctClick(wxCommandEvent& event)
{
    ClientFunctionsForm *cFunctForm = new ClientFunctionsForm(NULL);

    cFunctForm->Show(TRUE);
    cFunctForm->curEmployee = this->currentLogged;
    cFunctForm->lblTextStore = lblDays->GetLabel();
    cFunctForm->setup();
    //cFunctForm->updateTable();
    //delete emFunctForm;

    this->Close(TRUE);
}

void SelectionMenu::OnPanel1Paint(wxPaintEvent& event)
{
}
