#include <iostream>
#include<cstring>
#include<algorithm>
using namespace std;

bool compare(string a,string b){
    return a.length()>b.length();//less than operator is oveloaded in string(use > operator)
}
int main() {
    string s1("hello world");
    cout << s1 << endl;

    string s2="another way";
    cout << s2 << endl;
    cout << s2.length() << endl;//gives the no of charactres in a string excluding null
    for(int i=0;i<s2.length();i++){
        cout << s2[i] << "-";
    }
    cout << endl;

    string s3;
    getline(cin,s3);
    cout << s3 << endl;

    string arr[]={"apple","pineapple","mango","guava","banananana"};
    sort(arr,arr+5,compare);//prints string in decreasing order of length.
    //sort(arr,arr+5);//after sort algo only the sorted arr of sting is printed. not the one from loop
    //from here the string is sorted lexiographically(alphabetically)
    // //is used in front of sort here to see the working of line 26.
    for(int i=0;i<5;i++){//loop for printing the array of string but sort would not work 
        cout << arr[i] << ",";//without this loop
    }
    cout << endl;
    
}
