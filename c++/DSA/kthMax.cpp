#include <bits/stdc++.h>
using namespace std;
void kthSmallest(int arr[],int size,int k){
    int temp;
    int count=1;
    while(count<size){
        for (int i = 0; i < size-count;i++)
        {
            if (arr[i]>arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
            
        }
        count++;
        
    }


    cout<<"kthSmallest:"<<arr[k-1]<<endl;
    
}
 
int main(){
 
        int size;
        cout<<"enter the size of array";
        cin>>size;
        int arr[size];
        cout<<"enter the element of array; ";
        for (int  i = 0; i < size; i++)
        {
            cin>>arr[i];
        }
        int k;
        cout<<"enter the kth value:";
        cin>>k;

        kthSmallest(arr,size,k);
        
 
    return 0;
}