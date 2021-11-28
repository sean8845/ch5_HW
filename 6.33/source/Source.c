#include<stdio.h>
#include<stdlib.h>
#define SIZE 15;

size_t binarySearch(const int b[], int searchKey, size_t low, size_t high);
void printHeader(void);
void printRow(const int b[], size_t low, size_t mid, size_t high);

int main() {
	int x = SIZE;
	int a[15];
	for (size_t i = 0; i < 15; ++i) {
		a[i] = 2 * i;
	}
	printf("Enter a number between 0 nd 28:");
	int key;
	scanf_s("%d", &key);
	printHeader();
	size_t result = binarySearch(a, key, 0, x-1);
	if (result != -1) printf("\n%d found at index %d \n", key,result);
	else printf("\n%d not found\n", key);
	
}
size_t binarySearch(const int b[], int searchKey, size_t low, size_t high) {
	if (high >= low) {
		size_t middle = (low + high) / 2;
		printRow(b, low, middle, high);
		if (searchKey == b[middle]) return middle;
		else if (searchKey < b[middle]) return binarySearch(b, searchKey, low, middle - 1);
		else return binarySearch(b, searchKey, middle + 1,high);
		}
	return -1;
}
void printHeader(void) {
	puts("\nSubscripts:");
	int x = SIZE;
	for (unsigned int i = 0; i < x; ++i)printf("%3u", i);
	puts("");
	for (unsigned int i = 1; i <= 4 * x; ++i)printf("-");
	puts("");
}
void printRow(const int b[], size_t low, size_t mid, size_t high) {
	int x = SIZE;
	for (size_t i = 0; i < x; ++i) {
		if (i<low || i>high) printf("    ");
		else if (i == mid)printf("%3d*", b[i]);
		else printf("%3d ", b[i]);
	}
	puts("");
}
