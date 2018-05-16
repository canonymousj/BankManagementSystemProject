#include "EmployeeFunctionsForm.h"
#include "SelectionMenu.h"
#include "Database.h"
#include <wx/msgdlg.h>
#include <wx/valtext.h>
#include <wx/textctrl.h>

//(*InternalHeaders(EmployeeFunctionsForm)
#include <wx/bitmap.h>
#include <wx/font.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/settings.h>
#include <wx/string.h>
//*)
//(*IdInit(EmployeeFunctionsForm)
const long EmployeeFunctionsForm::ID_STATICBITMAP1 = wxNewId();
const long EmployeeFunctionsForm::ID_GRID1 = wxNewId();
const long EmployeeFunctionsForm::ID_BUTTON5 = wxNewId();
const long EmployeeFunctionsForm::ID_BUTTON6 = wxNewId();
const long EmployeeFunctionsForm::ID_BUTTON7 = wxNewId();
const long EmployeeFunctionsForm::ID_STATICTEXT7 = wxNewId();
const long EmployeeFunctionsForm::ID_PANEL1 = wxNewId();
const long EmployeeFunctionsForm::ID_STATICBITMAP2 = wxNewId();
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
const long EmployeeFunctionsForm::ID_STATICTEXT8 = wxNewId();
const long EmployeeFunctionsForm::ID_CHOICE1 = wxNewId();
const long EmployeeFunctionsForm::ID_CHECKBOX1 = wxNewId();
const long EmployeeFunctionsForm::ID_PANEL2 = wxNewId();
const long EmployeeFunctionsForm::ID_NOTEBOOK1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(EmployeeFunctionsForm,wxFrame)
	//(*EventTable(EmployeeFunctionsForm)
	//*)
END_EVENT_TABLE()

void DatabaseConnectEF();
Database *dbEF = NULL;
bool checkEmDate(int d, int m, int y);
bool checkEmID(string SAID);

EmployeeFunctionsForm::EmployeeFunctionsForm(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(EmployeeFunctionsForm)
	Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
	SetClientSize(wxSize(473,522));
	Notebook1 = new wxNotebook(this, ID_NOTEBOOK1, wxPoint(120,72), wxSize(496,522), 0, _T("ID_NOTEBOOK1"));
	pnlViewEm = new wxPanel(Notebook1, ID_PANEL1, wxPoint(262,206), wxSize(465,439), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	pnlViewEm->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_HIGHLIGHTTEXT));
	StaticBitmap1 = new wxStaticBitmap(pnlViewEm, ID_STATICBITMAP1, wxBitmap(wxImage(_T("white and gold christmas wallpaper ; Gold-Christmas-Lights-Background-06.jpg")).Rescale(wxSize(464,392).GetWidth(),wxSize(464,392).GetHeight())), wxPoint(0,0), wxSize(464,392), 0, _T("ID_STATICBITMAP1"));
	Grid1 = new wxGrid(pnlViewEm, ID_GRID1, wxPoint(16,80), wxSize(432,256), 0, _T("ID_GRID1"));
	Grid1->CreateGrid(3,4);
	Grid1->EnableEditing(false);
	Grid1->EnableGridLines(true);
	Grid1->SetRowLabelSize(30);
	Grid1->SetDefaultColSize(98, true);
	Grid1->SetColLabelValue(0, _("Name"));
	Grid1->SetColLabelValue(1, _("SAID"));
	Grid1->SetColLabelValue(2, _("Salary"));
	Grid1->SetColLabelValue(3, _("Privilege"));
	Grid1->SetDefaultCellFont( Grid1->GetFont() );
	Grid1->SetDefaultCellTextColour( Grid1->GetForegroundColour() );
	btnGridRefresh = new wxButton(pnlViewEm, ID_BUTTON5, _("REFRESH"), wxPoint(200,400), wxSize(75,31), 0, wxDefaultValidator, _T("ID_BUTTON5"));
	btnGridRefresh->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNHIGHLIGHT));
	btnGridRefresh->SetBackgroundColour(wxColour(210,175,102));
	wxFont btnGridRefreshFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	btnGridRefresh->SetFont(btnGridRefreshFont);
	btnViewTblBack = new wxButton(pnlViewEm, ID_BUTTON6, _("BACK"), wxPoint(24,400), wxSize(75,31), 0, wxDefaultValidator, _T("ID_BUTTON6"));
	btnViewTblBack->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNHIGHLIGHT));
	btnViewTblBack->SetBackgroundColour(wxColour(210,175,102));
	wxFont btnViewTblBackFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	btnViewTblBack->SetFont(btnViewTblBackFont);
	btnViewTblExit = new wxButton(pnlViewEm, ID_BUTTON7, _("EXIT"), wxPoint(368,400), wxSize(75,31), 0, wxDefaultValidator, _T("ID_BUTTON7"));
	btnViewTblExit->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNHIGHLIGHT));
	btnViewTblExit->SetBackgroundColour(wxColour(210,175,102));
	wxFont btnViewTblExitFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	btnViewTblExit->SetFont(btnViewTblExitFont);
	StaticText1 = new wxStaticText(pnlViewEm, ID_STATICTEXT7, _("EMPLOYEE DATABASE"), wxPoint(48,32), wxDefaultSize, 0, _T("ID_STATICTEXT7"));
	StaticText1->SetForegroundColour(wxColour(210,175,102));
	wxFont StaticText1Font(22,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Castellar"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	pnlUpdateEm = new wxPanel(Notebook1, ID_PANEL2, wxPoint(78,11), wxSize(481,496), wxTAB_TRAVERSAL, _T("ID_PANEL2"));
	pnlUpdateEm->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BACKGROUND));
	pnlUpdateEm->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	StaticBitmap2 = new wxStaticBitmap(pnlUpdateEm, ID_STATICBITMAP2, wxBitmap(wxImage(_T("white and gold christmas wallpaper ; Gold-Christmas-Lights-Background-06.jpg")).Rescale(wxSize(464,344).GetWidth(),wxSize(464,344).GetHeight())), wxPoint(0,0), wxSize(464,344), 0, _T("ID_STATICBITMAP2"));
	StaticBitmap2->Disable();
	lblUpEmNum = new wxStaticText(pnlUpdateEm, ID_STATICTEXT1, _("EMPLOYEE ID:"), wxPoint(104,104), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	lblUpEmNum->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNHIGHLIGHT));
	wxFont lblUpEmNumFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	lblUpEmNum->SetFont(lblUpEmNumFont);
	txfUpEmNum = new wxTextCtrl(pnlUpdateEm, ID_TEXTCTRL1, wxEmptyString, wxPoint(240,104), wxSize(124,21), 0, wxTextValidator(wxFILTER_DIGITS, NULL), _T("ID_TEXTCTRL1"));
	btnUpSearch = new wxButton(pnlUpdateEm, ID_BUTTON1, _("SEARCH"), wxPoint(192,392), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	btnUpSearch->SetForegroundColour(wxColour(210,175,102));
	btnUpSearch->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNHIGHLIGHT));
	wxFont btnUpSearchFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	btnUpSearch->SetFont(btnUpSearchFont);
	txfUpEName = new wxTextCtrl(pnlUpdateEm, ID_TEXTCTRL2, wxEmptyString, wxPoint(240,144), wxSize(124,21), 0, wxTextValidator(wxFILTER_ALPHA, NULL), _T("ID_TEXTCTRL2"));
	txfUpESAID = new wxTextCtrl(pnlUpdateEm, ID_TEXTCTRL3, wxEmptyString, wxPoint(240,184), wxSize(124,21), 0, wxTextValidator(wxFILTER_DIGITS, NULL), _T("ID_TEXTCTRL3"));
	txfUpESal = new wxTextCtrl(pnlUpdateEm, ID_TEXTCTRL4, wxEmptyString, wxPoint(240,224), wxSize(124,21), 0, wxTextValidator(wxFILTER_NUMERIC, NULL), _T("ID_TEXTCTRL4"));
	txfUpEPriv = new wxTextCtrl(pnlUpdateEm, ID_TEXTCTRL5, wxEmptyString, wxPoint(240,264), wxSize(124,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
	lblUpEName = new wxStaticText(pnlUpdateEm, ID_STATICTEXT2, _("NAME:"), wxPoint(104,144), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	lblUpEName->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNHIGHLIGHT));
	wxFont lblUpENameFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	lblUpEName->SetFont(lblUpENameFont);
	lblUpESAID = new wxStaticText(pnlUpdateEm, ID_STATICTEXT3, _("SA ID NUMBER:"), wxPoint(104,184), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	lblUpESAID->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNHIGHLIGHT));
	wxFont lblUpESAIDFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	lblUpESAID->SetFont(lblUpESAIDFont);
	lblUpESal = new wxStaticText(pnlUpdateEm, ID_STATICTEXT4, _("SALARY:"), wxPoint(104,224), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	lblUpESal->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNHIGHLIGHT));
	wxFont lblUpESalFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	lblUpESal->SetFont(lblUpESalFont);
	lblUpEPriv = new wxStaticText(pnlUpdateEm, ID_STATICTEXT5, _("PRIVILEGE:"), wxPoint(104,264), wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	lblUpEPriv->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNHIGHLIGHT));
	wxFont lblUpEPrivFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	lblUpEPriv->SetFont(lblUpEPrivFont);
	btnUpUpdate = new wxButton(pnlUpdateEm, ID_BUTTON2, _("UPDATE"), wxPoint(192,456), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	btnUpUpdate->SetForegroundColour(wxColour(210,175,102));
	btnUpUpdate->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNHIGHLIGHT));
	wxFont btnUpUpdateFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	btnUpUpdate->SetFont(btnUpUpdateFont);
	lblUpEPass = new wxStaticText(pnlUpdateEm, ID_STATICTEXT6, _("PASSWORD:"), wxPoint(104,304), wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	lblUpEPass->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNHIGHLIGHT));
	wxFont lblUpEPassFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	lblUpEPass->SetFont(lblUpEPassFont);
	txfUpEPass = new wxTextCtrl(pnlUpdateEm, ID_TEXTCTRL6, wxEmptyString, wxPoint(240,304), wxSize(124,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL6"));
	btnUpExit = new wxButton(pnlUpdateEm, ID_BUTTON3, _("EXIT"), wxPoint(352,416), wxSize(75,32), 0, wxDefaultValidator, _T("ID_BUTTON3"));
	btnUpExit->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNHIGHLIGHT));
	btnUpExit->SetBackgroundColour(wxColour(210,175,102));
	wxFont btnUpExitFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	btnUpExit->SetFont(btnUpExitFont);
	btnUpBack = new wxButton(pnlUpdateEm, ID_BUTTON4, _("BACK"), wxPoint(40,416), wxSize(75,32), 0, wxDefaultValidator, _T("ID_BUTTON4"));
	btnUpBack->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNHIGHLIGHT));
	btnUpBack->SetBackgroundColour(wxColour(210,175,102));
	wxFont btnUpBackFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	btnUpBack->SetFont(btnUpBackFont);
	StaticText2 = new wxStaticText(pnlUpdateEm, ID_STATICTEXT8, _("EMPLOYEE INFORMATION"), wxPoint(16,32), wxDefaultSize, 0, _T("ID_STATICTEXT8"));
	StaticText2->SetForegroundColour(wxColour(210,175,102));
	wxFont StaticText2Font(22,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Castellar"),wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	Choice1 = new wxChoice(pnlUpdateEm, ID_CHOICE1, wxPoint(240,344), wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE1"));
	Choice1->SetSelection( Choice1->Append(_("Manager")) );
	Choice1->Append(_("Employee"));
	Choice1->SetBackgroundColour(wxColour(255,241,234));
	CheckBox1 = new wxCheckBox(pnlUpdateEm, ID_CHECKBOX1, _("Label"), wxPoint(376,312), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX1"));
	CheckBox1->SetValue(false);
	Notebook1->AddPage(pnlViewEm, _("View employees"), false);
	Notebook1->AddPage(pnlUpdateEm, _("Update employee"), false);

	Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EmployeeFunctionsForm::OnbtnGridRefreshClick);
	Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EmployeeFunctionsForm::OnButton1Click);
	Connect(ID_BUTTON7,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EmployeeFunctionsForm::OnbtnViewTblExitClick);
	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EmployeeFunctionsForm::OnbtnUpSearchClick);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EmployeeFunctionsForm::OnbtnUpUpdateClick);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EmployeeFunctionsForm::OnbtnUpExitClick);
	Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EmployeeFunctionsForm::OnbtnUpBackClick);
	Connect(ID_CHOICE1,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&EmployeeFunctionsForm::OnChoice1Select);
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
    Choice1->SetSelection(wxAtoi(upEmPriv));
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

void EmployeeFunctionsForm::updateTable(){
    int rows = Grid1->GetNumberRows();
    int emPriv = 1;

    emPriv = curEmployee->getPrivilege();

    if(rows>0){
        Grid1->DeleteRows(0, rows, true);
    }

    vector<vector<string> > resulta = dbEF->query("SELECT * FROM tblEmployee;");

    Grid1->AppendRows(resulta.size(), true);

    int rowPos = 0;
    for (vector<vector<string> >::iterator it = resulta.begin(); it < resulta.end(); ++it)
	{
		vector<string> row = *it;

		Grid1->SetCellValue(rowPos, 0, row.at(1));
		Grid1->SetCellValue(rowPos, 1, row.at(2));
		if(!emPriv){
            Grid1->SetCellValue(rowPos, 2, row.at(4));
		}else{
            Grid1->SetCellValue(rowPos, 2, "-");
		}
		Grid1->SetCellValue(rowPos, 3, row.at(5));

		rowPos++;
	}
}

void EmployeeFunctionsForm::OnbtnUpUpdateClick(wxCommandEvent& event)
{
    int upEmNum = wxAtoi(txfUpEmNum->GetValue()), upEmPriv = wxAtoi(txfUpEPriv->GetValue());
	std::string upEmName = txfUpEName->GetValue().ToStdString(), upEmID = txfUpESAID->GetValue().ToStdString(), upEmPass = txfUpEPass->GetValue().ToStdString();
	double upEmSal = wxAtof(txfUpESal->GetValue());

    upEmPriv = Choice1->GetCurrentSelection();


	if(txfUpEmNum->GetValue().IsEmpty() || txfUpEPriv->GetValue().IsEmpty()  || txfUpEName->GetValue().IsEmpty() || txfUpESAID->GetValue().IsEmpty() || txfUpESal->GetValue().IsEmpty() ||  txfUpEPass->GetValue().IsEmpty()){
        wxMessageBox("Emplty fields");
        return;
    }

    if(!checkEmID(upEmID)){
        wxMessageBox("Invalid ID number");
        return;
    }

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

void EmployeeFunctionsForm::OnbtnGridRefreshClick(wxCommandEvent& event)
{
    updateTable();
}

void EmployeeFunctionsForm::OnButton1Click(wxCommandEvent& event)
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

void EmployeeFunctionsForm::OnbtnViewTblExitClick(wxCommandEvent& event)
{
    this->Close();
}

bool checkEmDate(int d, int m, int y){
    try{
        if (! (1918<= y )  )//comment these 2 lines out if it bothers you
            return false;
        if (! (1<= m && m<=12) )
            return false;
        if (! (1<= d && d<=31) )
            return false;
        if ( (d==31) && (m==2 || m==4 || m==6 || m==9 || m==11) )
            return false;
        if ( (d==30) && (m==2) )
            return false;
        if ( (m==2) && (d==29) && (y%4!=0) )
            return false;
        if ( (m==2) && (d==29) && (y%400==0) )
            return true;
        if ( (m==2) && (d==29) && (y%100==0) )
            return false;
        if ( (m==2) && (d==29) && (y%4==0)  )
            return true;

        return true;
    }catch(...){
        return false;
    }

}

bool checkEmID(string SAID){
    try{
        if(SAID.length() != 13){
            return false;
        }
        int d = atoi((SAID.substr(4, 2)).c_str()), m = atoi((SAID.substr(2, 2)).c_str()), y = atoi((SAID.substr(0,2)).c_str());

        if(y<=18&&y>=0){
            y+=2000;
        }else{
            y+=1900;
        }

        if(!checkEmDate(d, m, y)){
                wxMessageBox("Invalid ID date");
            return false;
        }

        return true;
    }catch(...){
        return false;
    }

}

void EmployeeFunctionsForm::OnCheckBox1Click(wxCommandEvent& event)
{
    if(CheckBox1->GetValue()){
        wxMessageBox("Show");
        txfUpEPass->SetWindowStyle(wxTE_PASSWORD);
    }else{
        txfUpEPass->SetWindowStyle(wxTE_RICH);
    }
}

void EmployeeFunctionsForm::OnChoice1Select(wxCommandEvent& event)
{
}
