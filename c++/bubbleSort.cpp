#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n){
    int temp;
    int count=1;
    //sorting algorithm
    int counter=0;

  while(count<n)
    { 
        for (int j = 0; j <n-count; j++)
        {
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                counter++;
                
            }
        }
        count++;
        
    }                                                                                   
    //priting sorted array
    for (int i = 0; i < n; i++)
       {
           cout<<arr[i]<<"  ";
       }
    cout<<"\nNumber of swaps performed:"<<counter<<endl;
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];

    }
    //function to sort array using bubble sort method
    bubbleSort(arr,n);
    
    
}