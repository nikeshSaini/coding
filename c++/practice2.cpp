#include<iostream>
using namespace std;

bool pythg(int n1,int n2,int n3){
    if(n1*n1 +n2*n2==n3*n3 || n2*n2+n3*n3==n1*n1 || n3*n3+n1*n1==n2*n2){
        return true;
    }
    return false;
}



int main(){ 
    int num1,num2,num3;
    cin>>num1>>num2>>num3;
    if(pythg(num1,num2,num3)){
        cout<<"this set is pythogorous triplet";
    }
    else{
         cout<<"this set is not pythogorous triplet";
    }

}