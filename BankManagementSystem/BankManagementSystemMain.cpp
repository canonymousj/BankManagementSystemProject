/***************************************************************
 * Name:      BankManagementSystemMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Craig, Nascha, Ashlen ()
 * Created:   2018-04-27
 * Copyright: Craig, Nascha, Ashlen ()
 * License:
 **************************************************************/

#include "BankManagementSystemMain.h"
#include <wx/msgdlg.h>
#include "Database.h"
#include "Register.h"
#include "sqlite3.h"
#include "SelectionMenu.h"
#include "Employee.h"
#include <ctime>

//(*InternalHeaders(BankManagementSystemFrame)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

Database *db = NULL;

void DatabaseConnect();
int daysBetween(std::string date);

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(BankManagementSystemFrame)
const long BankManagementSystemFrame::ID_STATICTEXT3 = wxNewId();
const long BankManagementSystemFrame::ID_TEXTCTRL1 = wxNewId();
const long BankManagementSystemFrame::ID_STATICTEXT1 = wxNewId();
const long BankManagementSystemFrame::ID_TEXTCTRL2 = wxNewId();
const long BankManagementSystemFrame::ID_STATICTEXT2 = wxNewId();
const long BankManagementSystemFrame::ID_BUTTON1 = wxNewId();
const long BankManagementSystemFrame::ID_BUTTON3 = wxNewId();
const long BankManagementSystemFrame::ID_BUTTON2 = wxNewId();
const long BankManagementSystemFrame::ID_PANEL2 = wxNewId();
const long BankManagementSystemFrame::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(BankManagementSystemFrame,wxFrame)
    //(*EventTable(BankManagementSystemFrame)
    //*)
END_EVENT_TABLE()

BankManagementSystemFrame::BankManagementSystemFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(BankManagementSystemFrame)
    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    SetClientSize(wxSize(448,216));
    Panel1 = new wxPanel(this, ID_PANEL1, wxPoint(16,16), wxSize(432,200), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    lblLogin = new wxStaticText(Panel1, ID_STATICTEXT3, _("Login:"), wxPoint(176,16), wxSize(88,24), 0, _T("ID_STATICTEXT3"));
    wxFont lblLoginFont(16,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Times New Roman"),wxFONTENCODING_DEFAULT);
    lblLogin->SetFont(lblLoginFont);
    txfUName = new wxTextCtrl(Panel1, ID_TEXTCTRL1, _("Employee ID"), wxPoint(184,72), wxSize(200,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    lblEmID = new wxStaticText(Panel1, ID_STATICTEXT1, _("Enter employee ID: "), wxPoint(48,72), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    txfPass = new wxTextCtrl(Panel1, ID_TEXTCTRL2, _("Password"), wxPoint(184,112), wxSize(200,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    lblPass = new wxStaticText(Panel1, ID_STATICTEXT2, _("Enter password:"), wxPoint(48,112), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    btnLogin = new wxButton(Panel1, ID_BUTTON1, _("Login"), wxPoint(184,160), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    btnReg = new wxButton(Panel1, ID_BUTTON3, _("Register"), wxPoint(328,160), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
    btnExit = new wxButton(Panel1, ID_BUTTON2, _("Exit"), wxPoint(48,160), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    Panel2 = new wxPanel(Panel1, ID_PANEL2, wxPoint(328,8), wxSize(88,44), wxTAB_TRAVERSAL, _T("ID_PANEL2"));

    Connect(ID_TEXTCTRL1,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&BankManagementSystemFrame::OnTextCtrl1Text);
    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BankManagementSystemFrame::OnbtnLoginClick);
    Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BankManagementSystemFrame::OnbtnRegClick);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BankManagementSystemFrame::OnbtnExitClick);
    //*)
    SetMinSize(GetSize());
    SetMaxSize(GetSize());
    DatabaseConnect();
}

BankManagementSystemFrame::~BankManagementSystemFrame()
{
    //(*Destroy(BankManagementSystemFrame)
    //*)
    db->close();
    delete db;
}

void BankManagementSystemFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void BankManagementSystemFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void BankManagementSystemFrame::OnbtnExitClick(wxCommandEvent& event)
{
    this->Close();
}

void BankManagementSystemFrame::OnTextCtrl1Text(wxCommandEvent& event)
{
}

void BankManagementSystemFrame::OnbtnLoginClick(wxCommandEvent& event)
{
    int userID = wxAtoi(txfUName->GetValue());
    std::string password = txfPass->GetValue().ToStdString();

    std::string q = "SELECT employeeID, password FROM tblEmployee WHERE employeeID = "+std::to_string(userID)+" AND password = '"+password+"';";
    vector<vector<string> > res;
    res = db->query(q.c_str());


    if (!(res.empty())&&(std::to_string(userID) == res[0][0] && password == res[0][1])){
        wxMessageBox("Success!");
        SelectionMenu *selForm = new SelectionMenu(NULL);

        q = "SELECT * FROM tblEmployee WHERE employeeID = "+std::to_string(userID)+";";
        res = db->query(q.c_str());

        if(!(res.empty())){
            selForm->currentLogged = new employee(res[0][1], res[0][2], atoi(res[0][0].c_str()), res[0][3], atof(res[0][4].c_str()), atoi(res[0][5].c_str()));
        }
        selForm->Show(TRUE);

        wxString EmID;
        EmID<<selForm->currentLogged->getEmployeeNumber();

        selForm->lblWelcome->SetLabelText("Welcome: "+selForm->currentLogged->getName()+"\nEmployee ID: "+EmID);
        selForm->lblDays->SetLabelText("Days till Birthday: "+to_string(daysBetween("24/11/1997")));

        this->Close(TRUE);
    }else{
        wxMessageBox("fail");
    }
}

void DatabaseConnect(){
    db = new Database("Database.sqlite");
}

int daysBetween(std::string date){  //needs to be looked at
    std::time_t x = std::time(0);
    std::tm* now = std::localtime(&x);

    struct std::tm b = {0,0,0,atoi(date.substr(0,2).c_str()),atoi(date.substr(3,2).c_str()),(now->tm_year)-1};
    std::time_t y = std::mktime(&b);


    if ( x != (std::time_t)(-1) && y != (std::time_t)(-1) )
    {
        double difference = std::difftime(x, y) / (60 * 60 * 24);
        return difference;
    }
    return 0;
}

void BankManagementSystemFrame::OnbtnRegClick(wxCommandEvent& event)
{
    vector<vector<string> > resulta = db->query("SELECT * FROM tblEmployee;");

	int max = resulta.size();
	wxString maxStr;
	maxStr << (max+1);

    Register *regForm = new Register(NULL);

    regForm->Show(TRUE);
    regForm->txfEmNum->SetValue(maxStr);
    regForm->emNum = maxStr;
    //delete regForm;

    this->Close(TRUE);
}
