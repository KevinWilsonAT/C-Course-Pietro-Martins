#include <stdio.h>

int main(int argc, char *argv[]){
	
	int matrix[3][3];
	int x, y, key, row, col, found = 0;

	for(y = 0; y < 3; y++){
		for(x = 0; x < 3; x++){
			printf("Insert the element of the row %d, column %d: ", y, x);
			scanf("%d", &matrix[y][x]);
		}	
	}

	printf("Insert search key: ");
	scanf("%d", &key);
	
	for(y = 0; y < 3; y++){
		for(x = 0; x < 3; x++){
			if(matrix[y][x] == key){
				found = 1;
				row = y;
				col = x;
				break;
			}
		}
		if(found == 1){
			break;
		}
	}
	
	if(found == 1){
		printf("The element %d has been found at row %d, column %d\n\n", key, y, x);
	}
	
	system("pause");
	
	return 0;
}
