#include<iostream>
using namespace std;
int m = -9999;
int recursiveMax(int a[], int s)
{
    if (s == 0)return m;
    if (a[s] >= m)m = a[s];
    return recursiveMax(a, s - 1);
}
int main()
{
    int a[10] = { 1,3,66,2,-4,88,123,62,434,-3430 };
    printf("原始陣列：");
    for (int i = 0; i < 10; i++) printf("%d ", a[i]);
    printf("\n最大數值：%d",recursiveMax(a, 9) ); 
}