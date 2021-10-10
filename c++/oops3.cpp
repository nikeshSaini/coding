#include <bits/stdc++.h>
using namespace std;
//all types of constructors
class student{

    public:
    string name;
    int age;

    student(){
        cout<<"Default constructor;"<<endl;
    }//default constructor

    student(string s , int i){
        cout<<"Parametrised constructor"<<endl;
        name =s;
        age =i;
    }//paramaterized constructor
    student(student &s){
        cout<<"copy constructor"<<endl;
        name =s.name;
        age =s.age;
    }//copy constructor

    ~student(){
        cout<<"Destructor called"<<endl;
    }

    void printinfo(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
    }
};
 
int main(){
 
        student a("nikesh",21);
        a.printinfo();
        student b;
        student c(a);
        c.printinfo();

       

     
        
        
 
    return 0;
}