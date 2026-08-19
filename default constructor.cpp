
#include <iostream>
using namespace std;
class Sample {
    private:int x,y;
public:
   Sample()
   {
     x=30;
     y=50;
   }
    void display() 
{      
        cout << "\n x="<< x<<"\n y="<<y;
    }
    };
    int main()
    {
        Sample obj1,obj2;
        obj1.display();
        obj2.display();
        return 0;
    }
