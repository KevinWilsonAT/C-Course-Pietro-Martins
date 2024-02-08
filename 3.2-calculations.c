// Mathematic Operators:

// Addition: +			Subtraction: -
// Multiplication: *	Division: /
// Module: %

// Precedency:

// 1st - Everything inside parenthesis
// 2nd - Potentation (n^2, n^3, etc.) and Rooting (sqrt(n))
// 3rd - Multiplication and Division
// 4th - Addition and Subtraction

// Arithmetic Attributions

// ++	1 unit increment		--	1 unit decrement
// +=	Generic increment		-=	Generic decrement
// *=	Attribution w/ multip.	/=	Attribution w/ division

#include <stdio.h>

int main(){
	int A, B, add, subt, mult, div;
	
	printf("Type the 1st value: ");
	scanf("%d", &A);
	
	printf("Type the 2nd value: ");
	scanf("%d", &B);
	
	add = A + B;
	subt = A - B;
	mult = A * B;
	div = A / B;
	
	printf("Results:\n");
	printf("Addition: %d.\n", add);
	printf("Subtraction: %d.\n", subt);
	printf("Multiplication: %d.\n", mult);
	printf("Division: %d.\n", div);
	
	int data = 10;
	printf("Data before increment / decrement: %d.\n", data);
	
	data++;
	printf("Data after increment: %d.\n", data);
	
	data--;
	printf("Data after decrement: %d.\n", data);
	
	data += 3;
	printf("Data before increment in 3 units: %d.\n", data);
	
	data -= 2;
	printf("Data after decrement in 2 units: %d.\n", data);
	
	data *= 10;
	printf("Data after multiplication attribution by 10: %d.\n", data);
	
	data /= 10;
	printf("Data after division attribution by 10: %d.\n", data);
}
