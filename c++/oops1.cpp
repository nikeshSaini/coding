#include <bits/stdc++.h>
using namespace std;

class student{
    public:
    string name;
    int age;

    void getinfo(){
        cout<<"Name:";
        cin>>name;
        cout<<"Age:";
        cin>>age;

    }
    void showinfo(){
        cout<<"Name:"<<name<<endl;
        
        cout<<"Age:"<<age<<endl;
       
    }
};
 
int main(){
         student a[3];
         for (int i = 0; i < 3; i++)
         {
             a[i].getinfo();
         }
         cout<<endl<<"Students information:"<<endl;
         for (int i = 0; i < 3; i++)
         {
             a[i].showinfo();
         }
         
        
 
    return 0;
}