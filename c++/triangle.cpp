#include <iostream>
using namespace std;
int main() {
    cout<<"enter the number:";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int k=0;k<=i;k++){
            cout<<"  ";
        }
        for(int j=1;j<=n-i;j++){
            cout<<j<<" ";
        }cout<<endl;
    }

    return 0;
}