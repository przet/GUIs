#ifndef HEADER_H
#define HEADER_H

#include <wx/wxprec.h>

struct InitialApp : public wxApp
{
    bool OnInit() override;
};

struct MainFrame : public wxFrame
{
    MainFrame(const wxString& rTitle);
    void OnAbout(wxCommandEvent& rEvent);
    void OnQuit(wxCommandEvent& rEvent);
private:
    DECLARE_EVENT_TABLE();
};

namespace utility_functions
{
    wxMenu* createMenu();
    wxMenuBar* createMenuBar();

}

#endif // !HEADER_H
