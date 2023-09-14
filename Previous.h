#ifndef PREVIOUS_H
#define PREVIOUS_H

#include "globals.h"

class Previous
{
public:
	//constructor for a previous object
	Previous(int nRows, int nCols);

	//INPUT: takes in player's coordinates
	//OUTPUT: marks the spot with a letter A-Z
	bool dropACrumb(int r, int c);

	//Displays the grid with the marked letters A-Z
	void showPreviousMoves() const;
private:
	int m_row;
	int m_col;
	int m_grid1[MAXROWS][MAXCOLS];
	char m_grid[MAXROWS][MAXCOLS];
};

#endif