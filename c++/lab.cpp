#include <iostream>
using namespace std;
// namespace std;


class employee
{
  string name;
  int age;
  string designation;
  double salary;
  
  public:
  void input()
  {cout<<"enter the name";
      getline(cin,name);
      cout<<"enter the age";
      cin>>age;
      cin.ignore();
      cout<<"enter the designation";
      getline(cin,designation);
      cout<<"enter the salary";
      cin>>salary;
  }
  void display()
  {
      cout<<"******************Employee details:*************"<<endl;
      cout<<"S.No\tName\tAge:\tdesignation\tSalary"<<endl;
      cout<<"\t"<<name<<"\t"<<age<<"\t"<<designation<<"\t\t"<<salary<<"\t";
  }
};
int main()
{
    int n;
cout<<"enter the size";
cin>>n;
for (int i=1;i<n;i++){
    employee ei;//creating an object
        ei.input();//calling method
}
for (int i=1;i<n;i++){
    employee ei;
        ei.display();
}
    
    return 0;
}

