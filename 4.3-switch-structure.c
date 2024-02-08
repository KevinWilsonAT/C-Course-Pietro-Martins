// Switch Structure

// Syntax:

// switch(<var>){
//		case <v1>:
// 			<com_block1>
//			break;
//		case <v2>:
// 			<com_block2>
//			break;

//		...

//		case <vN>:
// 			<com_blockN>
//			break;

//		default:
// 			<default_com_block1>
//			break;
// }

// ============================================================

#include <stdio.h>

int main(){
	int d;
	
	printf("Enter the number between 1 and 7: ");
	scanf("%d", &d);
	
	switch(d){
		case 1:
			printf("Sunday");
			break;
		case 2:
			printf("Monday");
			break;
		case 3:
			printf("Tuesday");
			break;
		case 4:
			printf("Wednesday");
			break;
		case 5:
			printf("Thursday");
		break;
		case 6:
			printf("Friday");
			break;
		case 7:
			printf("Saturday");
			break;
		default:
			printf("Invalid Value");
			break;
	}
}
