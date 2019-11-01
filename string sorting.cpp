#include <iostream>
#include<algorithm>
#include<cstring>
using namespace std;

bool compare(string a,string b){
    if(a.length()==b.length()){
        return a<b;
    }
    return b.length()>a.length();
}
int main() {
    string arr[]={"apple","banana","mango","pineapple"};
    sort(arr,arr+4,compare);
    for(int i=0;i<4;i++){
        cout << arr[i] << ",";
    }
}


