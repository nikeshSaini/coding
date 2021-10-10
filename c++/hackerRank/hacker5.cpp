#include<bits/stdc++.h>
using namespace std;
void max(vector<int> a){int count[a.size()];
    for(int i=0;i<a.size();i++){
        count[i]=1;
        // cout<<"count:"<<i+1<<" ";
        for(int j=i+1;j<a.size();j++){
            int temp=a[i]-a[j];
            if(temp<0){temp=-(temp);}
            if(temp<=1){
                cout<<"array: "<<a[j]<<" ";
                count[i]++;
                // cout<<count[i]<<" ";
            }
        }
        cout<<endl;
    }//ending of comparisation loop
int high=0;
    for(int i=0;i<a.size();i++){
        if(high<count[i]){
            high=count[i];
        }
    }



cout<<high;



}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    max(v);

}