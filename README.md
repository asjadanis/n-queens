# n-queens

Solving [N-Queen's Problem](https://en.wikipedia.org/wiki/Eight_queens_puzzle) using a [Backtracking algorithm](https://en.wikipedia.org/wiki/Backtracking)

# Approach

1. Start filling the board from the leftmost column.
2. if all queens are placed return true. (solution exists)
3. Try placing queen in all rows for a given column:
...For every row check if the queen can be placed in this row without voilating the constraint's
...If it does't voilates any constraint mark this place queen at this position (row,col) and recursively check if this position leads to a solution
...If it leads to solution voila return the solution
...If it doesn't leads to a solution, then remove the queen from this position, backtrack and go to previous step and try the next valid row.
