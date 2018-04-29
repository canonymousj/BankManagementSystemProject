#include "SelectionMenu.h"
#include "BankManagementSystemMain.h"
#include "EmployeeFunctionsForm.h"

//(*InternalHeaders(SelectionMenu)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(SelectionMenu)
const long SelectionMenu::ID_STATICTEXT1 = wxNewId();
const long SelectionMenu::ID_BUTTON1 = wxNewId();
const long SelectionMenu::ID_BUTTON2 = wxNewId();
const long SelectionMenu::ID_BUTTON3 = wxNewId();
const long SelectionMenu::ID_STATICTEXT2 = wxNewId();
const long SelectionMenu::ID_BUTTON4 = wxNewId();
const long SelectionMenu::ID_BUTTON5 = wxNewId();
const long SelectionMenu::ID_STATICTEXT3 = wxNewId();
const long SelectionMenu::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(SelectionMenu,wxFrame)
	//(*EventTable(SelectionMenu)
	//*)
END_EVENT_TABLE()

SelectionMenu::SelectionMenu(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(SelectionMenu)
	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
	SetClientSize(wxSize(404,311));
	Move(wxDefaultPosition);
	Panel1 = new wxPanel(this, ID_PANEL1, wxPoint(0,0), wxSize(408,248), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	lblWelcome = new wxStaticText(Panel1, ID_STATICTEXT1, _("Welcome: *Name* \nEmployee ID: *ID*"), wxPoint(16,56), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	btnEFunct = new wxButton(Panel1, ID_BUTTON1, _("Employee Functions"), wxPoint(136,120), wxSize(120,23), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	btnCFunct = new wxButton(Panel1, ID_BUTTON2, _("Client Functions"), wxPoint(136,160), wxSize(120,23), 0, wxDefaultValidator, _T("ID_BUTTON2"));
	btnMetr = new wxButton(Panel1, ID_BUTTON3, _("Bank Metrics"), wxPoint(136,200), wxSize(120,23), 0, wxDefaultValidator, _T("ID_BUTTON3"));
	lblDays = new wxStaticText(Panel1, ID_STATICTEXT2, _("Days to birthday: *days*"), wxPoint(248,56), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	btnLogout = new wxButton(Panel1, ID_BUTTON4, _("Logout"), wxPoint(8,264), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON4"));
	btnHelp = new wxButton(Panel1, ID_BUTTON5, _("Help Manual"), wxPoint(312,264), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON5"));
	lblSelection = new wxStaticText(Panel1, ID_STATICTEXT3, _("Selection"), wxPoint(176,24), wxDefaultSize, 0, _T("ID_STATICTEXT3"));

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
    //delete emFunctForm;

    this->Close(TRUE);
}
