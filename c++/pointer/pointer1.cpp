//pointer and array
#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3};
    // int *ptr=a;//here array containsbase address already so we dont need to use &(ampersand)
    cout<<*(a+1)<<endl; //here 1 which is of 4 bytess added to base address of array
    cout<<*a;
    //we can directly use array as pointer cause array already contain the base adress
}