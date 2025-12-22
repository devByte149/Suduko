#pragma once
#include <wx/wx.h>

class MainWindow : public wxFrame {
public:
	MainWindow();
	~MainWindow();

private:
	wxGridSizer* puzzleGrid = nullptr;
	wxBoxSizer* mainSizer = nullptr;
	wxStaticText* text = nullptr;
};