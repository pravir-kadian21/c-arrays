#include <iostream>
using namespace std;
int main() {
    int a[1000];
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int key;
    cin >> key;
    int i;
    for(i=0;i<n;i++){
        if(a[i]==key){
            cout << key << " found at " << i << " index" << endl;
            break;
        }
    }
    if(i==n){
        cout << key << " not found" << endl;
    }

}
