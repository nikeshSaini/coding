//call by reference 
//this method help us to save some space

#include<iostream>  
using  namespace  std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int first,second;
    cout<<"enter the first number\n";
    cin>>first;
    cout<<"enter the second number\n";
    cin>>second;

    int *ptrFirst=&first;
    int *ptrSecond=&second;

    swap(ptrFirst,ptrSecond);
        // swap(&first,&second); 
    cout<<"First "<<first<<"\nSecond "<<second<<endl;
} 

/* method 2 little short

replace line 18-21 by .........simply passing the address of varible without creating pointer

    swap(&first,&second); */