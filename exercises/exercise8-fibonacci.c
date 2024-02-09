#include <stdio.h>

int main(int argc, char *argv[]){
	
	int i, prev1, prev2, current;
	
	prev1 = 1;
	prev2 = 0;
	
	printf("Fibonacci Series (the 8 first terms): ");
	printf("%d ", prev1);
	printf("%d ", prev2);
	
	for(i = 3; i <= 8; i++){
		current = prev1 + prev2;
		printf("%d ", current);
		prev2 = prev1;
		prev1 = current;
	}
	
	system("pause");
	
	return 0;
}
