#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
int r,q;
    cin>>r>>q;//taking the input of row and query
    // loop for row and query 
    int row[r];
    int arr[i][j];
    for(int i=0;i<r;i++){
        cin>>row[i];
        for(int j=0;j<row[i];j++){
            cin>>arr[i][j];
    }
    
}  cout<<"cejc\n";
  
int fr[q],fq[q];
int ans[q];
for (int i = 0; i < q; i++)
{
    for (int j = i; j<=i ; j++)
    {
        cin>>fr[i]>>fq[j];
        ans[i]=arr[fr[i]][fq[j]];
    }
    
    
}

for (int i = 0; i < q; i++)
{
    cout<<ans[i]<<" ";
}

    



 return 0;
}