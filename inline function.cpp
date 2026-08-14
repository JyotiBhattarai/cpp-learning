#include<iostream>
using namespace std;
class Student
{
private: 
int rollno, age;
public:
 void read();
  void display();
};
inline void Student::read()
{
rollno=10;
age=20;
}
inline void Student::display() 
{
cout<<"\n rollno="<<rollno<<"\nage="<<age;
}
int main()
{
Student s;
s.read();
s.display();
return 0;
}
