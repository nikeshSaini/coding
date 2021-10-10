#include<iostream>//using the constructor
using namespace std;
class student{
      public:
      int id;
      string name;
      int salary;
      student(int i,string n,int s)
      {
             name=n;
             id=i;
             salary=s;
      }

      void disp(){
             cout<<id<<"\t"<<name<<"\t"<<salary<<endl;
      }
};
int main(){int id[2];string name[2];int salary[2];
student s1(13,"sve",133),s2(14,"s13e",1323);
       cout<<"ID"<<"\t"<<"Name"<<"\t"<<"Salary"<<endl;
      s1.disp();
      s2.disp();

}