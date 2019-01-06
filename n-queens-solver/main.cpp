#include <iostream>
#include "QueenSolver.h"

int main() {
	const unsigned int size = 4;
	int min, max, count = 0;
	QueenSolver solver = QueenSolver(size);
	bool result = solver.solveNQueens(0);
	if (result) {
		solver.printBoard();
	}
	else {
		std::cout << "No Valid Solution Exists \n";
	}
	std::cout << "Enter Min Range: ";
	std::cin >> min;
	std::cout << "Enter Max Range: ";
	std::cin >> max;

	for (int i = min; i <= max; i++){
		solver.initializeBoard(i);
		result = solver.solveNQueens(0);
		if (result) {
			solver.printBoard();
			std::cout << i << "x" << i << " is solvable\n\n";
			count++;
		}
	}
	std::cout << "In The Given Range total " << count << " N queen's are solvable\n";
	return 0;

}