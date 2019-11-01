#include <iostream>
using namespace std;
int main() {
    char a[100];
    cin >> a;
    int i=0;
    if(a[0]=='9'){
        i++;
    }
    while(a[i]!='\0'){
        int num=a[i]-'0';//converting char to int
        if(num>=5){
            num=9-num;
            a[i]=num+'0';
        }
        i++;
    }
    cout << a << endl;
}
