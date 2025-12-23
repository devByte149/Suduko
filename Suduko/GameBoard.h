#pragma once
#include <wx/wx.h>

class GameBoard : public wxPanel {
public:
	GameBoard(wxWindow* parent);

private:
	wxGridSizer* puzzleGrid = nullptr;
	wxBoxSizer* mainSizer = nullptr;
	wxStaticText* text = nullptr;

	wxSize btnSize = wxSize(50, 50);

	void InitGrid();
};