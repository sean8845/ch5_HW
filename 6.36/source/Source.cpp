#include<iostream>
#include<string>
using namespace std;
void stringReverse(string a, int index){
    if (index == -1)return;
    printf("%c",a[index]) ;
    stringReverse(a, index - 1);
}
int main(){
    string a;
    printf("��J�Ů�{���N����\n��J�@��r�šG");
    while (getline(cin,a)){        
        if (a == " ")break;
        stringReverse(a, a.length()-1);
        printf("\n");
    }
}