// Break and Continue Flow Control Structure

// break:		finishes entirely the looping sequences

// continue:	finishes the current looping sequence,
//				going to the next iteration.

// ============================================================

#include <stdio.h>

int main(){
	int i = 1;
	
	for(i = 1; i <= 10; i++){
		printf("%d ", i);
		
		if(i == 5){
			break;
		}
	}
	
	for(i = 1; i <= 10; i++){
		printf("%d ", i);
		
		if(i == 5){
			continue;
		}
	}
}
