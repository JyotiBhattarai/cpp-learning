#include<iostream>
using namespace std;
void changeValue (int*p)
{
	*p=*p+10;
	cout<<"pointer value:"<<*p<<endl;
	
}
int main()
{
	int num;
	cout<<"Enter value:";
	cin>>num;
	cout<<"original value :"<<num<<endl;
	changeValue (&num);
	return 0;
}