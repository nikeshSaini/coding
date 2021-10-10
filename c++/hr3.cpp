#include <iostream>

using namespace std;
int main(){
    int size;
    int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0;
    cout<<"enter the size";
    cin>>size;
    int a[size];
    for(int i=0; i<size;i++){
        cin>>a[i];
        if(a[i]==1){
            c1++;
        }
        if(a[i]==2){
            c2++;
        }if(a[i]==4){
            c4++;
        }if(a[i]==3){
            c3++;
        }if(a[i]==5){
            c5++;
        }if(a[i]==6){
            c6++;
        }if(a[i]==7){
            c7++;
        }if(a[i]==8){
            c8++;
        }if(a[i]==9){
            c9++;
        }
    }

        for(int i=0;i<size+2;i++){
            int x;
            if(a[i+1]>a[i+2]){
                x=a[i+1];
                a[i]=x;
                
            }
            else if(a[i+1]==a[i+2]){
                 x=a[i+1];
                 a[i]=x;
                 
            }
            else{
                x=a[i+2];
                a[i]=x;
                
            }
                
            }
            for(int i=0;i<size;i++){
                cout<<a[i]<<endl;
            }
            
    }