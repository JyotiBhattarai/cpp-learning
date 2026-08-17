#include<iostream>
using namespace std;
void changeValue(int num)
{
	num =num+10;
	cout<<num<<endl;
}
int main()
{
	int num=100;
	cout<<num<<endl;
	changeValue(num);
	return 0;
}