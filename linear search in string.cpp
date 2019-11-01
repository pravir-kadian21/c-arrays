#include <iostream>
#include<cstring>
using namespace std;
int main() {
    string arr[]={"apple","mango","pineapple","guava","banana"};

    for(int i=0;i<5;i++){
        cout << arr[i]<< ",";
    }
    cout << endl;

    string s2;
    getline(cin,s2);
    int i;
    for(i=0;i<5;i++){
        if(arr[i]==s2){
            cout << "found at index " << i << endl;
            break;
        }
    }
    if(i==5){
        cout << "not found" << endl;
    }
}
