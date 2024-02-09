#include <stdio.h>

int main(int argc, char *argv[]){
	
	int array[9], x, y, counter;
	
	for(x = 0; x <9; x++){
		printf("Insert an integer number: ");
		scanf("%d", &array[x]);
	}
	
	for (x = 0; x < 9; x++){
		
		counter = 0;
		
		for(y = 1; y <= array[x]; y++){
			if (array[x] % y == 0){
				counter++;
			}
		}
		if(counter == 2){
			printf("%d is a prime number. Position: %d\n", array[x], x);
		}
	}

	system("pause");
	
	return 0;
}
