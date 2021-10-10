#include<iostream>
using namespace std;
void merge(int arr[],int l,int mid, int r){
    int n1=mid+1-l;
    int n2=r-mid;
    int a[n1];
    int b[n2];//temp arr
    for (int i = 0; i < n1; i++)
    {
        a[i]=arr[l+i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i]=arr[mid+1+i];
    }
    int i=0;
    int j=0;
    int k=l;


    while(i<n1 &&j<n2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            k++;i++;
        }
        if(a[i]>b[j]){
            arr[k]=b[j];
            k++;j++;
        }

    }
    while(i<n1){
         arr[k]=a[i];
            k++;i++;
    }
    while(j<n2){
         arr[k]=b[j];
            k++;j++;
    }
    
    
}
void mergerSort(int arr[],int l,int r){
    if(l<r){
        int mid=(l+r)/2;
        mergerSort(arr,l,mid);
        mergerSort(arr,mid+1,r);

        merge(arr,l,mid,r);
    }
}
int main(){
    int size;
    cout<<"enter the size of array\t";
    cin>>size;
    int arr[size];
    cout<<"enter the array values\t";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    mergerSort(arr,0,size-1);
     cout<<"sorted arrar:\t";
    for (int i = 0; i < size; i++)
    {
       cout<<arr[i]<<" ";
    }
    

    
}