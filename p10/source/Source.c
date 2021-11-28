#include<stdio.h>
#include<stdlib.h>

void cubeByReference(int* nPtr) {
	*nPtr = *nPtr * *nPtr * *nPtr;
}
int main() {
	int num = 5;
	printf("The original value of number is %d", num);
	cubeByReference(&num);
	printf("\nThe new value of number is %d \n", num);
	return 0;
}
