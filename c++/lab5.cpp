#include<iostream>
using namespace std;
int my_variable = 10; // Global x
int main()
{
 int my_variable = 100; // Local x
 cout << "Value of global my_variable is " << ::my_variable<<endl;
 cout << "Value of local my_variable is " << my_variable<<endl;
 return 0;
#include<iostream>
using namespace std;
int var1 = 7; // Global x
int main()
{
 int var2 = 77; // Local x
 cout << "Value of global variable is " << ::var1<<endl;
 cout << "Value of local variable is " << var2<<endl;
 return 0;
}