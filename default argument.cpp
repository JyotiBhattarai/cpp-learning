#include<iostream>
using namespace std;
class Sample
{
	int a,b;
	public:
		void getdata(int x,int y=10)
		{
			a=x;
			b=y;
		}
		void showdata()
		{
			cout<<"x is ="<<a<<endl;
			cout<<"y is ="<<b<<endl;
		}
};
int main()
{
	Sample s;
	s.getdata(20);
	s.showdata();
	return 0;
}