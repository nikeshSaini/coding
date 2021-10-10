#include<iostream>
using namespace std;
//function to find largest number
inline int largest(int a,int b,int c) {
    return ((a>b&&a>c)?a:b>c?b:c);
    }

//function to find the smallest number
inline int smallest(int a,int b,int c) {
     return ((a<b&&a<c)?a:b<c?b:c);
    }

int main(){
    int a,b,c;
    cout<<"enter the 3 number :";
    cin>>a>>b>>c;
    int larg =largest(a,b,c);
    int smal =smallest(a,b,c);
    cout<<"largest:"<<larg<<endl<<"smallest:"<<smal;

}