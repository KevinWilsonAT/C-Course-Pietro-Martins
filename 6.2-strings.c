// Strings

//	Input and Output

//		scanf()

//			General syntax:
//				scanf("%s", <str>);
//			Upgraded syntax:
//				scanf("%<size-1>[^\n]s", <str>);

//		printf()

//			Format Specifier: %s
//			Syntax:
//			printf("<text>", <str1>, <str2>, ..., <strN>);

// ============================================================

//		gets()	->	Limitations: overlap array limit
//			Syntax:
//			gets(<string>);

//		fgets() ->	Last characters always reserved to '\0'
//				->	Default input: stdin
//			Syntax:
//			fgets(<string>, <size>, stdin);
//
//		puts()	->	Outputs a string directly on display
//				->	Doesn't allow other types of variables
//			Syntax:
//			puts(<string>);
//
//		fflush(stdin)	->	Always call after an input

// ============================================================

// Important functions syntaxes:
//
//		string.h library

//			strcpy(<destination>, <origin>);	Alters the string content
//			strcat(<destination>, <origin>);	Concatenates the strings
//			strlen(<string>);					Displays the string length
//			strcmp(<string1>, <string2>);		Compares equality between strings; if true, returns 0.

//		locale.h

//			setlocale(LC_ALL, "Portuguese);
//			


#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 20
#define N2 50

int main(){
	
	char s[10];
	
	printf("Type something (conventional scanf):");
	scanf("%s", s);
	fflush(stdin);
	
	printf("Result: %s\n\n", s);
	
	
	printf("Type something (upgraded scanf):");
	scanf("%10[^\n]s", s);
	fflush(stdin);
	
	printf("Result: %s\n\n", s);

	//--------------------------------------------------------

	printf("Type something (gets reading):");
	gets(s);
	fflush(stdin);
	
	puts("Result:");
	puts(s);
	puts("");
	
	printf("Type something (fgets reading):");
	fgets(s, 10, stdin);
	fflush(stdin);
	
	puts("Result:");
	puts(s);
	puts("");
	
	//------------------------------------------------
	
	setlocale(LC_ALL, "Portuguese");
	
	char origin[N] = {"Olá Mundo!"};
	char destiny[N];
	
	printf("Before strcpy:");
	puts(origin);
	puts(destiny);
	
	strcpy(destiny, origin);
	
	printf("After strcpy:");
	puts(origin);
	puts(destiny);
	
	//--------------------------------------------------
	
	char s1[N] = {"Lógica de"};
	char s2[N] = {" Programação"};
	
	printf("Before strcpat:");
	printf("str1: %s\n", s1);
	printf("str2: %s\n", s2);
	
	strcat(s1, s2);
	
	printf("After strcat:");
	puts(s1);
	
	
	//---------------------------------------------------
	
	char s3[N2];
	int i;

	printf("Type a text: ");
	gets(s);
	
	i = strlen(s);
	
	printf("Text size: %d", i);
	
	printf("Text Display position to position:");
	
	for(i = 0; i < strlen(s); i++){
		printf("%c ", s[i]);
	}
	
	//---------------------------------------------------
	
	char hardText[N2] = {"\exit"};
	char password_usr[N2];
	int ok;

	printf("Type a text: ");
	gets(password_usr);
	
	ok = strcmp(hardText, password_usr);
	
	if(ok == 0){
		printf("Same text");
	}
	else{
		printf("Different text");
	}
}
