#include<stdio.h>
#include<stdlib.h>
#define SIZE 10;

void swap(int* element1Ptr, int* element2Ptr);
void bubbleSort(int* const array, const int size);

int main(void) {
	int Size = SIZE;
	int i,a[] = { 2,6,4,8,10,12,89,68,45,37 };
	printf("Data items in original order \n");
	for (i = 0; i < Size; i++) printf("%4d", a[i]);
	bubbleSort(a, Size);
	printf("\nData items in ascending order\n");
	for (i = 0; i < Size; i++) printf("%4d", a[i]);
	printf("\n");
}

void bubbleSort(int* const array, const int size) {
	void swap(int* element1Ptr, int* element2Ptr);
	int pass, j;
	for (pass = 0; pass < size - 1; pass++) 
		for (j = 0; j < size - 1; j++)
			if (array[j] > array[j + 1]) swap(&array[j], &array[j + 1]);
}
void swap(int* element1Ptr, int* element2Ptr) {
	int hold = *element1Ptr;
	*element1Ptr = *element2Ptr;
	*element2Ptr = hold;
}