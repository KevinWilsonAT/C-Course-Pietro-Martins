// Matrices

// Syntax:

//		<type> <name>[dim1][dim2]...[dimN];

//-------------------------------------------

// Manipulating matrices

//		Position access syntax:
//			<name>[<i1>][<i2>]...[<iN>];

//		Initialization syntax:
//			<declaration> = {{<i1>}, {<i2>}, ..., {<iN>}};

#include<stdio.h>

int main(){
	
	int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int x, y;
	
	/*
	mat[0][0] = 1;
	mat[0][1] = 2;
	mat[0][2] = 3;
	
	mat[1][0] = 4;
	mat[1][1] = 5;
	mat[1][2] = 6;
	
	mat[2][0] = 7;
	mat[2][1] = 8;
	mat[2][2] = 9;
	*/
	
	printf("Displaying the 1st line:\n");
	for(y = 0; y < 3; y++){
		printf("%d ", mat[0][y]);
	}
	//printf("%d %d %d\n", mat[0][0], mat[0][1], mat[0][2]);
	
	printf("Displaying the entire matrix:\n");
	for(x = 0; x < 3; x++){
		for(y = 0; y < 3; y++){
			printf("%d ", mat[x][y]);
		}
	}
}
