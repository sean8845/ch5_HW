#include<stdio.h>
#include<stdlib.h>

int cubeByValue(int n) {
	return n * n * n;
}

int main() {
	int num = 5;
	printf("The original value of number is %d", num);
	num = cubeByValue(num);
	printf("\nThe new value of number is %d\n", num);
	return 0;
}