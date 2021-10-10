#include <bits/stdc++.h>
using namespace std;
void swap(int arr[],int i,int j){
    int temp;
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
void rearrange(int arr[],int size){
    int j=0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]<0){
            if(i!=j){
                swap(arr,i,j);
            }
            j++;
        }
    }
    

}
void printArr(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";

    }
    
}
 
int main(){
 
        cout<<"enter the element: ";
        int size;
        cin>>size;
        int arr[size];
        for (int i = 0; i < size; i++)
        {
            cin>>arr[i];

        }
        cout<<"old array: ";
        printArr(arr,size);
        rearrange(arr,size);
        cout<<"\nNew array: ";
        printArr(arr,size);

        
 
    return 0;
}

