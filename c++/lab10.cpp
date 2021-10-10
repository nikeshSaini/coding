#include <iostream>
using namespace std;
class Complex{
    int rl,img;
    //friend function for overloading input operator
    friend istream & operator >>(istream &in,Complex &o)    
    {
        in>>o.rl>>o.img;
    }
    //friend function for overloading output operator
    friend ostream & operator <<(ostream &out,Complex &o)
    {
        out<<o.rl<<"+"<<o.img<<"i";
    }
};
int main()
{cout<<"Name:Nikesh Saini\nUID:20BCS9536\nTeacher ID:E4037\n";
    Complex o1;
    cout<<"Enter real and imaginary number:";
    cin>>o1;    //Inputting a complex number
    cout<<o1;   //Outputs a complex number 
    
    return 0;
}
