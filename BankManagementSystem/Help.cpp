#include "Help.h"
#include "SelectionMenu.h"

//(*InternalHeaders(Help)
#include <wx/bitmap.h>
#include <wx/font.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/settings.h>
#include <wx/string.h>
//*)

//(*IdInit(Help)
const long Help::ID_STATICBITMAP1 = wxNewId();
const long Help::ID_STATICTEXT1 = wxNewId();
const long Help::ID_BUTTON1 = wxNewId();
const long Help::ID_BUTTON2 = wxNewId();
const long Help::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Help,wxFrame)
	//(*EventTable(Help)
	//*)
END_EVENT_TABLE()

Help::Help(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Help)
	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
	SetClientSize(wxSize(467,464));
	Move(wxDefaultPosition);
	Panel1 = new wxPanel(this, ID_PANEL1, wxPoint(8,24), wxSize(467,464), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	Panel1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNHIGHLIGHT));
	StaticBitmap1 = new wxStaticBitmap(Panel1, ID_STATICBITMAP1, wxBitmap(wxImage(_T("HELPFILE.png")).Rescale(wxSize(384,336).GetWidth(),wxSize(384,336).GetHeight())), wxPoint(40,56), wxSize(384,336), wxSIMPLE_BORDER, _T("ID_STATICBITMAP1"));
	StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("HELP MANUAL"), wxPoint(96,16), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	StaticText1->SetForegroundColour(wxColour(198,152,57));
	wxFont StaticText1Font(24,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Castellar"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	Button1 = new wxButton(Panel1, ID_BUTTON1, _("EXIT"), wxPoint(352,408), wxSize(75,32), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	Button1->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNHIGHLIGHT));
	Button1->SetBackgroundColour(wxColour(210,175,102));
	wxFont Button1Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	Button1->SetFont(Button1Font);
	Button2 = new wxButton(Panel1, ID_BUTTON2, _("BACK"), wxPoint(40,408), wxSize(75,32), 0, wxDefaultValidator, _T("ID_BUTTON2"));
	Button2->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNHIGHLIGHT));
	Button2->SetBackgroundColour(wxColour(210,175,102));
	wxFont Button2Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	Button2->SetFont(Button2Font);

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Help::OnButton1Click);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Help::OnButton2Click);
	Panel1->Connect(wxEVT_PAINT,(wxObjectEventFunction)&Help::OnPanel1Paint,0,this);
	//*)
	SetMinSize(GetSize());
    SetMaxSize(GetSize());
}

Help::~Help()
{
	//(*Destroy(Help)
	//*)
}


void Help::OnButton1Click(wxCommandEvent& event)
{
    this->Close();
}

void Help::OnButton2Click(wxCommandEvent& event)
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

void Help::OnPanel1Paint(wxPaintEvent& event)
{
}
