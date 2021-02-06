#include "Header.h"

wxMenu* utility_functions::createMenu()
{
    return new wxMenu;
}
wxMenuBar* utility_functions::createMenuBar()
{
    return new wxMenuBar;
}

MainFrame::MainFrame(const wxString& rTitle)
    :wxFrame(nullptr, wxID_ANY, rTitle)
{
    auto fileMenu = utility_functions::createMenu();
    auto helpMenu = utility_functions::createMenu();
    helpMenu->Append(wxID_ABOUT, _T("&About\tF1"), _T("Show the about dialog"));
    fileMenu->Append(wxID_EXIT, _T("E&xit\tAlt-X"), _T("Click to quit the program"));
    auto menuBar = utility_functions::createMenuBar();
    menuBar->Append(fileMenu, _T("&File"));
    menuBar->Append(helpMenu, _T("&Help"));
    SetMenuBar(menuBar);
    CreateStatusBar(1);
    SetStatusText(_T("Hello!"));

}
