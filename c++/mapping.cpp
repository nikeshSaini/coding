#include<iostream>
#include<map>
using namespace std;
// CPP program to traverse a map using range 
// based for loop 


int main() 
{ 
	int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

	map<int, int> m; 
	for (int i = 0; i < n; i++) 
		m[arr[i]]++; 
		

	cout << "Element Frequency" << endl; 
	for (auto i : m)
		
		cout << i.first << " " << i.second 
			<< endl; 

	return 0; 
} 


