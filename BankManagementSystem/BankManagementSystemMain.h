/***************************************************************
 * Name:      BankManagementSystemMain.h
 * Purpose:   Defines Application Frame
 * Author:    Craig, Nascha, Ashlen ()
 * Created:   2018-04-27
 * Copyright: Craig, Nascha, Ashlen ()
 * License:
 **************************************************************/

#ifndef BANKMANAGEMENTSYSTEMMAIN_H
#define BANKMANAGEMENTSYSTEMMAIN_H

//(*Headers(BankManagementSystemFrame)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/panel.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class BankManagementSystemFrame: public wxFrame
{
    public:

        BankManagementSystemFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~BankManagementSystemFrame();

    private:

        //(*Handlers(BankManagementSystemFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnbtnExitClick(wxCommandEvent& event);
        void OnTextCtrl1Text(wxCommandEvent& event);
        void OnbtnLoginClick(wxCommandEvent& event);
        void OnbtnRegClick(wxCommandEvent& event);
        //*)

        //(*Identifiers(BankManagementSystemFrame)
        static const long ID_STATICTEXT3;
        static const long ID_TEXTCTRL1;
        static const long ID_STATICTEXT1;
        static const long ID_TEXTCTRL2;
        static const long ID_STATICTEXT2;
        static const long ID_BUTTON1;
        static const long ID_BUTTON3;
        static const long ID_BUTTON2;
        static const long ID_PANEL1;
        //*)

        //(*Declarations(BankManagementSystemFrame)
        wxButton* btnExit;
        wxButton* btnLogin;
        wxButton* btnReg;
        wxPanel* Panel1;
        wxStaticText* lblEmID;
        wxStaticText* lblLogin;
        wxStaticText* lblPass;
        wxTextCtrl* txfPass;
        wxTextCtrl* txfUName;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // BANKMANAGEMENTSYSTEMMAIN_H
