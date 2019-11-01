#include <iostream>
using namespace std;

void read2darray(int a[10][10],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin >> a[i][j];
        }
    }
}

void print2darray(int a[10][10],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int a[10][10];
    int r,c;
    cin>>r>>c;
    read2darray(a,r,c);
    print2darray(a,r,c);

    return 0;
}
