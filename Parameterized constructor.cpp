#include <iostream>
using namespace std;
class Sample
{
private:int a,b;
public:Sample(int x,int y)
{
   a=x;
   b=y;
}
void display()
{
   cout<<"\n a=" <<a<<"\n b="<<b;
}
};
int main()
{
    Sample s1(40,30);//implicit constructor call

    Sample s2=Sample (50,60);//explicit
    s1.display();
    s2.display();
    return 0;
}
