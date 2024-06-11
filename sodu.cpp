#include <iostream>

using namespace std;

// N is the size of the 2D matrix N*N
#define N 9

/* A utility function to print grid */
void print(int arr[N][N])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
}

// Checks whether it will be
// legal to assign num to the
// given row, col
bool issafe(int grid[9][9],int row,int col,int num)
{
        for(int i=0;i<9;i++)
        {
            if(grid[row][i]==num)
            {
                return false;
            }
        }

        for(int i=0;i<9;i++)
        {
            if(grid[i][col]==num)
            {
                return false;
            }
        }

        int strow = row-row%3;
        int stcol = col-col%3;

        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(grid[i+strow][j+stcol]==num)
                {
                    return false;
                }
            }
        }


    return true;

}

bool solveSudoku(int grid[N][N], int row, int col)
{
	// Check if we have reached the 8th
	// row and 9th column (0
	// indexed matrix) , we are
	// returning true to avoid
	// further backtracking
	if (row == N - 1 && col == N)
		return true;

	// Check if column value becomes 9 ,
	// we move to next row and
	// column start from 0
	if (col == N) {
		row++;
		col = 0;
	}

	// Check if the current position of
	// the grid already contains
	// value >0, we iterate for next column
	if (grid[row][col] > 0)
		return solveSudoku(grid, row, col + 1);

	for (int num = 1; num <= N; num++)
	{

		// Check if it is safe to place
		// the num (1-9) in the
		// given row ,col ->we
		// move to next column
		if (issafe(grid, row, col, num))
		{

		/* Assigning the num in
			the current (row,col)
			position of the grid
			and assuming our assigned
			num in the position
			is correct	 */
			grid[row][col] = num;

			// Checking for next possibility with next
			// column
			if (solveSudoku(grid, row, col + 1))
				return true;
		}

		// Removing the assigned num ,
		// since our assumption
		// was wrong , and we go for
		// next assumption with
		// diff num value
		grid[row][col] = 0;
	}
	return false;
}

// Driver Code
int main()
{
	// 0 means unassigned cells
	int grid[N][N] = { { 3, 0, 6, 5, 0, 8, 4, 0, 0 },
					{ 5, 2, 0, 0, 0, 0, 0, 0, 0 },
					{ 0, 8, 7, 0, 0, 0, 0, 3, 1 },
					{ 0, 0, 3, 0, 1, 0, 0, 8, 0 },
					{ 9, 0, 0, 8, 6, 3, 0, 0, 5 },
					{ 0, 5, 0, 0, 9, 0, 6, 0, 0 },
					{ 1, 3, 0, 0, 0, 0, 2, 5, 0 },
					{ 0, 0, 0, 0, 0, 0, 0, 7, 4 },
					{ 0, 0, 5, 2, 0, 6, 3, 0, 0 } };

	if (solveSudoku(grid, 0, 0))
		print(grid);
	else
		cout << "no solution exists " << endl;

	return 0;
	// This is code is contributed by Pradeep Mondal P
}

