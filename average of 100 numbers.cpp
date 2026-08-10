#include<iostream>
using namespace std;
int main()
{
	int i;
	float num,sum=0.0,avg;
	cout<<"Enter 100 numbers:\n";
	for(i=1;i<=100;i++)
	{
		cin>>num;
		sum=sum+num;
	}
	avg=sum/100;
	cout<<"Average=<<avg";
	return 0;
	
}