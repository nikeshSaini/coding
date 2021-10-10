#include <iostream>
using namespace std;
int main() {
    cout<<"enter the number:";
    int n;
    cin>>n;
    for(int i=n;i>0;i--){
        for(int k=i;k<n;k++){
            cout<<" ";
        }
        
        for(int j=i;j>0;j--){
            cout<<j;
        }cout<<endl;
    }

    return 0;
}