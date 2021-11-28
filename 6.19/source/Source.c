#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {
	srand(time(NULL));
	int a[2], total[11] = { 0 };
	for (int i = 0; i < 36000; i++) {
		a[0] = rand() % 6 + 1;
		a[1] = rand() % 6 + 1;
		switch (a[0] + a[1])
		{
		case 2:
			total[0]++;
			break;
		case 3:
			total[1]++;
			break;
		case 4:
			total[2]++;
			break;
		case 5:
			total[3]++;
			break;
		case 6:
			total[4]++;
			break;
		case 7:
			total[5]++;
			break;
		case 8:
			total[6]++;
			break;
		case 9:
			total[7]++;
			break;
		case 10:
			total[8]++;
			break;
		case 11:
			total[9]++;
			break;
		case 12:
			total[10]++;
			break;
		default:
			break;
		}
	}
	printf("點數：\t");
	for (int i = 2; i <= 12; i++) printf("%d\t", i);
	printf("\n次數：\t");
	for (int i = 0; i <=10; i++) printf("%d\t", total[i]);
	return 0;
}