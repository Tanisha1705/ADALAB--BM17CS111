#include <stdio.h>
#include<iostream>
using namespace std;


int main()
{  int n; 
	cout<<"Enter the size of n";
	cin>>n;
	int arr[n];
	cout<<"enter the numbers";
	
	for(int i=0; i<n;i++)
	{
		cin>>arr[i];
	}
	
	int max=-1;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
			max=arr[i];
	}
	cout<<"greatest number is "<<max<<endl;
	return 0;
}
