#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
        int a=1024;
        int *ptr;
        ptr=&a;      //using ampersand we store the address of variable a
        
        cout<<"Address of a: "<<ptr<<"\nand value is: "<<*ptr<<endl;
        //here *ptr is read as (value at pointer ptr)


 
    return 0;
}