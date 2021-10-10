#include<iostream>
using namespace std;
class RECTANGLE{
        int a,b;
        public:
       RECTANGLE(int l,int b){
           cout<<"Area is:"<<l*b;
       }
    };
int main(){ 
    int n1,n2;
    cout<<"Enter the length and breadth:";
    cin>>n1>>n2;
    RECTANGLE a1(n1,n2);
    
}