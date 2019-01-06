#pragma once

#include <iostream>

class QueenSolver
{
	int** board;
	int size;
public:
	QueenSolver(int);
	void initializeBoard(int);
	void printBoard();
	bool solveNQueens(int col);
	bool isValid(int, int);
	virtual ~QueenSolver();
};

