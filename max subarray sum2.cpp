#include <iostream>
using namespace std;
int main() {
    int a[1000];
    int n,csum=0,msum=0,left=0,right=0;
    cin >> n;
    int csa[1000];
    cin >> a[0];
    csa[0]=a[0];
    for(int i=1;i<n;i++){
        cin >> a[i];
        csa[i]=csa[i-1]+a[i];
    }

    for(int i=0;i<n;i++){
        csum=0;
        for(int j=i;j<n;j++){
            csum=csa[j]-csa[i-1];
            if(csum>msum){
                msum=csum;
                left =i;
                right =j;
            }
        }
    }
    cout << msum << endl;
    for(int i=left;i<=right;i++){
        cout << a[i] << ",";
    }

}
