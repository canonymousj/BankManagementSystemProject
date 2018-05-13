#include "ClientFunctionsForm.h"
#include "SelectionMenu.h"
#include "Account.h"
#include "Investment.h"
#include "Loan.h"
#include "ClientalManagement.h"
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
const long ClientFunctionsForm::ID_STATICTEXT20 = wxNewId();
const long ClientFunctionsForm::ID_TEXTCTRL7 = wxNewId();
const long ClientFunctionsForm::ID_PANEL2 = wxNewId();
const long ClientFunctionsForm::ID_BUTTON8 = wxNewId();
const long ClientFunctionsForm::ID_BUTTON7 = wxNewId();
const long ClientFunctionsForm::ID_BUTTON6 = wxNewId();
const long ClientFunctionsForm::ID_BUTTON9 = wxNewId();
const long ClientFunctionsForm::ID_BUTTON10 = wxNewId();
const long ClientFunctionsForm::ID_PANEL1 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT9 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT10 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT8 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT11 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT12 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT13 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT14 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT15 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT16 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT17 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT18 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT19 = wxNewId();
const long ClientFunctionsForm::ID_PANEL3 = wxNewId();
const long ClientFunctionsForm::ID_NOTEBOOK1 = wxNewId();
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
	SetClientSize(wxSize(455,425));
	Move(wxDefaultPosition);
	Notebook1 = new wxNotebook(this, ID_NOTEBOOK1, wxPoint(0,8), wxSize(544,397), 0, _T("ID_NOTEBOOK1"));
	Panel1 = new wxPanel(Notebook1, ID_PANEL1, wxPoint(-28,-28), wxSize(495,371), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
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
	pnlCAccount = new wxPanel(Panel1, ID_PANEL2, wxPoint(16,216), wxSize(408,88), wxTAB_TRAVERSAL, _T("ID_PANEL2"));
	txfCOAmt = new wxTextCtrl(pnlCAccount, ID_TEXTCTRL6, wxEmptyString, wxPoint(184,8), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL6"));
	RadioButton2 = new wxRadioButton(pnlCAccount, ID_RADIOBUTTON2, _("Savings"), wxPoint(224,32), wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON2"));
	RadioButton1 = new wxRadioButton(pnlCAccount, ID_RADIOBUTTON1, _("Cheque"), wxPoint(120,32), wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON1"));
	lblCOAmt = new wxStaticText(pnlCAccount, ID_STATICTEXT7, _("Opening amount:"), wxPoint(16,16), wxDefaultSize, 0, _T("ID_STATICTEXT7"));
	lblInterest = new wxStaticText(pnlCAccount, ID_STATICTEXT20, _("Interest:"), wxPoint(16,64), wxDefaultSize, 0, _T("ID_STATICTEXT20"));
	txfInterest = new wxTextCtrl(pnlCAccount, ID_TEXTCTRL7, wxEmptyString, wxPoint(184,56), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL7"));
	btnCUpdate = new wxButton(Panel1, ID_BUTTON8, _("Update"), wxPoint(104,352), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON8"));
	btnCLoan = new wxButton(Panel1, ID_BUTTON7, _("Loan"), wxPoint(256,304), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON7"));
	btnCInv = new wxButton(Panel1, ID_BUTTON6, _("Investment"), wxPoint(168,304), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON6"));
	btnCCancel = new wxButton(Panel1, ID_BUTTON9, _("Cancel"), wxPoint(184,352), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON9"));
	btnCAcc = new wxButton(Panel1, ID_BUTTON10, _("Account"), wxPoint(80,304), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON10"));
	Panel2 = new wxPanel(Notebook1, ID_PANEL3, wxPoint(8,10), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL3"));
	StaticText2 = new wxStaticText(Panel2, ID_STATICTEXT9, _("Client name: "), wxPoint(232,48), wxDefaultSize, 0, _T("ID_STATICTEXT9"));
	StaticText3 = new wxStaticText(Panel2, ID_STATICTEXT10, _("Client number:"), wxPoint(24,48), wxDefaultSize, 0, _T("ID_STATICTEXT10"));
	StaticText1 = new wxStaticText(Panel2, ID_STATICTEXT8, _("Account number:"), wxPoint(24,96), wxDefaultSize, 0, _T("ID_STATICTEXT8"));
	StaticText4 = new wxStaticText(Panel2, ID_STATICTEXT11, _("Amount:"), wxPoint(232,96), wxDefaultSize, 0, _T("ID_STATICTEXT11"));
	StaticText5 = new wxStaticText(Panel2, ID_STATICTEXT12, _("Number of loans:"), wxPoint(24,144), wxDefaultSize, 0, _T("ID_STATICTEXT12"));
	StaticText6 = new wxStaticText(Panel2, ID_STATICTEXT13, _("Total amount:"), wxPoint(24,168), wxDefaultSize, 0, _T("ID_STATICTEXT13"));
	StaticText7 = new wxStaticText(Panel2, ID_STATICTEXT14, _("Next repayment amount:"), wxPoint(24,192), wxDefaultSize, 0, _T("ID_STATICTEXT14"));
	StaticText8 = new wxStaticText(Panel2, ID_STATICTEXT15, _("Next repayment date:"), wxPoint(240,192), wxDefaultSize, 0, _T("ID_STATICTEXT15"));
	StaticText9 = new wxStaticText(Panel2, ID_STATICTEXT16, _("Number of investments"), wxPoint(24,240), wxDefaultSize, 0, _T("ID_STATICTEXT16"));
	StaticText10 = new wxStaticText(Panel2, ID_STATICTEXT17, _("Total amount:"), wxPoint(24,256), wxDefaultSize, 0, _T("ID_STATICTEXT17"));
	StaticText11 = new wxStaticText(Panel2, ID_STATICTEXT18, _("Total assets:"), wxPoint(24,312), wxDefaultSize, 0, _T("ID_STATICTEXT18"));
	StaticText12 = new wxStaticText(Panel2, ID_STATICTEXT19, _("Total liability:"), wxPoint(248,312), wxDefaultSize, 0, _T("ID_STATICTEXT19"));
	Notebook1->AddPage(Panel1, _("Client Functions"), false);
	Notebook1->AddPage(Panel2, _("Client Summary"), false);

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnbtnCCreateClick);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnbtnCBackClick);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnbtnCExitClick);
	Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnbtnCSearchClick);
	Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnbtnCNewClick);
	Connect(ID_RADIOBUTTON2,wxEVT_COMMAND_RADIOBUTTON_SELECTED,(wxObjectEventFunction)&ClientFunctionsForm::OnRadioButton2Select);
	Connect(ID_RADIOBUTTON1,wxEVT_COMMAND_RADIOBUTTON_SELECTED,(wxObjectEventFunction)&ClientFunctionsForm::OnRadioButton1Select);
	Connect(ID_BUTTON8,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnbtnCUpdateClick);
	Connect(ID_BUTTON7,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnbtnCLoanClick);
	Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnbtnCInvClick);
	Connect(ID_BUTTON9,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnbtnCCancelClick);
	Connect(ID_BUTTON10,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnbtnCAccClick);
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
    vector<vector<string> > res = dbCF->query(q.c_str());
    if(!(res.empty())){
        clientAcc = new account(atoi(res[0][0].c_str()), atoi(res[0][4].c_str()), atof(res[0][1].c_str()), atof(res[0][3].c_str()));
    }

    q = "SELECT * FROM tblClient WHERE clientID = "+std::to_string(cNum)+";";
    res = dbCF->query(q.c_str());
    if(!(res.empty())){
        clientAcc->setClientID(atoi(res[0][0].c_str()));
        clientAcc->setName(res[0][1]);
        clientAcc->setSAID(res[0][2]);
        clientAcc->setContactNumber(res[0][3]);
        clientAcc->setAddress(res[0][4]);
    }
}

int ClientFunctionsForm::populateClientFields(int cNum){
    wxString clNum, cName, cSAID, cContact, cAddress;

    std::string q = "SELECT * FROM tblClient WHERE clientID = "+std::to_string(cNum)+";";
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
    return 1;
}
int ClientFunctionsForm::populateClientFields(std::string SAID){
    wxString clNum, cName, cSAID, cContact, cAddress;

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
    return 1;
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

    lblInterest->Hide();
    txfInterest->Hide();

    btnCCreate->Hide();
    btnCUpdate->Hide();
    btnCCancel->Hide();
    btnCSearch->Show(TRUE);

    btnCInv->Hide();
    btnCLoan->Hide();
    btnCAcc->Hide();
    pnlCAccount->Hide();

    txfCName->SetEditable(FALSE);
    txfCAddress->SetEditable(FALSE);
    txfCConNum->SetEditable(FALSE);

    txfCID->SetEditable(TRUE);
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
    vector<vector<string> > resulta = dbCF->query("SELECT * FROM tblClient;");

	int max = resulta.size();

	int clientNum = wxAtoi(txfCID->GetValue());
	string SAID = txfCSAID->GetValue().ToStdString();

	if(clientNum <= max && clientNum > 0){
        wxMessageBox("Acceptable");

        int state = populateClientFields(clientNum);

        if(state){
            btnCUpdate->Show(TRUE);
            btnCInv->Show(TRUE);
            btnCLoan->Show(TRUE);
            btnCAcc->Show(TRUE);

            txfCName->SetEditable(TRUE);
            txfCAddress->SetEditable(TRUE);
            txfCConNum->SetEditable(TRUE);

            btnCSearch->Hide();
            btnCCancel->Show(TRUE);
        }else{
            wxMessageBox("Client doesn't exit");
        }

	}else if(populateClientFields(SAID)){
        wxMessageBox("Acceptable");

        btnCUpdate->Show(TRUE);
        btnCInv->Show(TRUE);
        btnCLoan->Show(TRUE);
        btnCAcc->Show(TRUE);

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
    int cNum = wxAtoi(txfCID->GetValue());
	std::string cName = txfCName->GetValue().ToStdString(), cSAID = txfCSAID->GetValue().ToStdString(), cCon = txfCConNum->GetValue().ToStdString(), cAdd = txfCAddress->GetValue().ToStdString();

    std::string name = "clientName = '" + cName + "', ";
    std::string sID = "SAID = '" + cSAID + "', ";
    std::string clCon = "contact = '" + cCon + "', ";
    std::string clAdd = "address = '" + cAdd + "'";

    string q = "UPDATE tblClient SET "+ name + sID + clCon + clAdd + " WHERE clientID = " + to_string(cNum) +";";

	dbCF->query(q.c_str());

	wxMessageBox("Update successful!");
}

void ClientFunctionsForm::OnbtnCCreateClick(wxCommandEvent& event)
{
    int check = 1, type = -1;
    int cNumber = wxAtoi(txfCID->GetValue());

    std::string name = txfCName->GetValue().ToStdString();
    std::string ID = txfCSAID->GetValue().ToStdString();
    std::string con = txfCConNum->GetValue().ToStdString();
    std::string add = txfCAddress->GetValue().ToStdString();
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
        btnCInv->Show(TRUE);
        btnCLoan->Show(TRUE);
        btnCAcc->Show(TRUE);

        txfCName->SetEditable(TRUE);
        txfCAddress->SetEditable(TRUE);
        txfCConNum->SetEditable(TRUE);

        populateClientFields(cNumber);
    }else{
        wxMessageBox("Reg failed");
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
    Account *accForm = new Account(NULL);

    accForm->Show(TRUE);
   // accForm->curEmployee = this->currentLogged;
   // accForm->lblTextStore = lblDays->GetLabel();
    //accForm->setup();

    this->Close(TRUE);
}

void ClientFunctionsForm::OnbtnCInvClick(wxCommandEvent& event)
{
    Investment *invForm = new Investment(NULL);

    invForm->Show(TRUE);
   // accForm->curEmployee = this->currentLogged;
   // accForm->lblTextStore = lblDays->GetLabel();
    //accForm->setup();

    this->Close(TRUE);
}

void ClientFunctionsForm::OnbtnCLoanClick(wxCommandEvent& event)
{
    Loan *loanForm = new Loan(NULL);

    loanForm->Show(TRUE);
   // accForm->curEmployee = this->currentLogged;
   // accForm->lblTextStore = lblDays->GetLabel();
    //accForm->setup();

    this->Close(TRUE);
}
