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
void printwaveform(int a[10][10],int r,int c){
    for(int j=0;j<c;j++){
        if(j==0 || j%2==0){
            for(int i=0;i<r;i++){
                cout << a[i][j];
            }
        }
        else{
            for(int i=r-1;i>=0;i--){
                cout << a[i][j];
            }
        }
    }
}
int main() {
    int a[10][10];
    int r,c;
    cin>>r>>c;
    read2darray(a,r,c);
    print2darray(a,r,c);
    printwaveform(a,r,c);
}
