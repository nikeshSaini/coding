#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<2*n;j++){
            if(j<n-i){
                cout<<"(";
                }
            if(j>=n+i){
                cout<<")";
                }  
            else{
                cout<<" ";
            }  
        }cout<<endl;
    }
    for(int i=n-2;i>=0;i--){
        for(int j=0;j<2*n;j++){
        
            if(j<n-i){
                cout<<"(";
            }
            if(j>=n+i){
                cout<<")";
            }
            else{
                cout<<" ";
            }
        }cout<<endl;
    }
      
       
    
}