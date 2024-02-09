#include <stdio.h>

int main(int argc, char *argv[]){
	
	float n1, n2, n3, n4, add;
	
	printf("Insert the 1st number: ");
	scanf("%f", &n1);
	printf("Insert the 2nd number: ");
	scanf("%f", &n2);
	printf("Insert the 3rd number: ");
	scanf("%f", &n3);
	printf("Insert the 4th number: ");
	scanf("%f", &n4);
	
	add = n1 + n2 + n3 + n4;
	
	printf("Addition of the numbers %.2f, %.2f, %.2f and %.2f: \n", n1, n2, n3, n4);
	printf("%.2f\n\n", add);
	
	system("pause");
	
	return 0;
}
