#include <iostream>
using namespace std;
int main() {
    int r,c;
    int a[100][100],b[100][100],d[100][100];
    cin>>r>>c;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            d[i][j]=a[j][i];
        }
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            b[i][j]=d[i][c-j-1];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}
