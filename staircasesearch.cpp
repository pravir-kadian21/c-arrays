#include <iostream>
using namespace std;

void printindexofkey(int a[100][100],int r,int c,int key){
    int i=0,j=c-1;
    while(i<r && j>=0){
        if(a[i][j]==key){
            cout << "found at index " <<  i << " , " << j << endl;
            break; 
        }
        if(a[i][j]>key){
            j--;
        }
        else{
            i++;
        }
    }
    if(j==0 || i==r){
        cout << "not found" << endl;
    }
}
int main() {
    int a[100][100];
    int r,c,key;
    cin>>r>>c;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin >> a[i][j];
        }
    }
    cin>>key;
    printindexofkey(a,r,c,key);
    return 0;

}
