#include <iostream>
using namespace std;
int main() {
	int n;
    cout<<"enter the number:";
	cin>>n;
	int f[n];
	f[0]=0;
	f[1]=1;
	for(int i=2;i<=n;i++){
	    f[i]=f[i-1]+f[i-2];
	}
	int ans[1000];
	for(int i=0;i<1000;i++){
	    ans[i]=-1;
	}
	for(int i=0;i<n;i++){
	    ans[f[i]] = 0;
	}
cout<<"Missing Fibonacci Series:"<<endl;
	for(int i=0;i<f[n];i++){
	    if(ans[i]==-1){
	        cout<<i<<" ";
	    }
	}
	return 0;
}