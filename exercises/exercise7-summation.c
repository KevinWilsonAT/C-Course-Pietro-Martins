#include <stdio.h>

int main(int argc, char *argv[]){
	
	int add, i;

	for(i = 1; i <= 10; i++){
		add += i;
	}
	
	printf("Summation from 1 to 10: %d.\n\n", add);

	system("pause");
	
	return 0;
}
