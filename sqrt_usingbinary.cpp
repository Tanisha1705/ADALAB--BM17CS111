#include <stdio.h>
#include<iostream>
#include<time.h>
using namespace std;


int main()
{
clock_t start,end;

start=clock();
{
	int n,first, last;
	float middle;
	
	cout<<"Enter the number :"<<endl;
	cin>>n;
	
	
	first = 0;
	last = n;
	middle = (first+last)/2;
	while (first <= last)
	{
		if(middle*middle< n)
		{
			first = middle + 1;
			
		}
		else if(middle*middle== n)
		{
			cout<<middle<<" is square of"<< n<<endl ;
			break;
		}
		else
		{
			 last = middle - 1;
		}
		middle = (first + last)/2;
	}
	if(first > last)
	{
		(int)middle;
		cout<<"sqrt of the number is "<<middle<<endl;
		
	}
	
}
end=clock();
double t= double(end-start)/double(CLOCKS_PER_SEC);
cout<<"time taken "<<t;
}