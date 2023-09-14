#include "Previous.h"
#include<iostream>
using namespace std;

Previous::Previous(int nRows, int nCols) :m_row(nRows), m_col(nCols)
{
	int r, c;
	for (r = 0; r < m_row; r++)
	{
		for (c = 0; c < m_col; c++)
		{
			m_grid1[r][c] = 0;//initialize integer array to 0
		}
	}
	int r1, c1;
	for (r1 = 0; r1 < m_row; r1++)
	{
		for (c1 = 0; c1 < m_col; c1++)
		{
			m_grid[r1][c1] = '.';//initialize char array to '.'
		}
	}
}

bool Previous::dropACrumb(int r, int c)
{
	//check if row and column out of bound
	if (r < 1 || r > MAXROWS || c < 1 || c > MAXCOLS)
	{
		return false;
	}
	m_grid1[r - 1][c - 1]++;
	if (m_grid1[r - 1][c - 1] == 1)
	{
		m_grid[r - 1][c - 1] = 'A';
		return true;
	}
	//if the position has more than 26, write Z
	else if (m_grid1[r - 1][c - 1] >= 27)
		return true;
	//in all other cases, increment the alphabet 
	else
	{
		m_grid[r - 1][c - 1]++;
		return true;
	}
}
void Previous::showPreviousMoves() const
{
	clearScreen();//clear the screen
	int r, c;
	// Draw the grid
	for (r = 0; r < m_row; r++)
	{
		for (c = 0; c < m_col; c++)
		{
			cout << m_grid[r][c];
		}
		cout << endl;
	}
	cout << endl;
}