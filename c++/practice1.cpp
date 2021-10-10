#include<iostream>
using namespace std;
void sum(int n){
    int t=0;
    for(int i=1;i<=n;i++){
        t=t+i;
      
    }
      cout<<t<<endl;
}
int main(){
    int n;
    cin>>n;
    sum(n);

}