class Solution 
{ 
    //Function to search a given number in row-column sorted matrix.
	static boolean search(int matrix[][], int n, int m, int x) 
	{  
        int row = 0; // Start from the first row.
        int col = m - 1; // Start from the last column.

        while (row < n && col >= 0) {
            if (matrix[row][col] == x) {
                return true; // Found x in the matrix.
            } else if (matrix[row][col] < x) {
                row++; // Move to the next row.
            } else {
                col--; // Move to the previous column.
            }
        }

        return false; // x was not found in the matrix
	} 
} 
