#include <stdio.h>

int main(int argc, char *argv[]){
	
	int x, y, result;
	
	for(y = 1; y <= 10; y++){
		for(x = 1; x <= 10; x++){
			result = y * x;
			printf("%d x %d = %d\n", y, x, result);
		}
		printf("\n");
	}
	
	system("pause");
	
	return 0;
}
