// Do While Structure

// Syntax:

// do{
//		<command_block>
// }while(<condition>);

// ============================================================

#include <stdio.h>

int main(){
	int i = 1;
	
	do{
		printf("%d ", i);
		i++;
	}while(i <= 10);
}
