#include "EmployeeFunctionsForm.h"
#include "Database.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(EmployeeFunctionsForm)
#include <wx/intl.h>
#include <wx/string.h>
//*)
//(*IdInit(EmployeeFunctionsForm)
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
	btnUpUpdate = new wxButton(pnlUpdateEm, ID_BUTTON2, _("Update"), wxPoint(344,232), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	lblUpEPass = new wxStaticText(pnlUpdateEm, ID_STATICTEXT6, _("Employee password:"), wxPoint(32,232), wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	txfUpEPass = new wxTextCtrl(pnlUpdateEm, ID_TEXTCTRL6, wxEmptyString, wxPoint(160,224), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL6"));
	btnUpExit = new wxButton(pnlUpdateEm, ID_BUTTON3, _("Exit"), wxPoint(344,264), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
	Notebook1->AddPage(pnlViewEm, _("View employees"), false);
	Notebook1->AddPage(pnlUpdateEm, _("Update employee"), false);

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EmployeeFunctionsForm::OnbtnUpSearchClick);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EmployeeFunctionsForm::OnbtnUpUpdateClick);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EmployeeFunctionsForm::OnbtnUpExitClick);
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
