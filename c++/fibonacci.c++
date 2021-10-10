#include<iostream>
using namespace std;
void fib(int n){
    int t[n];
    t[0]=0,t[1]=1;



    for(int i=0;i<=n;i++){
        if(i<2){
            cout<<t[i]<<endl;
        }
        else{ 
            t[i]=t[i-1]+t[i-2];
       cout<<t[i]<<endl;
       }
       

    }

}

int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
     fib(n);
}