#pragma once
#include <wx/wx.h>
#include "MainWindow.h"

class SudokoApp : public wxApp {
public:
	virtual bool OnInit();
};

DECLARE_APP(SudokoApp);