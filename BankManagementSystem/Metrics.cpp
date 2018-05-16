#include "Metrics.h"
#include "SelectionMenu.h"
#include "Database.h"

//(*InternalHeaders(Metrics)
#include <wx/bitmap.h>
#include <wx/font.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/settings.h>
#include <wx/string.h>
//*)

//(*IdInit(Metrics)
const long Metrics::ID_STATICBITMAP1 = wxNewId();
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
const long Metrics::ID_STATICTEXT17 = wxNewId();
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
	Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
	SetClientSize(wxSize(543,433));
	Panel1 = new wxPanel(this, ID_PANEL1, wxPoint(248,144), wxSize(543,440), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	Panel1->SetForegroundColour(wxColour(174,134,51));
	Panel1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNHIGHLIGHT));
	StaticBitmap1 = new wxStaticBitmap(Panel1, ID_STATICBITMAP1, wxBitmap(wxImage(_T("943103.jpg")).Rescale(wxSize(544,360).GetWidth(),wxSize(544,360).GetHeight())), wxPoint(0,0), wxSize(544,360), 0, _T("ID_STATICBITMAP1"));
	StaticBitmap1->Disable();
	StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Number of employees:"), wxPoint(48,136), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(9,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Total of salaries:"), wxPoint(48,160), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	wxFont StaticText2Font(9,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	StaticText3 = new wxStaticText(Panel1, ID_STATICTEXT3, _("Number of customers:"), wxPoint(48,240), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	wxFont StaticText3Font(9,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	StaticText3->SetFont(StaticText3Font);
	StaticText4 = new wxStaticText(Panel1, ID_STATICTEXT4, _("Total customer balances: "), wxPoint(48,264), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	wxFont StaticText4Font(9,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText4->SetFont(StaticText4Font);
	StaticText5 = new wxStaticText(Panel1, ID_STATICTEXT5, _("Number of loans:"), wxPoint(312,240), wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	wxFont StaticText5Font(9,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText5->SetFont(StaticText5Font);
	StaticText6 = new wxStaticText(Panel1, ID_STATICTEXT6, _("Total loaned amount:"), wxPoint(312,264), wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	wxFont StaticText6Font(9,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText6->SetFont(StaticText6Font);
	StaticText7 = new wxStaticText(Panel1, ID_STATICTEXT7, _("Net amount:"), wxPoint(48,336), wxDefaultSize, 0, _T("ID_STATICTEXT7"));
	wxFont StaticText7Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Castellar"),wxFONTENCODING_DEFAULT);
	StaticText7->SetFont(StaticText7Font);
	btnBack = new wxButton(Panel1, ID_BUTTON1, _("BACK"), wxPoint(32,376), wxSize(75,31), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	btnBack->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	btnBack->SetBackgroundColour(wxColour(210,175,102));
	wxFont btnBackFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	btnBack->SetFont(btnBackFont);
	btnExit = new wxButton(Panel1, ID_BUTTON2, _("EXIT"), wxPoint(432,376), wxSize(75,32), 0, wxDefaultValidator, _T("ID_BUTTON2"));
	btnExit->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	btnExit->SetBackgroundColour(wxColour(210,175,102));
	wxFont btnExitFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	btnExit->SetFont(btnExitFont);
	lblNumEm = new wxStaticText(Panel1, ID_STATICTEXT8, wxEmptyString, wxPoint(232,136), wxSize(24,13), 0, _T("ID_STATICTEXT8"));
	lblTSal = new wxStaticText(Panel1, ID_STATICTEXT9, wxEmptyString, wxPoint(232,160), wxSize(32,13), 0, _T("ID_STATICTEXT9"));
	lblNumCl = new wxStaticText(Panel1, ID_STATICTEXT10, wxEmptyString, wxPoint(232,240), wxSize(24,13), 0, _T("ID_STATICTEXT10"));
	lblNumLoans = new wxStaticText(Panel1, ID_STATICTEXT11, wxEmptyString, wxPoint(448,240), wxSize(32,13), 0, _T("ID_STATICTEXT11"));
	lbllblTAmt = new wxStaticText(Panel1, ID_STATICTEXT12, wxEmptyString, wxPoint(456,264), wxSize(24,13), 0, _T("ID_STATICTEXT12"));
	lblTBal = new wxStaticText(Panel1, ID_STATICTEXT13, wxEmptyString, wxPoint(232,264), wxSize(24,13), 0, _T("ID_STATICTEXT13"));
	lblNet = new wxStaticText(Panel1, ID_STATICTEXT14, wxEmptyString, wxPoint(232,336), wxSize(24,13), 0, _T("ID_STATICTEXT14"));
	StaticText15 = new wxStaticText(Panel1, ID_STATICTEXT15, _("MONTHLY"), wxPoint(48,104), wxDefaultSize, 0, _T("ID_STATICTEXT15"));
	wxFont StaticText15Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Castellar"),wxFONTENCODING_DEFAULT);
	StaticText15->SetFont(StaticText15Font);
	StaticText16 = new wxStaticText(Panel1, ID_STATICTEXT16, _("Capital"), wxPoint(48,208), wxDefaultSize, 0, _T("ID_STATICTEXT16"));
	wxFont StaticText16Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Castellar"),wxFONTENCODING_DEFAULT);
	StaticText16->SetFont(StaticText16Font);
	StaticText8 = new wxStaticText(Panel1, ID_STATICTEXT17, _("BANK STATISTICS"), wxPoint(104,32), wxDefaultSize, 0, _T("ID_STATICTEXT17"));
	wxFont StaticText8Font(26,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Castellar"),wxFONTENCODING_DEFAULT);
	StaticText8->SetFont(StaticText8Font);

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Metrics::OnbtnBackClick);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Metrics::OnbtnExitClick);
	Panel1->Connect(wxEVT_PAINT,(wxObjectEventFunction)&Metrics::OnPanel1Paint,0,this);
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

void Metrics::OnPanel1Paint(wxPaintEvent& event)
{
}
