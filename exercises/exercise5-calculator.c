#include <stdio.h>

int main(int argc, char *argv[]){
	
	int op;
	float n1, n2, result;
	
	printf("Which operation do you want to do (1 - Addition; 2 - Subtraction; 3 - Multiplication; 4 - Division)? ");
	scanf("%d", &op);
	
	printf("Insert the 1st number: ");
	scanf("%f", &n1);

	printf("Insert the 2nd number: ");
	scanf("%f", &n2);
	
	if(op == 1){
		result = n1 + n2;
		printf("The result between the numbers %.2f and %.2f is %.2f.\n\n", n1, n2, result);
	}
	if(op == 2){
		result = n1 - n2;
		printf("The result between the numbers %.2f and %.2f is %.2f\n\n.", n1, n2, result);
	}
	if(op == 3){
		result = n1 * n2;
		printf("The result between the numbers %.2f and %.2f is %.2f\n\n.", n1, n2, result);
	}
	if(op == 4){
		result = n1 / n2;
		printf("The result between the numbers %.2f and %.2f is %.2f\n\n.", n1, n2, result);
	}
	if((op < 1) || (op > 4)){
		printf("Invalid command\n\n");
	}
	
	system("pause");
	
	return 0;
}
