#include <bits/stdc++.h>
using namespace std;
    void max(int arr[],int size){
        int max=arr[0];
        for (int   i = 0; i < size-1; i++)
        {
            if (max<arr[i+1])
            {
               max=arr[i+1];
            
            }

        
    }
       cout<<"maximum: "<<max<<endl;
}
    void  min(int arr[], int size){
        int min=arr[0];
        for (int i = 0; i < size-1; i++)
        {
           if(min>arr[i+1])
           {
               min=arr[i+1];
           }

        }
           cout<<"minimum: "<<min<<endl;
        
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
       max(arr,size);
       min(arr,size);
        
 
    return 0;
}