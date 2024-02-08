// Structs

// Definition Syntax:

//		struct <new_type>{
//			<type1> <field1>;
//			<type2> <field2>;
//			...
//			<typeN> <fieldN>;
//		};

// Struct Variable Declaration Syntax:

//		struct	<new_type> <variable_name>; (Conventional way)
//				<new_name> <variable_name>; (Using command typedef)

// typedef command: renames an identifier

//		Syntax:

//			typedef <type> <new_name>;

//-------------------------------------------

// Accessing struct members:

//		Syntax:
//			<variable>.<field>

//		Initialization syntax:
//			<declaration> = {{<i1>}, {<i2>}, ..., {<iN>}};

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

#define SIZE 50
#define SIZE2 3

struct person_type{
	int age;
	float weight;
	char name[SIZE];
};

struct person_type2{
	int age2;
	float weight2;
	char name2[50];
};
	
typedef struct person_type person_type;
typedef struct person_type2 person_type2;
	
int main(){	
	
	setlocale(LC_ALL, "Portuguese");
	
	// Creating and Initializing
	
	person_type person = {0, 0.0, "Teste"};
	
	printf("Start:\n");
	printf("person.age: %d\n", person.age);
	printf("person.weight: %.2f\n", person.weight);
	printf("person.name: %s\n", person.name);
	
	// Giving names to the fields
	
	person.age = 10;
	person.weight = 99.99;
	strcpy(person.name, "Text");
	
	printf("\nAltering fields by code:\n");
	printf("person.age: %d\n", person.age);
	printf("person.weight: %.2f\n", person.weight);
	printf("person.name: %s\n", person.name);
	
	// Requesting inputs by keyboard
	
	printf("\nInsert an integer number:\n");
	scanf("%d", &person.age);
	printf("Insert a real number:\n");
	scanf("%f", &person.weight);
	fflush(stdin);
	printf("Insert a word:\n");
	scanf("%s", &person.name);
	
	printf("\nAltering with user data:\n");
	printf("person.age: %d\n", person.age);
	printf("person.weight: %.2f\n", person.weight);
	printf("person.name: %s\n", person.name);
	
	//----------------------------------------------------------------
	
	setlocale(LC_ALL, "Portuguese");
	
	person_type2 list[SIZE];
	int i;
	
	for(i = 0; i < SIZE; i++){
		printf("Insert data (%d):\n", i+1);
		puts("Name: ");
		scanf("%50[^\n]s", &list[i].name2);
		fflush(stdin);
		
		puts("Age: ");
		scanf("%d", &list[i].age2);
		fflush(stdin);
		
		puts("Weight: ");
		scanf("%f", &list[i].weight2);
		fflush(stdin);
	}
	system("cls");
	
	puts("Your data:\n");
	for(i = 0; i < SIZE; i++){
		printf("----------------- Person %d -----------------------", i+1);
		printf("\tName: %s\n", list[i].name2);
		printf("\tAge: %s\n", list[i].age2);
		printf("\tWeight: %s\n", list[i].weight2);
	}
	printf("---------------------------------------------------\n");
}
