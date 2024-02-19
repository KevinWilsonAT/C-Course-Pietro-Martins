// Syntax:
// scanf(<form.>, &<v1>, &<v2>, ..., &<vN>);

// Use:
// 0, 1 or N variables

// Format specifiers scanf():

// d or i	=> Decimal based integer numbers								X		=> Hexadecimal based integer numbers
// f		=> Float point numbers											e		=> Scientific notation numbers
// c		=> Alphanumeric characters										s		=> Alphanumeric characters sequence
// [^chars]	=> Reads all typed data, except the specified in "chars"

#include <stdio.h>

int main(){
	int age = 0;
	int year = 1950;
	float weight = 0.0;
	
	printf("Type an age and a year: ");
	scanf("%d" "%d", &age, &year);
	printf("Type a weight: ");
	scanf("%.2f", &weight);
	printf("Informed age: %d. \n", age);
	printf("Informed year: %d. \n", year);
	printf("Informed weight: %f. \n", weight);
}
