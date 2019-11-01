#include <iostream>
using namespace std;

void input2darray(int a[10][10],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
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

void printspiral(int a[10][10],int r,int c){
    int startrow=0,endcol=c-1,endrow=r-1,startcol=0;
    while(startrow<=endrow && startcol<=endcol){
        for(int i=startcol;i<=endcol;i++){
            cout << a[startrow][i] << " ";
        }
        startrow++;
        
        for(int i=startrow;i<=endrow;i++){
            cout << a[i][endcol] << " ";
        }
        endcol--;
        if(startrow<endrow){
            for(int i=endcol;i>=startcol;i--){
                cout << a[endrow][i] << " ";
            }
            endrow--;
        }
        if(startcol<endcol){
            for(int i=endrow;i>=startrow;i--){
                cout << a[i][startcol] << " ";
            }
            startcol++;
        }
    }
}

int main() {
    int a[10][10];
    int r,c;
    cin>>r>>c;
    input2darray(a,r,c);
    print2darray(a,r,c);
    printspiral(a,r,c);

}
