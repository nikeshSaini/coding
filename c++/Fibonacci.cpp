#include <iostream>
using namespace std;

int main(){
int n;
int f[n];
f[0]=0;
f[1]=1;
cout<<"enter the number:";

cin>>n;

for(int i=0;i<=n;i++){
    if(i<2){
        cout<<f[i]<<" ";}
   
    else{
        f[i] =f[i-1]+f[i-2];
    cout<<f[i]<<" ";}
    
    

}

}