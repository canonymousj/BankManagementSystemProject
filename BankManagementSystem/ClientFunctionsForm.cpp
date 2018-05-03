#include "ClientFunctionsForm.h"
#include "SelectionMenu.h"
#include <wx/msgdlg.h>
#include "Database.h"
//(*InternalHeaders(ClientFunctionsForm)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(ClientFunctionsForm)
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
const long ClientFunctionsForm::ID_BUTTON4 = wxNewId();
const long ClientFunctionsForm::ID_BUTTON5 = wxNewId();
const long ClientFunctionsForm::ID_TEXTCTRL6 = wxNewId();
const long ClientFunctionsForm::ID_RADIOBUTTON2 = wxNewId();
const long ClientFunctionsForm::ID_RADIOBUTTON1 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT7 = wxNewId();
const long ClientFunctionsForm::ID_PANEL2 = wxNewId();
const long ClientFunctionsForm::ID_BUTTON8 = wxNewId();
const long ClientFunctionsForm::ID_BUTTON7 = wxNewId();
const long ClientFunctionsForm::ID_BUTTON6 = wxNewId();
const long ClientFunctionsForm::ID_BUTTON9 = wxNewId();
const long ClientFunctionsForm::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(ClientFunctionsForm,wxFrame)
	//(*EventTable(ClientFunctionsForm)
	//*)
END_EVENT_TABLE()

void DatabaseConnectCF();
Database *dbCF = NULL;

ClientFunctionsForm::ClientFunctionsForm(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(ClientFunctionsForm)
	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
	SetClientSize(wxSize(438,397));
	Move(wxDefaultPosition);
	Panel1 = new wxPanel(this, ID_PANEL1, wxPoint(64,112), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	lblCFunct = new wxStaticText(Panel1, ID_STATICTEXT1, _("Client Functions"), wxPoint(168,24), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	lblCName = new wxStaticText(Panel1, ID_STATICTEXT2, _("Name:"), wxPoint(32,88), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	lblCSAID = new wxStaticText(Panel1, ID_STATICTEXT3, _("ID Number: "), wxPoint(32,128), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	lblCConNum = new wxStaticText(Panel1, ID_STATICTEXT4, _("Contact number:"), wxPoint(32,160), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	lblCAddress = new wxStaticText(Panel1, ID_STATICTEXT5, _("Physical Address:"), wxPoint(32,192), wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	lblCID = new wxStaticText(Panel1, ID_STATICTEXT6, _("Client Number:"), wxPoint(32,56), wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	txfCID = new wxTextCtrl(Panel1, ID_TEXTCTRL1, wxEmptyString, wxPoint(200,56), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	txfCName = new wxTextCtrl(Panel1, ID_TEXTCTRL2, wxEmptyString, wxPoint(200,88), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	txfCSAID = new wxTextCtrl(Panel1, ID_TEXTCTRL3, wxEmptyString, wxPoint(200,120), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	txfCConNum = new wxTextCtrl(Panel1, ID_TEXTCTRL4, wxEmptyString, wxPoint(200,152), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
	txfCAddress = new wxTextCtrl(Panel1, ID_TEXTCTRL5, wxEmptyString, wxPoint(200,184), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
	btnCCreate = new wxButton(Panel1, ID_BUTTON1, _("Create"), wxPoint(24,352), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	btnCBack = new wxButton(Panel1, ID_BUTTON2, _("Back"), wxPoint(344,328), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	btnCExit = new wxButton(Panel1, ID_BUTTON3, _("Exit"), wxPoint(344,352), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
	btnCSearch = new wxButton(Panel1, ID_BUTTON4, _("Search"), wxPoint(336,56), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON4"));
	btnCNew = new wxButton(Panel1, ID_BUTTON5, _("New"), wxPoint(336,88), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON5"));
	pnlCAccount = new wxPanel(Panel1, ID_PANEL2, wxPoint(16,216), wxSize(408,72), wxTAB_TRAVERSAL, _T("ID_PANEL2"));
	txfCOAmt = new wxTextCtrl(pnlCAccount, ID_TEXTCTRL6, wxEmptyString, wxPoint(184,16), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL6"));
	RadioButton2 = new wxRadioButton(pnlCAccount, ID_RADIOBUTTON2, _("Savings"), wxPoint(232,48), wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON2"));
	RadioButton1 = new wxRadioButton(pnlCAccount, ID_RADIOBUTTON1, _("Cheque"), wxPoint(128,48), wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON1"));
	lblCOAmt = new wxStaticText(pnlCAccount, ID_STATICTEXT7, _("Opening amount:"), wxPoint(16,24), wxDefaultSize, 0, _T("ID_STATICTEXT7"));
	btnCUpdate = new wxButton(Panel1, ID_BUTTON8, _("Update"), wxPoint(104,352), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON8"));
	btnCLoan = new wxButton(Panel1, ID_BUTTON7, _("New Loan"), wxPoint(248,304), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON7"));
	btnCInv = new wxButton(Panel1, ID_BUTTON6, _("New Investment"), wxPoint(120,304), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON6"));
	btnCCancel = new wxButton(Panel1, ID_BUTTON9, _("Cancel"), wxPoint(184,352), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON9"));

	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnbtnCBackClick);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnbtnCExitClick);
	Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnbtnCSearchClick);
	Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnbtnCNewClick);
	Connect(ID_BUTTON9,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnbtnCCancelClick);
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

void ClientFunctionsForm::setup(){
    //Reset all fields
    txfCID->SetValue("");
    txfCAddress->SetValue("");
    txfCConNum->SetValue("");
    txfCName->SetValue("");
    txfCOAmt->SetValue("");
    txfCSAID->SetValue("");

    //set default states
    RadioButton1->SetValue(TRUE);
    RadioButton2->SetValue(FALSE);

    btnCCreate->Hide();
    btnCUpdate->Hide();
    btnCCancel->Hide();

    btnCInv->Hide();
    btnCLoan->Hide();
    pnlCAccount->Hide();

    txfCName->SetEditable(FALSE);
    txfCAddress->SetEditable(FALSE);
    txfCConNum->SetEditable(FALSE);
}

void ClientFunctionsForm::OnbtnCBackClick(wxCommandEvent& event)
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
    setup();
    if(true){
        btnCUpdate->Show(TRUE);
        btnCInv->Show(TRUE);
        btnCLoan->Show(TRUE);
    }
}

void ClientFunctionsForm::OnbtnCNewClick(wxCommandEvent& event)
{
    setup();
    pnlCAccount->Show(TRUE);
    btnCCreate->Show(TRUE);
    btnCCancel->Show(TRUE);

    txfCName->SetEditable(TRUE);
    txfCAddress->SetEditable(TRUE);
    txfCConNum->SetEditable(TRUE);
}

void ClientFunctionsForm::OnbtnCCancelClick(wxCommandEvent& event)
{
    setup();
}
