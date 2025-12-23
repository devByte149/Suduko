#pragma once
#include <wx/wx.h>
#include "GameBoard.h"

class MainWindow : public wxFrame {
public:
	MainWindow();
	~MainWindow();

private:
	wxGridSizer* puzzleGrid = nullptr;
	wxBoxSizer* mainSizer = nullptr;
	wxBoxSizer* toolBarSizer = nullptr;
	wxStaticText* text = nullptr;

	GameBoard* gameBoard = nullptr;
	wxSize windowSize = wxSize(600, 600);
	wxSize btnSize = wxSize(50, 50);

	void ToolBar();
};