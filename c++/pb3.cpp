#include <iostream>
using namespace std;
int main() {
    cout<<"enter the number:";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){  
        for(int j=0;j<i+1;j++){
            cout<<n-i;
        }cout<<endl;
    }

    return 0;
}