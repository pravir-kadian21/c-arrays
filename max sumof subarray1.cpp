#include <iostream>
using namespace std;
int main() {
    int a[1000];
    int n,msum=0,left=0,right=0;
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int csum=0;
            for(int k=i;k<=j;k++){
                csum=csum+a[k];
            }
            if(csum>msum){
                msum=csum;
                left = i;
                right = j;
            }
        }
    }
    cout << msum << endl;
    for(int i=left;i<=right;i++){
        cout << a[i] << ",";
    }
}
