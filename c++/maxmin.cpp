/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
void sort(int size){
    
    int arr[size],temp;
    for(int i=0;i<size;i++)//input entry
    {
        cin>>arr[i];
    }


    for(int i=0;i<size;i++)//sorting
	{		
		for(int j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				temp  =arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
    
    //min function

       int sum_min=0;
       for(int i=0;i<size-1;i++){
           sum_min+=arr[i];
                        }
cout<<sum_min<<" ";
   //max function

       int sum_max=0;
       for(int i=1;i<size;i++){
           sum_max+=arr[i];
                        }

cout<<sum_max<<" ";


	
}    

int main(){
    int n=5;
    sort(n);
    return 0;
}
