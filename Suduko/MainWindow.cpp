#include "MainWindow.h"

MainWindow::MainWindow() : wxFrame(nullptr, wxID_ANY, "Sudoku Puzzle", wxDefaultPosition, wxSize(600, 600)) {
	this->SetMinSize(wxSize(600, 600));

	// Main sizer to hold everything
	mainSizer = new wxBoxSizer(wxVERTICAL);

	// Text
	text = new wxStaticText(this, wxID_ANY, "Zach's Sudoku Puzzle!\nEverything seems to be working",
		wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE_HORIZONTAL);
	text->SetFont(wxFont(20, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL));
	
	// Add text to main sizer
	mainSizer->Add(text, 0, wxALIGN_CENTER | wxTOP | wxBOTTOM, 20);

	// Grid sizer for grid initialization
	puzzleGrid = new wxGridSizer(9, 9, 0, 0);

	// Dummy data for now
	for (int i = 0; i < 81; i++) {
		puzzleGrid->Add(new wxButton(this, wxID_ANY, " "), 1, wxEXPAND | wxALL, 1);
	}

	mainSizer->Add(puzzleGrid, 1, wxEXPAND | wxALL, 20);

	this->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_FRAMEBK));
	this->SetSizer(mainSizer);
	this->Layout();
}

MainWindow::~MainWindow() {}