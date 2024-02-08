// If Structure

// Syntax:

// if(<condition>){
//		<command_block>
// }

// ============================================================

// RELATIONAL OPERATORS

//	Greater: >		Greater or Equal: >=
//	Lesser: <		Lesser or Equal: <=
//	Equal: ==		Different: !=

// ============================================================
#include <stdio.h>

int main(){
	float m;
	
	printf("Enter the rank: ");
	scanf("%f", &m);
	
	if(m >= 7.0){
		printf("Approved.");
	} 
}
