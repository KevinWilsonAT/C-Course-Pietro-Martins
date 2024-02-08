// Functions and Code Modularization

// 		Definition Syntax:
// 			<variable_type> <function_name>(<parameters>){
//				<command_block>
//				return <infor>;
// 			}

//		Identifier: same variable rules

// 		Return Type: Not obligatory in C

//		Input parameters: none, one or many

//------------------------------------------------------------------

// Distinct function parameters

// 		Struct parameters syntax:
// 			<variable_type> <function_name>(<struct_type> <parameters>){...}

// 		Arrays / matrices parameters syntax:
// 			<variable_type> <function_name>(<type> <array>[], int <size>){...}
// 			<variable_type> <function_name>(<type> <array>([<size>]){...}
// 			<variable_type> <function_name>(<type> *<array>, int <size>){...}
// 			<variable_type> <function_name>(<type> <matrix>[][<size2>], int <size1>){...}

// 		Other function details:
//			Variable scope: local vs global
//			Declaration: Should appear before main()

//-------------------------------------------------------------------

// Example 1

#include <stdio.h>

float greater(float num1, float num2){
	if(num1 > num2)
		return num1;
	else
		return num2;
}

//-----------------------------------------------------------

// Example 2

void print1(int v1[], int n2){
	int i;
	for(i = 0; i < n2; i++){
		printf("%d ", v1[i]);
	}
}

void print2(int v2[5]){
	int i2;
	for(i2 = 0; i2 < 5; i2++){
		printf("%d ", v2[i2]);
	}
}
	
void print3(int *v3, int n3){
	int i3;
	for(i3 = 0; i3 < n3; i3++){
		printf("%d ", v3[i3]);
	}
}

//------------------------------------------------------------

// Example 3

void print4(int matrix[][4], int n4){
	int x4, y4;
	for(x4 = 0; x4 < n4; x4++){
		for(y4 = 0; y4 < 4; y4++){
			printf("%d ", matrix[x4][y4]);
		}
		printf("\n");
	}
}
	
//------------------------------------------------------------

int main(){
	
	// Example 1
	
	float x, y, m;
	
	printf("Insert a value:\n");
	scanf("%f", &x);
	printf("Insert another value:\n");
	scanf("%f", &y);
	m = greater(x,y);
	printf("The greater value is: %.2f\n", m);
	// printf("The greater value is: %.2f", greater(x,y));


	//----------------------------------------------------------------
	
	// Example 2
	
	int array[5] = {1, 2, 3, 4, 5};
	
	puts("\nFirst Print:");
	print1(array, 5);
	
	puts("\nSecond Print:");
	print2(array);
	
	puts("\nThird Print:");
	print3(array, 5);
	printf("\n\n\n");
	
	//----------------------------------------------------------------
	
	// Example 3
	
	int mat[3][4] = {{1, 2, 3, 4}, {50, 60, 70, 80}, {91, 101, 111, 121}};
	
	print4(mat, 3);
}
