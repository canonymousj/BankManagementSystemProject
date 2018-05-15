#include "Register.h"
#include "BankManagementSystemMain.h"
#include "Database.h"
#include <wx/msgdlg.h>
#include <wx/valtext.h>

//(*InternalHeaders(Register)
#include <wx/bitmap.h>
#include <wx/font.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/settings.h>
#include <wx/string.h>
//*)

Database *dbReg = NULL;

void DatabaseConnectReg();

//(*IdInit(Register)
const long Register::ID_STATICBITMAP1 = wxNewId();
const long Register::ID_TEXTCTRL1 = wxNewId();
const long Register::ID_STATICTEXT1 = wxNewId();
const long Register::ID_TEXTCTRL2 = wxNewId();
const long Register::ID_STATICTEXT2 = wxNewId();
const long Register::ID_TEXTCTRL3 = wxNewId();
const long Register::ID_STATICTEXT3 = wxNewId();
const long Register::ID_STATICTEXT4 = wxNewId();
const long Register::ID_TEXTCTRL4 = wxNewId();
const long Register::ID_BUTTON2 = wxNewId();
const long Register::ID_BUTTON1 = wxNewId();
const long Register::ID_STATICTEXT5 = wxNewId();
const long Register::ID_TEXTCTRL5 = wxNewId();
const long Register::ID_STATICTEXT6 = wxNewId();
const long Register::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Register,wxFrame)
	//(*EventTable(Register)
	//*)
END_EVENT_TABLE()

Register::Register(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Register)
	Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
	SetClientSize(wxSize(438,362));
	Panel1 = new wxPanel(this, ID_PANEL1, wxPoint(0,0), wxSize(438,360), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	Panel1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	StaticBitmap1 = new wxStaticBitmap(Panel1, ID_STATICBITMAP1, wxBitmap(wxImage(_T("blue-lace-ribbon-border.jpg")).Rescale(wxSize(440,296).GetWidth(),wxSize(440,296).GetHeight())), wxPoint(0,8), wxSize(440,296), 0, _T("ID_STATICBITMAP1"));
	StaticBitmap1->Disable();
	txfEName = new wxTextCtrl(Panel1, ID_TEXTCTRL1, wxEmptyString, wxPoint(248,136), wxSize(128,21), 0, wxTextValidator(wxFILTER_ALPHA, NULL), _T("ID_TEXTCTRL1"));
	txfEName->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRADIENTINACTIVECAPTION));
	lblName = new wxStaticText(Panel1, ID_STATICTEXT1, _("NAME:"), wxPoint(64,136), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	wxFont lblNameFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	lblName->SetFont(lblNameFont);
	txfEID = new wxTextCtrl(Panel1, ID_TEXTCTRL2, wxEmptyString, wxPoint(248,176), wxSize(128,21), 0, wxTextValidator(wxFILTER_DIGITS, NULL), _T("ID_TEXTCTRL2"));
	txfEID->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRADIENTINACTIVECAPTION));
	lblEID = new wxStaticText(Panel1, ID_STATICTEXT2, _("SA ID NUMBER:"), wxPoint(64,176), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	wxFont lblEIDFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	lblEID->SetFont(lblEIDFont);
	txfEPass = new wxTextCtrl(Panel1, ID_TEXTCTRL3, wxEmptyString, wxPoint(248,216), wxSize(128,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	txfEPass->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRADIENTINACTIVECAPTION));
	lblEPass = new wxStaticText(Panel1, ID_STATICTEXT3, _("PASSWORD:"), wxPoint(64,216), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	wxFont lblEPassFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	lblEPass->SetFont(lblEPassFont);
	lblMPass = new wxStaticText(Panel1, ID_STATICTEXT4, _("MANAGER\'S PASSWORD:"), wxPoint(64,256), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	wxFont lblMPassFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	lblMPass->SetFont(lblMPassFont);
	txfMPass = new wxTextCtrl(Panel1, ID_TEXTCTRL4, wxEmptyString, wxPoint(248,256), wxSize(128,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
	txfMPass->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRADIENTINACTIVECAPTION));
	btnSubmit = new wxButton(Panel1, ID_BUTTON2, _("SUBMIT"), wxPoint(320,312), wxSize(75,32), 0, wxDefaultValidator, _T("ID_BUTTON2"));
	btnSubmit->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	btnSubmit->SetBackgroundColour(wxColour(0,0,64));
	wxFont btnSubmitFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	btnSubmit->SetFont(btnSubmitFont);
	btnBack = new wxButton(Panel1, ID_BUTTON1, _("BACK"), wxPoint(40,312), wxSize(75,31), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	btnBack->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	btnBack->SetBackgroundColour(wxColour(0,0,64));
	wxFont btnBackFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	btnBack->SetFont(btnBackFont);
	lblRegister = new wxStaticText(Panel1, ID_STATICTEXT5, _("REGISTER"), wxPoint(128,24), wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	wxFont lblRegisterFont(26,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Castellar"),wxFONTENCODING_DEFAULT);
	lblRegister->SetFont(lblRegisterFont);
	txfEmNum = new wxTextCtrl(Panel1, ID_TEXTCTRL5, wxEmptyString, wxPoint(248,96), wxSize(128,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
	txfEmNum->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRADIENTINACTIVECAPTION));
	lblEmNum = new wxStaticText(Panel1, ID_STATICTEXT6, _("EMPLOYEE ID ASSIGNED:"), wxPoint(64,96), wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	wxFont lblEmNumFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	lblEmNum->SetFont(lblEmNumFont);

	Connect(ID_TEXTCTRL2,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&Register::OntxfEIDText);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Register::OnbtnSubmitClick);
	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Register::OnButton1Click);
	//*)
	txfEmNum->SetEditable(FALSE);
	SetMinSize(GetSize());
    SetMaxSize(GetSize());
	DatabaseConnectReg();
}

Register::~Register()
{
	//(*Destroy(Register)
	//*)
	dbReg->close();
	delete dbReg;
}


void Register::OnButton1Click(wxCommandEvent& event)
{
    BankManagementSystemFrame *loginForm = new BankManagementSystemFrame(NULL);

    loginForm->Show(TRUE);

    this->Close(TRUE);
}

void DatabaseConnectReg(){
    dbReg = new Database("Database.sqlite");
}

void Register::OnbtnSubmitClick(wxCommandEvent& event)
{
    int check = 0;
    double sal = 0.0;
    int priv = 1;

    std::string name = txfEName->GetValue().ToStdString();
    std::string ID = txfEID->GetValue().ToStdString();
    std::string PWD = txfEPass->GetValue().ToStdString();
    std::string mPWD = txfMPass->GetValue().ToStdString();

    std::replace(name.begin(), name.end(), '\'', ' ');
    std::replace(ID.begin(), ID.end(), '\'', ' ');
    std::replace(PWD.begin(), PWD.end(), '\'', ' ');
    std::replace(mPWD.begin(), mPWD.end(), '\'', ' ');

    string q = "SELECT password FROM tblEmployee WHERE privilege = 0;";
    vector<vector<string> > resReg;
    resReg = dbReg->query(q.c_str());
    if (!(resReg.empty())){
        for (vector<vector<string> >::iterator it = resReg.begin(); it < resReg.end(); ++it)
        {
            vector<string> row = *it;
            if(mPWD == row.at(0)) check = 1;
        }
    }


    if (check){
        q = "INSERT INTO tblEmployee VALUES(null, '" + name + "', '" + ID + "', '" + PWD + "', " + to_string(sal) + ", " + to_string(priv) + ");";
        dbReg->query(q.c_str());
        wxMessageBox("Reg success");
        wxMessageBox("You are employee number: "+emNum);

        BankManagementSystemFrame *loginForm = new BankManagementSystemFrame(NULL);
        loginForm->Show(TRUE);
        //delete loginForm;

        this->Close(TRUE);
    }else{
        wxMessageBox("Reg failed");
    }
}

void Register::OntxfEIDText(wxCommandEvent& event)
{
}
