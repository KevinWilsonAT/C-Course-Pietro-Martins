#include <stdio.h>

int main(int argc, char *argv[]){
	
	float lab_work, sem_test, f_exam, avg;
	
	printf("Laboratory Work rank: ");
	scanf("%f", &lab_work);
	printf("Semestral Test rank: ");
	scanf("%f", &sem_test);
	printf("Final Exam rank: ");
	scanf("%f", &f_exam);
	
	avg = (lab_work * 2 + sem_test * 3 + f_exam * 5) / 10;
	
	if(avg <= 5.0){
		printf("Your final average is %.2f (E)\n\n", avg);
	}
	if(avg > 5.0 && avg <= 6.0){
		printf("Your final average is %.2f (D)\n\n", avg);
	}
	if(avg > 6.0 && avg <= 7.0){
		printf("Your final average is %.2f (C)\n\n", avg);
	}
	if(avg > 7.0 && avg <= 8.0){
		printf("Your final average is %.2f (B)\n\n", avg);
	}
	if(avg > 8.0 && avg <= 10.0){
		printf("Your final average is %.2f (A)\n\n", avg);
	}
	
	system("pause");
	
	return 0;
}
