#include <iostream>

using namespace std;



int main()
{
    int n;
    int rem[n];
    cout<<"enter the number";
    cin >> n;
   
    for(int i=0;i<n;i++){
        int div;
        div/=2;
        rem[i]=div%2;
        
    }
    for(int i=n-1;i>=0;i++){
        cout<<rem[i];
    }

    return 0;
}