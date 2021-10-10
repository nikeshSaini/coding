#include<bits/stdc++.h>
using namespace std;

int  main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxno=INT_MIN;
    int minno=INT_MAX;//int max ,min are in built which allocate max and minvalue possible
    for(int i=0;i<n;i++){
         maxno=max(maxno,arr[i]);//this max function will compare the maxno and arr[i] and assign to maxno {maximum value from two}
         minno=min(minno,arr[i]);
        /* if(maxno<arr[i]){
            maxno=arr[i];} 
        if(minno>arr[i]){
            minno=arr[i];} */
    }
   cout <<"max:"<<maxno<<endl<<"min:"<<minno<<endl;

}