#include<iostream>
using namespace std;
int main(){
    // unorder linear array 
    int la[]={2 ,4 ,1 ,7 ,9};
    int size=sizeof(la)/sizeof(la[1]);
    cout<<"Traversing Elements\n";
            //loops for showing the element traversingly
    for(int i=0;i<size;i++){
        cout<<la[i]<<endl;    }
}   