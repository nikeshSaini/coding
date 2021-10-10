#include<bits/stdc++.h>
using namespace std;
void sorting(vector<int> c){
    for(int i=0;i<c.size();i++){        
        for(int j=i+1;j<c.size();j++)
        {
            if(c[i]>c[j])
            {
                int temp  =c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }
    //priinting sort
   for (int i = 0; i < c.size(); i++)
   {
       cout<<c[i]<<" ";
   }
   
    
}

int main(){
    int n,a;
    cin>>n;
    //vector intialize
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    sorting(v);
}