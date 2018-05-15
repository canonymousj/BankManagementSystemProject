#include "Metrics.h"
#include "SelectionMenu.h"
#include "Database.h"

//(*InternalHeaders(Metrics)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(Metrics)
const long Metrics::ID_STATICTEXT1 = wxNewId();
const long Metrics::ID_STATICTEXT2 = wxNewId();
const long Metrics::ID_STATICTEXT3 = wxNewId();
const long Metrics::ID_STATICTEXT4 = wxNewId();
const long Metrics::ID_STATICTEXT5 = wxNewId();
const long Metrics::ID_STATICTEXT6 = wxNewId();
const long Metrics::ID_STATICTEXT7 = wxNewId();
const long Metrics::ID_BUTTON1 = wxNewId();
const long Metrics::ID_BUTTON2 = wxNewId();
const long Metrics::ID_STATICTEXT8 = wxNewId();
const long Metrics::ID_STATICTEXT9 = wxNewId();
const long Metrics::ID_STATICTEXT10 = wxNewId();
const long Metrics::ID_STATICTEXT11 = wxNewId();
const long Metrics::ID_STATICTEXT12 = wxNewId();
const long Metrics::ID_STATICTEXT13 = wxNewId();
const long Metrics::ID_STATICTEXT14 = wxNewId();
const long Metrics::ID_STATICTEXT15 = wxNewId();
const long Metrics::ID_STATICTEXT16 = wxNewId();
const long Metrics::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Metrics,wxFrame)
	//(*EventTable(Metrics)
	//*)
END_EVENT_TABLE()

void DatabaseConnectMF();
Database *dbMF = NULL;

Metrics::Metrics(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Metrics)
	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
	SetClientSize(wxSize(543,353));
	Move(wxDefaultPosition);
	Panel1 = new wxPanel(this, ID_PANEL1, wxPoint(248,144), wxSize(544,352), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Number of employees:"), wxPoint(40,72), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Total of salaries:"), wxPoint(40,104), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	StaticText3 = new wxStaticText(Panel1, ID_STATICTEXT3, _("Number of customers:"), wxPoint(40,160), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	StaticText4 = new wxStaticText(Panel1, ID_STATICTEXT4, _("Total customer balances: "), wxPoint(40,192), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	StaticText5 = new wxStaticText(Panel1, ID_STATICTEXT5, _("Number of loans:"), wxPoint(280,160), wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	StaticText6 = new wxStaticText(Panel1, ID_STATICTEXT6, _("Total loaned amount:"), wxPoint(280,192), wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	StaticText7 = new wxStaticText(Panel1, ID_STATICTEXT7, _("Net amount:"), wxPoint(152,272), wxDefaultSize, 0, _T("ID_STATICTEXT7"));
	btnBack = new wxButton(Panel1, ID_BUTTON1, _("Back"), wxPoint(448,280), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	btnExit = new wxButton(Panel1, ID_BUTTON2, _("Exit"), wxPoint(448,312), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	lblNumEm = new wxStaticText(Panel1, ID_STATICTEXT8, wxEmptyString, wxPoint(176,72), wxSize(24,13), 0, _T("ID_STATICTEXT8"));
	lblTSal = new wxStaticText(Panel1, ID_STATICTEXT9, wxEmptyString, wxPoint(144,104), wxSize(32,13), 0, _T("ID_STATICTEXT9"));
	lblNumCl = new wxStaticText(Panel1, ID_STATICTEXT10, wxEmptyString, wxPoint(176,160), wxSize(24,13), 0, _T("ID_STATICTEXT10"));
	lblNumLoans = new wxStaticText(Panel1, ID_STATICTEXT11, wxEmptyString, wxPoint(400,160), wxSize(32,13), 0, _T("ID_STATICTEXT11"));
	lbllblTAmt = new wxStaticText(Panel1, ID_STATICTEXT12, wxEmptyString, wxPoint(400,192), wxSize(24,13), 0, _T("ID_STATICTEXT12"));
	lblTBal = new wxStaticText(Panel1, ID_STATICTEXT13, wxEmptyString, wxPoint(176,192), wxSize(24,13), 0, _T("ID_STATICTEXT13"));
	lblNet = new wxStaticText(Panel1, ID_STATICTEXT14, wxEmptyString, wxPoint(224,272), wxSize(24,13), 0, _T("ID_STATICTEXT14"));
	StaticText15 = new wxStaticText(Panel1, ID_STATICTEXT15, _("Monthly"), wxPoint(40,40), wxDefaultSize, 0, _T("ID_STATICTEXT15"));
	StaticText16 = new wxStaticText(Panel1, ID_STATICTEXT16, _("Capital"), wxPoint(40,136), wxDefaultSize, 0, _T("ID_STATICTEXT16"));

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Metrics::OnbtnBackClick);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Metrics::OnbtnExitClick);
	//*)
	SetMinSize(GetSize());
    SetMaxSize(GetSize());
    DatabaseConnectMF();
}

Metrics::~Metrics()
{
	//(*Destroy(Metrics)
	//*)
	dbMF->close();
	delete dbMF;
}


void Metrics::OnbtnExitClick(wxCommandEvent& event)
{
    this->Close();
}

void Metrics::setup(){
    vector<vector<string> > resulta = dbMF->query("SELECT * FROM tblEmployee;");
    int numEm = resulta.size();
    double maxSal = 0.0;

    if(!(resulta.empty())){ //if it contains information populate account object
        for (vector<vector<string> >::iterator it = resulta.begin(); it < resulta.end(); ++it)
        {
            vector<string> row = *it;

            maxSal += atof(row.at(4).c_str());
        }
    }

    resulta = dbMF->query("SELECT * FROM tblClient;");
    int numCl = resulta.size();

    resulta = dbMF->query("SELECT * FROM tblAccount;");
    double maxBal = 0.0;

    if(!(resulta.empty())){ //if it contains information populate account object
        for (vector<vector<string> >::iterator it = resulta.begin(); it < resulta.end(); ++it)
        {
            vector<string> row = *it;

            maxBal += atof(row.at(1).c_str());
        }
    }

    resulta = dbMF->query("SELECT * FROM tblLoan;");
    int numLoan = resulta.size();
    double maxLoan = 0.0;

    if(!(resulta.empty())){ //if it contains information populate account object
        for (vector<vector<string> >::iterator it = resulta.begin(); it < resulta.end(); ++it)
        {
            vector<string> row = *it;

            maxLoan += atof(row.at(1).c_str());
        }
    }

    lblNumEm->SetLabel(to_string(numEm));
    lblNumCl->SetLabel(to_string(numCl));
    lblNumLoans->SetLabel(to_string(numLoan));

    lblTSal->SetLabel("R " + wxString::Format("%.2f", maxSal));
    lblTBal->SetLabel("R " + wxString::Format("%.2f", maxBal));
    lbllblTAmt->SetLabel("R " + wxString::Format("%.2f", maxLoan));

    double net = maxBal - maxLoan;

    lblNet->SetLabel("R " + wxString::Format("%.2f", net));
}

void DatabaseConnectMF(){
    dbMF = new Database("Database.sqlite");
}

void Metrics::OnbtnBackClick(wxCommandEvent& event)
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
