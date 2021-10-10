#include<iostream>
using namespace std;
int main(){
    cout<<"enter the number:";
    int n,i;
    cin>>n;
    for(int i=0;i<n;i++){
        if(i==0 || i==n-1){
            for(int j=0;j<n;j++){
            cout<<"*";}
            }
        else{
            for(int j=0;j<n;j++){
                if(j==n-i-1){
                cout<<"*";}
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }


}