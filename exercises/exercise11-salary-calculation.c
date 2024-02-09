#include <stdio.h>
#include <stdlib.h>

float calcRecSal(float hr_n, float min_sal){
	
	float w_hr, tot_sal, taxes, rec_sal;
	
	w_hr = min_sal / 2.0;
	tot_sal = hr_n * w_hr;
	taxes = tot_sal * 3 / 100;
	rec_sal = tot_sal - taxes;
	
	return rec_sal;
}

int main(int argc, char *argv[]){
	
	float w_hr, min_sal, rec_sal;
	
	printf("Insert total worked hours: ");
	scanf("%f", &w_hr);
	printf("Insert minimum salary: ");
	scanf("%f", &min_sal);

	rec_sal = calcRecSal(w_hr, min_sal);

	printf("Received salary: R$%.2f.\n\n", rec_sal);

	system("pause");
	
	return 0;
}
