#include <bits/stdc++.h> 
using namespace std; 
  
void kLargest(int arr[], int n, int k) 
{ 
    // Sort the given array arr in reverse 
    // order. j
    sort(arr, arr + n, greater<int>()); 
  
    // Print the first kth largest elements 
    for (int i = 0; i < k; i++) 
        cout << arr[i] << " "; 
} 
  
// driver program 
int main() 
{ 
    int n,k,i; 
    cout<<"enter no. of elements in array "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter elements"<<endl;
	for (i=0;i<n;i++)
		cin>>arr[i];
	cout<<"enter k: ";
	cin>>k;
    kLargest(arr, n, k); 
} 
