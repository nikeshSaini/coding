#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int find){

    for(int i=0;i<n;i++){
        if(arr[i]==find){
            return i;
        }

    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the size of array:\t";
    cin>>n;
    int arr[n];
    cout<<"Enter the values of array:\t";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to find:\t";
    int find;
    cin>>find;
    cout<<"The element is at index = "<<linearSearch(arr,n,find);
}