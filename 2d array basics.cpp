#include <iostream>
using namespace std;
int main() {
    char a[2][5]={{'a','b','c','d','\0'},{'e','f','g','h','\0'}};
    cout << a[0][0] << endl;
    cout << a[0] << endl;//will print the 1 row until it finds null

    char b[10][100]={
        "apple",
        "banana",
        "pineapple",
        "guava",
        "shake"
    };
    cout << b[0] << endl;
    cout << b[4] << endl;

    cin.getline(b[5],100);
    cout << b[5] << endl;
}
