#include<iostream>
using namespace std;
 int  binarySearch(int arr[],int n,int find){
    int s=0;
    int e=n;
  while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==find){
            return mid;
        }   
        else if( arr[mid]>find){
            e=(mid-1);
        }
        else {
            s=(mid+1);
        }
       
    }
    return -1;
    

}
int main(){
    int n,find;
    cout<<"Size of the array:\t";
    cin>>n;
    int arr[n];
    cout<<"\nInput of arrays:\t";

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"\nEnter the key to find    ";
    cin>>find;
    cout<<"\nElement is present at index value: "<<binarySearch(arr,n,find)<<endl;

    
    
}