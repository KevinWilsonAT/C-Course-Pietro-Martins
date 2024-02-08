// Array Structure (Unidimensional Data Structure)

// <type> <name>[<size>];

// ============================================================

// Manipulating arrays:

// <name>[<index>];

// Initialization list: fills an entire array, at once

// <name>[<index>] = {<v1>, <v2>, ..., <vN>};

// ============================================================

#include <stdio.h>

int main(){
	int v[5];
	
	float m;
	
	v[0] = 50;
	v[1] = 40;
	v[2] = 30;
	v[3] = 20;
	v[4] = 10;
	
	m = ((v[0] + v[1] + v[2] + v[3] + v[4]) / 5);
	
	printf("Result: %f\n", m);
	
	
	
	int v1[5] = {10, 20, 30, 40, 50};
	int i;
	float s = 0;
	
	for(i = 0; i < 5; i++){
		s += v1[i];
	}
	
	printf("Result: %f\n", s/5);
	
	
	
	
	int v2[5];
	int i2;
	
	for(i2 = 0; i2 < 5; i2++){
		printf("Insert data: ");
		scanf("%d", &v2[i2]);
	}
	
	printf("Inserted Data:\n");
	
	for(i2 = 0; i2 < 5; i2++){
		printf("%d", v2[i2]);
	}
}
