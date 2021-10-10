#include<iostream>
using namespace std;
int main(){
    // unorder linear array 
    int la[]={2 ,4 ,1 ,7 ,9};
     int pos;
     int size=sizeof(la)/sizeof(la[1]);
     for (int i=0;i<size;i++){
         cout<<la[i]<<endl;
     }
    cout<<"enter the position want to delete\n";
    cin>>pos;
    
    //loops for deletion of array at position pos
     for (int i=pos-1;i<size;i++){
         la[i]=la[i+1];
     }
     cout<<"after the deletion\n";
     for (int i=0;i<size-1;i++){
         cout<<la[i]<<endl;
     }

}