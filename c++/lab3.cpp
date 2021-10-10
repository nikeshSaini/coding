#include<iostream>

using namespace std;
inline int add(int a,int b) {
    return (a+b);
    }
    inline int sub(int a,int b) {
    return (a-b);
    }
    inline int mul(int a,int b) {
    return (a*b);
    }
    inline float div(float a,float b) {
    return (a/b);
    }
    
int main(){
    cout<<"enter two number:";
    float n1,n2;
    cin>>n1>>n2;
int addition=add(n1,n2);
int substraction=sub(n1,n2);
int multiplication=mul(n1,n2);
float division=div(n1,n2);
    cout<<"addition:"<<addition<<endl<<"substraction"<<substraction<<endl;
    cout<<"multiplication:"<<multiplication<<endl;
    cout<<"division:"<<division;

}