#include <bits/stdc++.h>
using namespace std;
 //learn how to access the private element
 //in cpp by default value of the data member is private;
 class student{
      string name;
        public:
        int age;
        
        void setName(string s){
            name =s;
        }
        void printinfo(){
            cout<<"Name ="<<name<<endl;
            cout<<"Age ="<<age<<endl;

        }
 
 };

int main(){
       student a[2];
       for (int i = 0; i < 2; i++)
       {
           string s;
           cout<<"Name:";
           cin>>s;
           a[i].setName(s);
           cout<<"Age:";
           cin>>a[i].age;
       }

       cout<<endl<<"**************************Student information:**************************"<<endl;
       for (int i = 0; i < 2; i++)
       {
           a[i].printinfo();
       }
       

       
        
 
    return 0;
}