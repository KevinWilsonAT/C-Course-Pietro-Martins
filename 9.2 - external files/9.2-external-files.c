//	Beyond main() function:

//	main(): your program is only a function
//		A program's parameters:
//			int argc
//			char *argv[]

//	main() correct syntax:
//			int main (int argc, char *argv[]){...}

//-------------------------------------------------------------------

//	To integrate distinct source files: #include

//	.h files:
//		Global variables;
//		Function prototypes;
//		New types definitions.

//	.c files:
//		Logical Implementation

//-------------------------------------------------------------------

#include <stdio.h>

// Example 2 include
#include "9.2-polygons.h"
#include "9.2-polygons.c"

// Example 1

int main(int argc, char *argv[]){
	
	int i;
	
	if(argc > 1){
		printf("%d arguments has been inserted:\n");
		
		for (i = 0; i < argc; i++){
			printf("%s\n", argv[i]);
		}
	}
	else{
		printf("No arguments has been inserted in the program.\n");
	}
	
	//Example 2 

	// printf("%.2f.\n", calcCircleArea(10)); Circle area
	// printf("%.2f.\n", calcRectangleArea(10, 10)); Rectangle area
	// printf("%.2f.\n", calcTriangleArea(10, 10)); Triangle area
	
	// printf("%.2f.\n", calcCirclePerimeter(10)); Circle area
	// printf("%.2f.\n", calcRectanglePerimeter(10, 10)); Rectangle area
	// printf("%.2f.\n", calcTrianglePerimeter(10, 10, 10)); Triangle area
}
	
	
	
