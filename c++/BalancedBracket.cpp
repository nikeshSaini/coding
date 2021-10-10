#include <bits/stdc++.h>
#include <string.h>

using namespace std;

void isBalanced(char s[],int len) {
    int count1=0;
    int count2=0;

    for (int i = 0; i < len; i++)
    {
        if(!strcmp(s[i],"(")) {
        count1++;
    }
        else if(!strcmp(s[i],"(")){
        count2++;
    }
    }
    
    
    cout<<"Count1: "<<count1<<" Count2: "<<count2<<endl;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        int size;
        cin>>size;
        char  arr[size];
       for(int i=0;i<size;i++)
        {
           cin>>arr[i];
        }
        isBalanced(arr,size);
        

    }
   
    return 0;
}