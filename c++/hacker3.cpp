#include<bits/stdc++.h>
using namespace std;
long long int fact(int n){
    long long int factorial[1]=1; 
    for(int i=n;i>0;i--){
        factorial[1]*=i;
        // cout<<"fact"<<factorial<<" ";
    }
    type= factorial;
}
int main(){
    int n;
    cin>>n;
cout<<fact(n);
}