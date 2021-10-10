#include<iostream>
using namespace std;

int main(){
   
    // unorder linear array 
    int la[]={2 ,4 ,1 ,7 ,9};

    int pos,posV;

    int size= sizeof(la)/sizeof(la[1]);


     //printing of old array
            cout<<("Elements w/o insertion\n");
            for(int i=0;i<size;i++){
                cout<<la[i]<<endl;
            }

    cout<<("enter the position where to insert\n");
    cin>>pos;
    cout<<("enter the value of insertion\n");
    cin>>posV; 

          
    
           
        //loop for insertion of element using transverse method
    for (int i=size;i>=pos;i--){
        la[i] = la[i-1];
    }
   
    la[pos-1]=posV;
    cout<<("\nElements after the insertion of element3\n");
     for(int i=0;i<=size;i++){
         cout<<la[i]<<endl;
     }
    
}
