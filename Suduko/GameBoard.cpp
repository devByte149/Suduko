#include "GameBoard.h"

GameBoard::GameBoard(wxWindow* parent) : wxPanel(parent, wxID_ANY)
{
    // 1. Setup the Sizer for THIS panel
    this->SetBackgroundColour(wxColor(225, 225, 225)); // White background

    // 2. Run the initialization
    InitGrid();

    // 3. Final Layout
    this->SetSizer(puzzleGrid);
    this->Layout();
}

void GameBoard::InitGrid()
{
    //for (int i = 0; i < 81; i++) {
    //    puzzleGrid->Add(new wxButton(this, wxID_ANY, " "), 1, wxEXPAND | wxALL, 1);
    //}

    // Failsafe delete
	if (puzzleGrid) delete puzzleGrid;

	// Create a 3x3 grid sizer
    puzzleGrid = new wxGridSizer(3, 3, 0, 0);

    for (int box = 0; box < 9; box++) {
        wxGridSizer* innerBoxSizer = new wxGridSizer(3, 3, 1, 1);

        for (int cell = 0; cell < 9; cell++) {
            wxButton* btn = new wxButton(this, wxID_ANY, " ");
			innerBoxSizer->Add(btn, 1, wxEXPAND | wxALL, 1);
        }

		puzzleGrid->Add(innerBoxSizer, 1, wxEXPAND | wxALL, 3);
    }

	this->SetSizer(puzzleGrid);
}