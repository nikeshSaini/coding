#include<iostream>
using namespace std;
int  main(){
    int n,cnt=1;
    cout<<"enter the number:";
    cin>>n;
    for(int i=0;i<2*n-1;i+=2){
        for(int j=0;j<=i;j++,cnt++){
            if(cnt%2!=0){
                cout<<"1";
            }
            else{
                cout<<"0";
             }
        }cout<<endl;
    }
    for(int i=2*n-3;i>=0;i-=2){
        for(int j=0;j<i;j++,cnt--){
            if(cnt%2!=0){
                cout<<"1";
            }
            else{
                cout<<"0";
             }
        }cout<<endl;
    }
    
    
}