/***************************************************************
 * Name:      BankManagementSystemApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Craig, Nascha, Ashlen ()
 * Created:   2018-04-27
 * Copyright: Craig, Nascha, Ashlen ()
 * License:
 **************************************************************/

#include "BankManagementSystemApp.h"

//(*AppHeaders
#include "BankManagementSystemMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(BankManagementSystemApp);

bool BankManagementSystemApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	BankManagementSystemFrame* Frame = new BankManagementSystemFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
