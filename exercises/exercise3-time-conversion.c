#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	
	int sec, min, h;
	
	printf("Insert the time in seconds: ");
	scanf("%d", &sec);
	
	h = sec / 3600;
	sec = sec - (3600 * h);
	
	min = sec / 60;
	sec = sec - (60 * min);
	
	printf("Hour(s): %d.\n", h);
	printf("Minute(s): %d.\n", min);
	printf("Second(s): %d.\n", sec);
	
	system("pause");
	
	return 0;
}
