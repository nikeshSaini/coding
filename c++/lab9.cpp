#include<iostream>
using namespace std;
#include<string>
int main(){
    int a,b;
    cin>>a>>b;
    string name;
    cin>>name;
    for (int i = 0; i < name.size()-b; i++)
    {
        cout<<name[i];
    }cout<<" ";
    for (int i = name.size()-2; i < name.size(); i++)
    {
        cout<<name[i];
    }
    
}