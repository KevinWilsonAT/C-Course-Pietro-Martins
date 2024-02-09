#include <stdio.h>

int main(int argc, char *argv[]){
	
	float salary, augm, perc, n_salary;
	
	printf("Employee salary: ");
	scanf("%f", &salary);

	printf("Augment percentual: ");
	scanf("%f", &perc);
	
	augm = salary * (perc / 100);
	n_salary = salary + augm;
	
	printf("Salary: %.2f\n", salary);
	printf("Augment: %.2f\n", augm);
	printf("New salary: %.2f\n", n_salary);
	
	system("pause");
	
	return 0;
}
