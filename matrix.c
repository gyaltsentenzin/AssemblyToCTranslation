/**
 * @file matrix.c
 * @author Tenzin Gyaltsen 
 * @brief completed the tasks
 * @version 0.1
 * @date 2021-12-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include <stdio.h>
#include <assert.h>

#define M 256     // number of rows
#define N 216     // TODO: replace the 1 with another integer for the 
                // correct number of columns to match matrix_commmented.s

/*
 * This function populate the array sigh M rows and N columns
 * It populates the array by assigning values to the specific address of (row, column)
 */
void populate(int matrix[M][N]) {
	int * element = &matrix[0][0]; // initially point to the address of element pointer as matrix array's address at (0,0)
	int i, j; 
	for (i = 0; i < M; i++) { // loop till the Mth row
		for (j = 0; j < N; j++) { // loop till the Nth column
			*element = i * j; // assign value at the element pointer
			element++; // increment index (address of element pointer) of the array
		}
	}
}

/*
 * Given the first argument is a 2-D matrix of size M rows
 * and N columns populated with integers, this function returns
 * the value of the integer at row r and column c of this matrix.
 */
int get_elem(int matrix[M][N], int r, int c) {
	return matrix[r][c];
}

/*
 * Small program to show how to use the get_elem() function.
 *  TODO: change this to print a larger row, column value that is within
 *         range of M, N
 */
int main(int argc, char *argv[]) {

	int array2D[M][N];
	populate(array2D);
	int result = get_elem(array2D, 8, 8);
	printf("result is: %d\n", result);

	//added a new test with assert
	result = get_elem(array2D,100,100);
	assert(result == 10000);

  return 0;
}
