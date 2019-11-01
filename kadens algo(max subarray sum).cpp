#include <iostream>
using namespace std;
int main() {
    int a[1000];
    int n,msum=0,csum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    for(int i=0;i<n;i++){
        csum=csum+a[i];

        if(csum<0){
            csum=0;
        }
        msum=max(csum,msum);
    }
    cout << msum << endl;
}
