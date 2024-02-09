#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	
	int n1, n2;
	
	printf("Insert the 1st number: ");
	scanf("%d", &n1);
	printf("Insert the 2nd number: ");
	scanf("%d", &n2);
	
	if(n1 > n2){
		printf("The greater number is n1: %d\n\n", n1);
	}
	else{
		if(n1 < n2){
			printf("The greater number is n2: %d\n\n", n2);
		}
		else{
			if(n1 == n2){
				printf("The numbers are the same value\n\n");
			}
			else{
				printf("Invalid command")
			}
		}
	}
	system("pause");
	
	return 0;
}
