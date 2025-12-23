#include "MainWindow.h"

MainWindow::MainWindow() : wxFrame(nullptr, wxID_ANY, "Sudoku Puzzle", wxDefaultPosition, windowSize) {
	this->SetSize(wxSize(700, 700));
	this->SetMinSize(wxSize(700, 700));
	this->SetMaxSize(wxSize(700, 700));

	// Main sizer to hold everything
	mainSizer = new wxBoxSizer(wxVERTICAL);

	// Text
	text = new wxStaticText(this, wxID_ANY, "Zach's Sudoku Puzzle!\nEverything seems to be working",
		wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE_HORIZONTAL);
	text->SetFont(wxFont(20, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL));
	
	// Add text to main sizer
	mainSizer->Add(text, 0, wxALIGN_CENTER | wxTOP | wxBOTTOM, 20);

	// Initialize the GameBoard
	gameBoard = new GameBoard(this);

	mainSizer->Add(gameBoard, 1, wxALL, 10);

	// ToolBar
	ToolBar();

	this->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_FRAMEBK));
	this->SetSizer(mainSizer);
	this->Layout();

}

MainWindow::~MainWindow() {}

void MainWindow::ToolBar()
{
	text = new wxStaticText(this, wxID_ANY, "Select a number to place in the grid:",
		wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE_HORIZONTAL);
	text->SetFont(wxFont(20, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL));

	mainSizer->Add(text, 0, wxALIGN_CENTER | wxALL, 5);

	toolBarSizer = new wxBoxSizer(wxHORIZONTAL);
	for (int i = 1; i < 10; i++) {
		wxButton* btn = new wxButton(this, wxID_ANY, std::to_string(i),
			wxDefaultPosition, btnSize);

		toolBarSizer->Add(btn, 0, wxALL, 2);
	}

	mainSizer->Add(toolBarSizer, 0, wxALIGN_CENTER | wxALL, 1);
}