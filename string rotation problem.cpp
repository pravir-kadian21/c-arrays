#include <iostream>
#include<cstring>
using namespace std;

void rotate(char *a,int k){
    int i=strlen(a);
    while(i>=0){
        a[i+k]=a[i];
        i--;
    }

    i=strlen(a);
    int s=0;
    int j=i-k;
    while(j<i){
        a[s]=a[j];
        s++;
        j++;
    }
    a[i-k]='\0';

}
int main() {
    char a[100]={"hello"};
    int k=2;
    rotate(a,k);
    cout << a << endl;
}
