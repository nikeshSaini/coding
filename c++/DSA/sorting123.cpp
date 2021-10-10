#include <bits/stdc++.h>
using namespace std;
void sortof12(int arr[],int size){
    int i,count0=0,count1=0,count2=0;
    for (int i = 0; i < size; i++)
    {
        switch(arr[i])
        {
            case 0 : count0++;break;
            case 1 : count1++;break;
            case 2 : count2++;break;
        }
    }
    i=0;
    while(count0>0){
        arr[i++]=0;count0--;
    }
    while(count1>0){
        arr[i++]=1;count1--;
    }
    while(count2>0){
        arr[i++]=2;count2--;
    }
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}
 
int main(){
 
        cout<<"enter the size: ";
        int size;
        cin>>size;
        int arr[size];

       for (int i = 0; i < size; i++)
       {
           cin>>arr[i];
       }
       sortof12(arr,size);
       
       
        
 
    return 0;
}