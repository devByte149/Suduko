#include <wx/wx.h>
#include "App.h"

wxIMPLEMENT_APP(SudokoApp);

bool SudokoApp::OnInit() {
    MainWindow* mainWin = new MainWindow();
    mainWin->Show(true);
    return true;
}

//class App : public wxApp {
//public:
//    bool OnInit() {
//        wxFrame* window = new wxFrame(NULL, wxID_ANY, "Suduko Puzzle", wxDefaultPosition, wxSize(600, 400));
//        wxBoxSizer* sizer = new wxBoxSizer(wxHORIZONTAL);
//        wxStaticText* text = new wxStaticText(window, wxID_ANY, "Zach's Suduko Puzzle!\nEverything seems to be working",
//            wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE_HORIZONTAL);
//        wxDefaultPosition
//        sizer->Add(text, 1, wxALIGN_CENTER);
//        window->SetSizer(sizer);
//        window->Show();
//        return true;
//    }
//};
//
//wxIMPLEMENT_APP(App);