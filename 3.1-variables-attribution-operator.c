// Variables

// Syntax:
// <type> <name>;

// Data types in language C

// type: char			number of bits: 8		representation range: -127 ~ 127
// type: int (short)	number of bits: 16		representation range: -32.768 ~32.767
// type: int (long)		number of bits: 16		representation range: -2.147.483.648 ~ 2.147.483.647
// type: float			number of bits: 32		representation range: 3,4 x 10^(-38) ~ 3,4 x 10^(38)
// type: double			number of bits: 64		representation range: 1,7 x 10^(-308) ~ 1,7 x 10^(308)

// ==========================================================================

// Attribution Operator

// Syntax:
// <variable> = <info>;

// ==========================================================================

// Constants

// Syntax:
// #define <name> <value>

#include <stdio.h>

#define text "Data Entering and Exiting"

int main(){
	printf("%s\n", text);
	
	int age = 0;
	float height = 0.0;
	char[50] name = "";
	
	printf("Type a name: ");
	printf("%s", &name);
	
	printf("Type an age: ");
	printf("%d", &age);
	
	printf("Type a height: ");
	printf("%f", &height);
}
