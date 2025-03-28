#include <stdio.h>
#define N 4

void getCofactor(int mat[N][N], int temp[N][N], 
				int p, int q, int n)
{
	int i = 0, j = 0;

	for (int row = 0; row < n; row++)
	{
		for (int col = 0; col < n; col++) 
		{
			
			if (row != p && col != q) 
			{
				temp[i][j++] = mat[row][col];

				
				if (j == n - 1) 
				{
					j = 0;
					i++;
				}
			}
		}
	}
}

/* Recursive function for finding the 
determinant of matrix. n is current 
dimension of mat[][]. */
int determinantOfMatrix(int mat[N][N], int n)
{
	// Initialize result
	int D = 0; 

	// Base case : if matrix contains 
	// single element
	if (n == 1)
		return mat[0][0];

	// To store cofactors
	int temp[N][N]; 

	// To store sign multiplier
	int sign = 1; 

	// Iterate for each element of 
	// first row
	for (int f = 0; f < n; f++) 
	{
		// Getting Cofactor of mat[0][f]
		getCofactor(mat, temp, 0, f, n);
		D += sign * mat[0][f]
			* determinantOfMatrix(temp, n - 1);

		// Terms are to be added with alternate sign
		sign = -sign;
	}

	return D;
}

// Function for displaying the matrix 
void display(int mat[N][N], 
			int row, int col)
{
	for (int i = 0; i < row; i++) 
	{
		for (int j = 0; j < col; j++)
			printf(" %d", mat[i][j]);
		printf("n");
	}
}

// Driver code
int main()
{
	int mat[N][N] = {{1, 0, 2, -1},
					{3, 0, 0, 5},
					{2, 1, 4, -3},
					{1, 0, 5, 0}};

	// Function call
	printf("Determinant of the matrix is : %d",
			determinantOfMatrix(mat, N));
	return 0;
}
