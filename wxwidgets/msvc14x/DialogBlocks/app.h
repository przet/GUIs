/////////////////////////////////////////////////////////////////////////////
// Name:        app.h
// Purpose:     
// Author:      Philippe Rzetelski
// Modified by: 
// Created:     08/02/2021 20:41:47
// RCS-ID:      
// Copyright:   
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#ifndef _APP_H_
#define _APP_H_


/*!
 * Includes
 */

////@begin includes
#include "wx/image.h"
////@end includes

/*!
 * Forward declarations
 */

////@begin forward declarations
////@end forward declarations

/*!
 * Control identifiers
 */

////@begin control identifiers
////@end control identifiers

/*!
 * App class declaration
 */

class App: public wxApp
{    
    DECLARE_CLASS( App )
    DECLARE_EVENT_TABLE()

public:
    /// Constructor
    App();

    void Init();

    /// Initialises the application
    virtual bool OnInit();

    /// Called on exit
    virtual int OnExit();

////@begin App event handler declarations
////@end App event handler declarations

////@begin App member function declarations
////@end App member function declarations

////@begin App member variables
////@end App member variables
};

/*!
 * Application instance declaration 
 */

////@begin declare app
DECLARE_APP(App)
////@end declare app

#endif
    // _APP_H_
