#include "Register.h"
#include "BankManagementSystemMain.h"
#include "Database.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(Register)
#include <wx/intl.h>
#include <wx/string.h>
//*)

Database *dbReg = NULL;

void DatabaseConnectReg();

//(*IdInit(Register)
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
	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
	SetClientSize(wxSize(407,326));
	Move(wxDefaultPosition);
	Panel1 = new wxPanel(this, ID_PANEL1, wxPoint(0,0), wxSize(408,256), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	txfEName = new wxTextCtrl(Panel1, ID_TEXTCTRL1, _("Employee Name"), wxPoint(184,120), wxSize(128,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	lblName = new wxStaticText(Panel1, ID_STATICTEXT1, _("Enter name:"), wxPoint(16,128), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	txfEID = new wxTextCtrl(Panel1, ID_TEXTCTRL2, _("SAID"), wxPoint(184,152), wxSize(128,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	lblEID = new wxStaticText(Panel1, ID_STATICTEXT2, _("Enter SAID:"), wxPoint(16,160), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	txfEPass = new wxTextCtrl(Panel1, ID_TEXTCTRL3, _("password"), wxPoint(184,184), wxSize(128,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	lblEPass = new wxStaticText(Panel1, ID_STATICTEXT3, _("Enter password:"), wxPoint(16,192), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	lblMPass = new wxStaticText(Panel1, ID_STATICTEXT4, _("Managers password: "), wxPoint(16,224), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	txfMPass = new wxTextCtrl(Panel1, ID_TEXTCTRL4, _("Confirming password"), wxPoint(184,216), wxSize(128,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
	btnSubmit = new wxButton(Panel1, ID_BUTTON2, _("Submit"), wxPoint(312,272), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	btnBack = new wxButton(Panel1, ID_BUTTON1, _("Back"), wxPoint(16,272), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	lblRegister = new wxStaticText(Panel1, ID_STATICTEXT5, _("Register"), wxPoint(168,24), wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	txfEmNum = new wxTextCtrl(Panel1, ID_TEXTCTRL5, wxEmptyString, wxPoint(184,88), wxSize(128,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
	lblEmNum = new wxStaticText(Panel1, ID_STATICTEXT6, _("Employee ID (given):"), wxPoint(16,96), wxDefaultSize, 0, _T("ID_STATICTEXT6"));

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
