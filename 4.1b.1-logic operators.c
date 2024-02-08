// LOGIC - RELATIONAL CONDITIONS

// Logic Operators:

// "AND" logic operator: returns true when all conditions are true

//	| a | b |a && b |
//	| V | V |	V	|
//	| V | F |	F	|
//	| F | V |	F	|
//	| F | F |	F	|

// "OR" logic operator: returns false only when all conditions are false

//	| a | b |a || b |
//	| V | V |	V	|
//	| V | F |	V	|
//	| F | V |	V	|
//	| F | F |	F	|

// "NOT" logic operator: returns true when the condition is false, and vice-versa

//	| a | !a |
//	| V |  F |
//	| F |  V |

// =============================================================================

#include <stdio.h>

int main(){
	float m;
	
	printf("Enter the rank: ");
	scanf("%f", &m);
	
	if(m >= 4.0 && m < 7.0){
		printf("Exam.");
	} 
}
