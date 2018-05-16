#include "Account.h"
#include <string>

//(*InternalHeaders(Account)
#include <wx/bitmap.h>
#include <wx/font.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/settings.h>
#include <wx/string.h>
//*)

//(*IdInit(Account)
const long Account::ID_STATICBITMAP1 = wxNewId();
const long Account::ID_GRID1 = wxNewId();
const long Account::ID_BUTTON1 = wxNewId();
const long Account::ID_BUTTON2 = wxNewId();
const long Account::ID_STATICTEXT1 = wxNewId();
const long Account::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Account,wxFrame)
	//(*EventTable(Account)
	//*)
END_EVENT_TABLE()

Account::Account(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Account)
	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
	SetClientSize(wxSize(682,346));
	Move(wxDefaultPosition);
	Panel1 = new wxPanel(this, ID_PANEL1, wxPoint(128,104), wxSize(640,278), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	Panel1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNHIGHLIGHT));
	StaticBitmap1 = new wxStaticBitmap(Panel1, ID_STATICBITMAP1, wxBitmap(wxImage(_T("elegant-white-and-gold-background-6.jpg")).Rescale(wxSize(688,280).GetWidth(),wxSize(688,280).GetHeight())), wxPoint(0,0), wxSize(688,280), 0, _T("ID_STATICBITMAP1"));
	Grid1 = new wxGrid(Panel1, ID_GRID1, wxPoint(24,80), wxSize(624,176), 0, _T("ID_GRID1"));
	Grid1->CreateGrid(3,5);
	Grid1->EnableEditing(false);
	Grid1->EnableGridLines(true);
	Grid1->SetDefaultColSize(108, true);
	Grid1->SetColLabelValue(0, _("Loan ID"));
	Grid1->SetColLabelValue(1, _("Loan Amount"));
	Grid1->SetColLabelValue(2, _("Date of Loan"));
	Grid1->SetColLabelValue(3, _("Repayment Period"));
	Grid1->SetColLabelValue(4, _("Interest"));
	Grid1->SetDefaultCellFont( Grid1->GetFont() );
	Grid1->SetDefaultCellTextColour( Grid1->GetForegroundColour() );
	btnRefresh = new wxButton(Panel1, ID_BUTTON1, _("REFRESH"), wxPoint(32,296), wxSize(75,32), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	btnRefresh->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNHIGHLIGHT));
	btnRefresh->SetBackgroundColour(wxColour(210,175,102));
	wxFont btnRefreshFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	btnRefresh->SetFont(btnRefreshFont);
	btnExit = new wxButton(Panel1, ID_BUTTON2, _("EXIT"), wxPoint(576,296), wxSize(75,32), 0, wxDefaultValidator, _T("ID_BUTTON2"));
	btnExit->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNHIGHLIGHT));
	btnExit->SetBackgroundColour(wxColour(210,175,102));
	wxFont btnExitFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	btnExit->SetFont(btnExitFont);
	StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("LOANS TABLE"), wxPoint(208,24), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	StaticText1->SetForegroundColour(wxColour(210,175,102));
	wxFont StaticText1Font(26,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Castellar"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);

	Connect(ID_GRID1,wxEVT_GRID_CELL_LEFT_CLICK,(wxObjectEventFunction)&Account::OnGrid1CellLeftClick);
	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Account::OnbtnRefreshClick);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Account::OnButton2Click);
	//*)
	SetMinSize(GetSize());
    SetMaxSize(GetSize());
}

Account::~Account()
{
	//(*Destroy(Account)
	//*)
}


void Account::OnGrid1CellLeftClick(wxGridEvent& event)
{
}

void Account::updateTable(){
    int rows = Grid1->GetNumberRows();

    if(rows>0){
        Grid1->DeleteRows(0, rows, true);
    }

    Grid1->AppendRows(loanObj.size(), true);
    for(unsigned int i = 0; i<loanObj.size(); i++){
        if(!(loanObj.empty())&&(i<loanObj.size())){
            Grid1->SetCellValue(i, 0, std::to_string(loanObj[i].getLoanID()));
            Grid1->SetCellValue(i, 1, wxString::Format("%.2f", loanObj[i].getAmount()));
            Grid1->SetCellValue(i, 2, loanObj[i].getDateOfLoan());
            Grid1->SetCellValue(i, 3, std::to_string(loanObj[i].getRepayPeriod()));
            Grid1->SetCellValue(i, 4, wxString::Format("%.2f", loanObj[i].getInterest()));
        }
    }


}

void Account::OnButton2Click(wxCommandEvent& event)
{
    this->Close(TRUE);
}

void Account::OnbtnRefreshClick(wxCommandEvent& event)
{
    updateTable();
}

void Account::OnClose(wxCloseEvent& event)
{
}
