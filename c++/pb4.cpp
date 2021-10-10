#include<iostream>
using namespace std;
int main(){
    cout<<"enter the number:";
    int n;
    cin>>n;
    
    for(int i=1;i<2*n;i+=2){
            for(int j=1; j<=i;j++){
                cout<<j; 
            }
        cout<<endl;
        }
    for(int i=2*n-3;i>0;i-=2){
            for(int j=1; j<=i;j++){
                cout<<j; 
            }
        cout<<endl;

    }
}