#include "EmployeeFunctionsForm.h"
#include "SelectionMenu.h"
#include "Database.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(EmployeeFunctionsForm)
#include <wx/intl.h>
#include <wx/string.h>
//*)
//(*IdInit(EmployeeFunctionsForm)
const long EmployeeFunctionsForm::ID_GRID1 = wxNewId();
const long EmployeeFunctionsForm::ID_PANEL3 = wxNewId();
const long EmployeeFunctionsForm::ID_PANEL1 = wxNewId();
const long EmployeeFunctionsForm::ID_STATICTEXT1 = wxNewId();
const long EmployeeFunctionsForm::ID_TEXTCTRL1 = wxNewId();
const long EmployeeFunctionsForm::ID_BUTTON1 = wxNewId();
const long EmployeeFunctionsForm::ID_TEXTCTRL2 = wxNewId();
const long EmployeeFunctionsForm::ID_TEXTCTRL3 = wxNewId();
const long EmployeeFunctionsForm::ID_TEXTCTRL4 = wxNewId();
const long EmployeeFunctionsForm::ID_TEXTCTRL5 = wxNewId();
const long EmployeeFunctionsForm::ID_STATICTEXT2 = wxNewId();
const long EmployeeFunctionsForm::ID_STATICTEXT3 = wxNewId();
const long EmployeeFunctionsForm::ID_STATICTEXT4 = wxNewId();
const long EmployeeFunctionsForm::ID_STATICTEXT5 = wxNewId();
const long EmployeeFunctionsForm::ID_BUTTON2 = wxNewId();
const long EmployeeFunctionsForm::ID_STATICTEXT6 = wxNewId();
const long EmployeeFunctionsForm::ID_TEXTCTRL6 = wxNewId();
const long EmployeeFunctionsForm::ID_BUTTON3 = wxNewId();
const long EmployeeFunctionsForm::ID_BUTTON4 = wxNewId();
const long EmployeeFunctionsForm::ID_PANEL2 = wxNewId();
const long EmployeeFunctionsForm::ID_NOTEBOOK1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(EmployeeFunctionsForm,wxFrame)
	//(*EventTable(EmployeeFunctionsForm)
	//*)
END_EVENT_TABLE()

void DatabaseConnectEF();
Database *dbEF = NULL;

EmployeeFunctionsForm::EmployeeFunctionsForm(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(EmployeeFunctionsForm)
	wxBoxSizer* BoxSizer1;

	Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
	SetClientSize(wxSize(463,335));
	Notebook1 = new wxNotebook(this, ID_NOTEBOOK1, wxPoint(120,72), wxDefaultSize, 0, _T("ID_NOTEBOOK1"));
	pnlViewEm = new wxPanel(Notebook1, ID_PANEL1, wxPoint(262,206), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	Panel1 = new wxPanel(pnlViewEm, ID_PANEL3, wxDefaultPosition, wxSize(445,226), wxTAB_TRAVERSAL, _T("ID_PANEL3"));
	Grid1 = new wxGrid(Panel1, ID_GRID1, wxPoint(0,0), wxSize(448,136), 0, _T("ID_GRID1"));
	Grid1->CreateGrid(5,4);
	Grid1->EnableEditing(true);
	Grid1->EnableGridLines(true);
	Grid1->SetColLabelValue(0, _("Name       "));
	Grid1->SetColLabelValue(1, _("SAID    "));
	Grid1->SetColLabelValue(2, _("Salary"));
	Grid1->SetColLabelValue(3, _("Privilege"));
	Grid1->SetDefaultCellFont( Grid1->GetFont() );
	Grid1->SetDefaultCellTextColour( Grid1->GetForegroundColour() );
	BoxSizer1->Add(Panel1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	pnlViewEm->SetSizer(BoxSizer1);
	BoxSizer1->Fit(pnlViewEm);
	BoxSizer1->SetSizeHints(pnlViewEm);
	pnlUpdateEm = new wxPanel(Notebook1, ID_PANEL2, wxPoint(78,11), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL2"));
	lblUpEmNum = new wxStaticText(pnlUpdateEm, ID_STATICTEXT1, _("Employee number:"), wxPoint(32,16), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	txfUpEmNum = new wxTextCtrl(pnlUpdateEm, ID_TEXTCTRL1, wxEmptyString, wxPoint(160,16), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	btnUpSearch = new wxButton(pnlUpdateEm, ID_BUTTON1, _("Search"), wxPoint(352,16), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	txfUpEName = new wxTextCtrl(pnlUpdateEm, ID_TEXTCTRL2, wxEmptyString, wxPoint(160,64), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	txfUpESAID = new wxTextCtrl(pnlUpdateEm, ID_TEXTCTRL3, wxEmptyString, wxPoint(160,104), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	txfUpESal = new wxTextCtrl(pnlUpdateEm, ID_TEXTCTRL4, wxEmptyString, wxPoint(160,144), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
	txfUpEPriv = new wxTextCtrl(pnlUpdateEm, ID_TEXTCTRL5, wxEmptyString, wxPoint(160,184), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
	lblUpEName = new wxStaticText(pnlUpdateEm, ID_STATICTEXT2, _("Employee Name: "), wxPoint(32,64), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	lblUpESAID = new wxStaticText(pnlUpdateEm, ID_STATICTEXT3, _("Employee SAID:"), wxPoint(32,112), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	lblUpESal = new wxStaticText(pnlUpdateEm, ID_STATICTEXT4, _("Employee salary:"), wxPoint(32,152), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	lblUpEPriv = new wxStaticText(pnlUpdateEm, ID_STATICTEXT5, _("Employee privilege:"), wxPoint(32,192), wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	btnUpUpdate = new wxButton(pnlUpdateEm, ID_BUTTON2, _("Update"), wxPoint(344,200), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	lblUpEPass = new wxStaticText(pnlUpdateEm, ID_STATICTEXT6, _("Employee password:"), wxPoint(32,232), wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	txfUpEPass = new wxTextCtrl(pnlUpdateEm, ID_TEXTCTRL6, wxEmptyString, wxPoint(160,224), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL6"));
	btnUpExit = new wxButton(pnlUpdateEm, ID_BUTTON3, _("Exit"), wxPoint(344,264), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
	btnUpBack = new wxButton(pnlUpdateEm, ID_BUTTON4, _("Back"), wxPoint(344,232), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON4"));
	Notebook1->AddPage(pnlViewEm, _("View employees"), false);
	Notebook1->AddPage(pnlUpdateEm, _("Update employee"), false);

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EmployeeFunctionsForm::OnbtnUpSearchClick);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EmployeeFunctionsForm::OnbtnUpUpdateClick);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EmployeeFunctionsForm::OnbtnUpExitClick);
	Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EmployeeFunctionsForm::OnbtnUpBackClick);
	//*)
	SetMinSize(GetSize());
    SetMaxSize(GetSize());
    DatabaseConnectEF();
}

EmployeeFunctionsForm::~EmployeeFunctionsForm()
{
	//(*Destroy(EmployeeFunctionsForm)
	//*)
	dbEF->close();
	delete dbEF;
}

void DatabaseConnectEF(){
    dbEF = new Database("Database.sqlite");
}

void EmployeeFunctionsForm::populateUpdateFields(int EmNum){
    wxString upEmNum, upEmName, upEmID, upEmPass, upEmSal, upEmPriv;

    std::string q = "SELECT * FROM tblEmployee WHERE employeeID = "+std::to_string(EmNum)+";";
    vector<vector<string> > res = dbEF->query(q.c_str());

    if(!(res.empty())){
        upEmNum << res[0][0];
        upEmName << res[0][1];
        upEmID << res[0][2];
        upEmPass << res[0][3];
        upEmSal << res[0][4];
        upEmPriv << res[0][5];
    }

    txfUpEmNum->SetValue(upEmNum);
    txfUpEName->SetValue(upEmName);
    txfUpESAID->SetValue(upEmID);
    txfUpESal->SetValue(upEmSal);
    txfUpEPriv->SetValue(upEmPriv);
    txfUpEPass->SetValue(upEmPass);
}

void EmployeeFunctionsForm::setupCurEmployee(){
    wxString upEmNum, upEmName, upEmID, upEmPass, upEmSal, upEmPriv;

    upEmNum << curEmployee->getEmployeeNumber();
    upEmName << curEmployee->getName();
    upEmID << curEmployee->getID();
    upEmPass << curEmployee->getPassword();
    upEmSal << curEmployee->getSalary();
    upEmPriv << curEmployee->getPrivilege();

    txfUpEmNum->SetValue(upEmNum);
    txfUpEName->SetValue(upEmName);
    txfUpESAID->SetValue(upEmID);
    txfUpESal->SetValue(upEmSal);
    txfUpEPriv->SetValue(upEmPriv);
    txfUpEPass->SetValue(upEmPass);


    txfUpEPriv->SetEditable(FALSE);
    txfUpESal->SetEditable(FALSE);
    txfUpESAID->SetEditable(FALSE);

    if(curEmployee->getPrivilege() != 0){
        txfUpEmNum->SetEditable(FALSE);
        btnUpSearch->Hide();
    }else{
        txfUpEmNum->SetEditable(TRUE);
        btnUpSearch->Show(TRUE);
    }
}
void EmployeeFunctionsForm::OnbtnUpUpdateClick(wxCommandEvent& event)
{
    int upEmNum = wxAtoi(txfUpEmNum->GetValue()), upEmPriv = wxAtoi(txfUpEPriv->GetValue());
	std::string upEmName = txfUpEName->GetValue().ToStdString(), upEmID = txfUpESAID->GetValue().ToStdString(), upEmPass = txfUpEPass->GetValue().ToStdString();
	double upEmSal = wxAtof(txfUpESal->GetValue());

    std::string name = "employeeName = '" + upEmName + "', ";
    std::string sID = "SAID = '" + upEmID + "', ";
    std::string pwd = "password = '" + upEmPass + "', ";
    std::string sal = "salary = " + to_string(upEmSal) + ", ";
    std::string priv = "privilege = " + to_string(upEmPriv);

    string q = "UPDATE tblEmployee SET "+ name + sID + pwd + sal + priv + " WHERE employeeID = " + to_string(upEmNum) +";";

	dbEF->query(q.c_str());

	if(upEmNum == curEmployee->getEmployeeNumber()){
        this->curEmployee->setName(upEmName);
        this->curEmployee->setPassword(upEmPass);
        this->curEmployee->setSalary(upEmSal);
        this->curEmployee->setPrivilege(upEmPriv);
	}

	wxMessageBox("Update successful!");
}

void EmployeeFunctionsForm::OnbtnUpExitClick(wxCommandEvent& event)
{
    this->Close();
}

void EmployeeFunctionsForm::OnbtnUpSearchClick(wxCommandEvent& event)
{
    vector<vector<string> > resulta = dbEF->query("SELECT * FROM tblEmployee;");

	int max = resulta.size();

	int upEmNum = wxAtoi(txfUpEmNum->GetValue());

	if(upEmNum <= max && upEmNum > 0){
        wxMessageBox("Acceptable");
        populateUpdateFields(upEmNum);

        if(upEmNum != curEmployee->getEmployeeNumber()){
            txfUpEPass->Hide();
            lblUpEPass->Hide();

            if(curEmployee->getPrivilege() == 0){
                txfUpEPriv->SetEditable(TRUE);
                txfUpESal->SetEditable(TRUE);
            }else{
                txfUpEPriv->SetEditable(FALSE);
                txfUpESal->SetEditable(FALSE);
            }

        }else{
            txfUpEPass->Show(TRUE);
            lblUpEPass->Show(TRUE);
            txfUpEPriv->SetEditable(FALSE);
            txfUpESal->SetEditable(FALSE);
        }

	}else{
        wxMessageBox("Employee doesn't exit");
	}
}

void EmployeeFunctionsForm::OnbtnUpBackClick(wxCommandEvent& event)
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
