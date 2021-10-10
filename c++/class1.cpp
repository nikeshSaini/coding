#include<iostream>
using namespace std;
class student{
       public:
       string name;
       void get(){
              cin>>name;
       }
       void disp(){
              cout<<"student  name is:"<<name<<endl;
       }
};
int main(){
       student s1,s2;
       s1.get();  
       s2.get();
       s1.disp();

       s2.disp();

}

//example 2
/* 

#include<iostream>
using namespace std;
class student{
      public:
      int id;
      string name;
      int salary;
      void get(){
             cin>>id>>name>>salary;
      }
      void disp(){
             cout<<id<<"\t"<<name<<"\t"<<salary<<endl;
      }
};
int main(){
       student s1,s2;
      s1.get();
      s2.get();
       cout<<"ID"<<"\t"<<"Name"<<"\t"<<"Salary"<<endl;
      s1.disp();
      s2.disp();

} */