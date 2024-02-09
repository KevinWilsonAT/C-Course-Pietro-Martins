#include <stdio.h>
#include <stdlib.h>

struct type_person{
	char name[200];
	int age;
	float weight;
	float height;
};

int main(int argc, char *argv[]){
	
	struct type_person list[3];
	int i;
	
	for(i = 0; i < 3; i++){
		printf("Insert the person name of the position %d: ", i);
		scanf("%199[^\n]s", &list[i].name);
		fflush(stdin);
		printf("Insert the person age of the position %d: ", i);
		scanf("%d", &list[i].age);
		fflush(stdin);
		printf("Insert the person weight of the position %d: ", i);
		scanf("%f", &list[i].weight);
		fflush(stdin);
		printf("Insert the person height of the position %d: ", i);
		scanf("%f", &list[i].height);
		fflush(stdin);
	}
	
	printf("1st person name: %s.\n", list[0].name);
	printf("1st person age: %d.\n", list[0].age);
	printf("2nd person weight: %.2f.\n", list[1].weight);
	printf("last person height: %.2f.\n", list[2].height);
	
	system("pause");
	
	return 0;
}
