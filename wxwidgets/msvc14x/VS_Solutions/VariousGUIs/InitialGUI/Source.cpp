#include <wx/wxprec.h>

struct InitialGUI final : public wxApp
{
    bool OnInit() override
    {
        return false;
    }

};

IMPLEMENT_APP(InitialGUI);
