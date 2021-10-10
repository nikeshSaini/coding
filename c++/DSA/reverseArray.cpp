#include <bits/stdc++.h>
using namespace std;
    void reverseArray(int arr[],int size){
        int temp;
        int start=0;
        int end=size-1;
        while(start<end){
            temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            start++;
            end--;
        }
        
    }

    void printArray(int arr[],int size){
            for (int i = 0; i < size; i++)
            {
                cout<<arr[i]<<" ";
            }
            
    }
 
int main(){
    int size;
    cout<<"enter the size of array: ";
    cin>>size;
    int arr[size];
    cout<<"enter the element of array: ";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    printArray(arr,size);
    reverseArray(arr,size);
    cout<<"\nreverse array"<<endl;
    printArray(arr,size);
    
 

 
return 0;
}