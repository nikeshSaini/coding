#include<iostream>
using namespace std;
void searchingSort(int arr[],int n){
    int temp;
    //ssorting alorithm 
        for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j <n; j++)
        {
            if(arr[i]>arr[j]){
                 temp= arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        
    }
    //printing sorted array
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

}
int main(){
    int n,i=0;
    cin>>n;
    int arr[n];
    while(i<n){
        cin>>arr[i];
        i++;
    }
    searchingSort(arr,n);
    
    

}