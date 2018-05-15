#include "ClientFunctionsForm.h"
#include "SelectionMenu.h"
#include "Account.h"
#include "Investment.h"
#include "Loan.h"
#include "ClientalManagement.h"
#include <wx/msgdlg.h>
#include "Database.h"
#include <wx/textdlg.h>
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
const long ClientFunctionsForm::ID_BUTTON9 = wxNewId();
const long ClientFunctionsForm::ID_PANEL1 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT9 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT10 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT8 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT11 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT12 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT13 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT14 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT15 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT18 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT19 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT21 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT22 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT23 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT24 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT16 = wxNewId();
const long ClientFunctionsForm::ID_STATICTEXT17 = wxNewId();
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
const long ClientFunctionsForm::ID_PANEL4 = wxNewId();
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
	Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
	SetClientSize(wxSize(455,425));
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
	btnCCancel = new wxButton(Panel1, ID_BUTTON9, _("Cancel"), wxPoint(184,352), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON9"));
	Panel2 = new wxPanel(Notebook1, ID_PANEL3, wxPoint(8,10), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL3"));
	StaticText2 = new wxStaticText(Panel2, ID_STATICTEXT9, _("Client name: "), wxPoint(232,48), wxDefaultSize, 0, _T("ID_STATICTEXT9"));
	StaticText3 = new wxStaticText(Panel2, ID_STATICTEXT10, _("Client number:"), wxPoint(24,48), wxDefaultSize, 0, _T("ID_STATICTEXT10"));
	StaticText1 = new wxStaticText(Panel2, ID_STATICTEXT8, _("Account number:"), wxPoint(24,96), wxDefaultSize, 0, _T("ID_STATICTEXT8"));
	StaticText4 = new wxStaticText(Panel2, ID_STATICTEXT11, _("Amount:"), wxPoint(232,96), wxDefaultSize, 0, _T("ID_STATICTEXT11"));
	StaticText5 = new wxStaticText(Panel2, ID_STATICTEXT12, _("Number of loans:"), wxPoint(24,168), wxDefaultSize, 0, _T("ID_STATICTEXT12"));
	StaticText6 = new wxStaticText(Panel2, ID_STATICTEXT13, _("Total amount:"), wxPoint(24,192), wxDefaultSize, 0, _T("ID_STATICTEXT13"));
	StaticText7 = new wxStaticText(Panel2, ID_STATICTEXT14, _("Next repayment amount:"), wxPoint(24,216), wxDefaultSize, 0, _T("ID_STATICTEXT14"));
	StaticText8 = new wxStaticText(Panel2, ID_STATICTEXT15, _("Next repayment date:"), wxPoint(240,216), wxDefaultSize, 0, _T("ID_STATICTEXT15"));
	StaticText11 = new wxStaticText(Panel2, ID_STATICTEXT18, _("Total assets:"), wxPoint(24,312), wxDefaultSize, 0, _T("ID_STATICTEXT18"));
	StaticText12 = new wxStaticText(Panel2, ID_STATICTEXT19, _("Total liability:"), wxPoint(248,312), wxDefaultSize, 0, _T("ID_STATICTEXT19"));
	lblClientID = new wxStaticText(Panel2, ID_STATICTEXT21, wxEmptyString, wxPoint(112,48), wxSize(32,13), 0, _T("ID_STATICTEXT21"));
	lblClientName = new wxStaticText(Panel2, ID_STATICTEXT22, wxEmptyString, wxPoint(304,48), wxSize(24,13), 0, _T("ID_STATICTEXT22"));
	lblAccID = new wxStaticText(Panel2, ID_STATICTEXT23, wxEmptyString, wxPoint(120,96), wxSize(24,13), 0, _T("ID_STATICTEXT23"));
	lblAccBal = new wxStaticText(Panel2, ID_STATICTEXT24, wxEmptyString, wxPoint(288,96), wxSize(32,13), 0, _T("ID_STATICTEXT24"));
	lblIntEarnedText = new wxStaticText(Panel2, ID_STATICTEXT16, _("Interest earned per month:"), wxPoint(24,128), wxDefaultSize, 0, _T("ID_STATICTEXT16"));
	lblInterestEarned = new wxStaticText(Panel2, ID_STATICTEXT17, wxEmptyString, wxPoint(184,128), wxSize(56,13), 0, _T("ID_STATICTEXT17"));
	Panel3 = new wxPanel(Notebook1, ID_PANEL4, wxPoint(186,9), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL4"));
	StaticText9 = new wxStaticText(Panel3, ID_STATICTEXT25, _("Account ID:"), wxPoint(24,64), wxDefaultSize, 0, _T("ID_STATICTEXT25"));
	StaticText10 = new wxStaticText(Panel3, ID_STATICTEXT26, _("Account balance:"), wxPoint(24,104), wxDefaultSize, 0, _T("ID_STATICTEXT26"));
	txfAccID = new wxTextCtrl(Panel3, ID_TEXTCTRL8, wxEmptyString, wxPoint(136,64), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL8"));
	txfAccBal = new wxTextCtrl(Panel3, ID_TEXTCTRL9, wxEmptyString, wxPoint(136,104), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL9"));
	lblAccType = new wxStaticText(Panel3, ID_STATICTEXT27, _("Account type:"), wxPoint(24,152), wxDefaultSize, 0, _T("ID_STATICTEXT27"));
	lblAccInt = new wxStaticText(Panel3, ID_STATICTEXT29, _("Account interest:"), wxPoint(24,200), wxDefaultSize, 0, _T("ID_STATICTEXT29"));
	txfAccInt = new wxTextCtrl(Panel3, ID_TEXTCTRL11, wxEmptyString, wxPoint(136,200), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL11"));
	btnAccWithdraw = new wxButton(Panel3, ID_BUTTON6, _("Withdraw"), wxPoint(88,272), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON6"));
	btnAccDeposit = new wxButton(Panel3, ID_BUTTON7, _("Deposit"), wxPoint(248,272), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON7"));
	btnAccBack = new wxButton(Panel3, ID_BUTTON10, _("Back"), wxPoint(360,336), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON10"));
	btnAccExit = new wxButton(Panel3, ID_BUTTON11, _("Exit"), wxPoint(360,360), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON11"));
	btnAccUpdate = new wxButton(Panel3, ID_BUTTON12, _("Update"), wxPoint(16,360), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON12"));
	lblPercent = new wxStaticText(Panel3, ID_STATICTEXT30, _("%"), wxPoint(248,200), wxSize(26,21), 0, _T("ID_STATICTEXT30"));
	cmbAccType = new wxChoice(Panel3, ID_CHOICE1, wxPoint(136,152), wxSize(104,21), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE1"));
	cmbAccType->SetSelection( cmbAccType->Append(_("Savings")) );
	cmbAccType->Append(_("Cheque"));
	Notebook1->AddPage(Panel1, _("Client Functions"), false);
	Notebook1->AddPage(Panel2, _("Client Summary"), false);
	Notebook1->AddPage(Panel3, _("Client Account"), false);

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnbtnCCreateClick);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnbtnCBackClick);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnbtnCExitClick);
	Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnbtnCSearchClick);
	Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnbtnCNewClick);
	Connect(ID_RADIOBUTTON2,wxEVT_COMMAND_RADIOBUTTON_SELECTED,(wxObjectEventFunction)&ClientFunctionsForm::OnRadioButton2Select);
	Connect(ID_RADIOBUTTON1,wxEVT_COMMAND_RADIOBUTTON_SELECTED,(wxObjectEventFunction)&ClientFunctionsForm::OnRadioButton1Select);
	Connect(ID_BUTTON8,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnbtnCUpdateClick);
	Connect(ID_BUTTON9,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnbtnCCancelClick);
	Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnbtnAccWithdrawClick);
	Connect(ID_BUTTON7,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnbtnAccDepositClick);
	Connect(ID_BUTTON10,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnbtnAccBackClick);
	Connect(ID_BUTTON11,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnbtnAccExitClick);
	Connect(ID_BUTTON12,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ClientFunctionsForm::OnbtnAccUpdateClick);
	Connect(ID_CHOICE1,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&ClientFunctionsForm::OncmbAccTypeSelect);
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
    populateClientSummary(accObj);
}

void ClientFunctionsForm::populateClientSummary(account &accObj){   //populate fields in client summary tab
    wxString clID, clName, AccID, intEarned;    //temporary conversion variables

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

    lblAccID->SetLabel(AccID);
    txfAccID->SetValue(AccID);
    lblAccBal->SetLabel("R "+wxString::Format("%.2f", accObj.getBalance()));
    txfAccBal->SetValue(wxString::Format("%.2f", accObj.getBalance()));

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
