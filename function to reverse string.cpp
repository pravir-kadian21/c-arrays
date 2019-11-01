#include <iostream>
#include<cstring>
using namespace std;

void printreverse(char *a,int l){
    for(int i=l;i>=0;i--){
        cout << a[i];
    }
}
int main() {
    char a[100];
    cin>>a;
    int l=strlen(a);
    printreverse(a,l);
}
