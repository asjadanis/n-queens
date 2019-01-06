#include "QueenSolver.h"

QueenSolver::QueenSolver(int size) {
	if (size > 0) {
		initializeBoard(size);
	}
	else {
		std::cout << "Please Input a positive number \n";
	}
}


void QueenSolver::initializeBoard(int size) {
	this->size = size;
	board = new int*[size];
	for (int i = 0; i < size; i++) {
		board[i] = new int[size];
	}
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			board[i][j] = 0;
		}
	}
}

void QueenSolver::printBoard() {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (board[i][j]) {
				std::cout << " Q " ;
			}
			else {
				std::cout << " - ";
			}
		}
		std::cout << std::endl;
	}
}

bool QueenSolver::isValid(int row, int col) {
	for (int i = 0; i < col; i++) {
		if (board[row][i]) {
			return false;
		}
	}
	for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
		if (board[i][j]) {
			return false;
		}

	for (int i = row, j = col; j >= 0 && i < size; i++, j--)
		if (board[i][j]) {
			return false;
		}
		
	return true;
}

bool QueenSolver::solveNQueens(int col) {
	if (col >= size) {
		return true;
	}
	for (int i = 0; i < size; i++)
	{
		if (isValid(i, col))
		{
			board[i][col] = 1;
			if (solveNQueens(col + 1)) {
				return true;
			}
			board[i][col] = 0;
		}
	}
	return false;
}

QueenSolver::~QueenSolver(){
	for (int i = 0; i < size; i++) {
		delete[] board[i];
	}
	delete[] board;
}
