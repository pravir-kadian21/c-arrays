#include <iostream>
using namespace std;
int main() {
    char ch[]={'p','r','a','v','i','r','\0'};
    cout << ch << endl;

    cout << sizeof(ch) << endl;

    char ch1[]="pravir kadian";
    cout << ch1 << endl;

    cout << sizeof(ch1) << endl;


    char ch4[1000];
    cin.getline(ch4,1000);
    cout << ch4 << endl;

    char ch5[1000];
    cin.getline(ch5,1000,'.');
    cout << ch5 << endl;
}
