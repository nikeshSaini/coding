/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
void sort(int size){
    long int arr[size];
    long int c[size];
    long int temp;
    for(int i=0;i<size;i++)//input entry
    {
        cin>>arr[i];
    }
    for(int j=0;j<size;j++){
        c[j]=0;
        for(int i=0;i<size;i++){
            if(j !=i){
                c[j]+=arr[i];
            }
        }
    }
    
//sorting
    for(int i=0;i<size;i++){		
		for(int j=i+1;j<size;j++)
		{
			if(c[i]>c[j])
			{
				temp  =c[i];
				c[i]=c[j];
				c[j]=temp;
			}
		}
	}
//after sorting the sum 
    /* for(int i=0;i<size;i++){
        cout<<c[i]<<" ";
    } */
cout<<c[0]<<" "<<c[4];




}   

int main(){
    int n=5;
    sort(n);
    return 0;
}
