/////////////////////////////////////////////////////////////////////////////
// Name:        app.cpp
// Purpose:     
// Author:      Philippe Rzetelski
// Modified by: 
// Created:     08/02/2021 20:41:47
// RCS-ID:      
// Copyright:   
// Licence:     
/////////////////////////////////////////////////////////////////////////////

// For compilers that support precompilation, includes "wx/wx.h".
#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif

////@begin includes
////@end includes

#include "app.h"

////@begin XPM images

////@end XPM images


/*
 * Application instance implementation
 */

////@begin implement app
IMPLEMENT_APP( App )
////@end implement app


/*
 * App type definition
 */

IMPLEMENT_CLASS( App, wxApp )


/*
 * App event table definition
 */

BEGIN_EVENT_TABLE( App, wxApp )

////@begin App event table entries
////@end App event table entries

END_EVENT_TABLE()


/*
 * Constructor for App
 */

App::App()
{
    Init();
}


/*
 * Member initialisation
 */

void App::Init()
{
////@begin App member initialisation
////@end App member initialisation
}

/*
 * Initialisation for App
 */

bool App::OnInit()
{    
////@begin App initialisation
    // Remove the comment markers above and below this block
    // to make permanent changes to the code.

#if wxUSE_XPM
    wxImage::AddHandler(new wxXPMHandler);
#endif
#if wxUSE_LIBPNG
    wxImage::AddHandler(new wxPNGHandler);
#endif
#if wxUSE_LIBJPEG
    wxImage::AddHandler(new wxJPEGHandler);
#endif
#if wxUSE_GIF
    wxImage::AddHandler(new wxGIFHandler);
#endif
////@end App initialisation

    return true;
}


/*
 * Cleanup for App
 */

int App::OnExit()
{    
////@begin App cleanup
    return wxApp::OnExit();
////@end App cleanup
}

