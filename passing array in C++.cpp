#include <iostream>
using namespace std;
void array(int a[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int a[] = {10, 20, 30, 40, 50};
    int size = 5;
    array(a, size);
    return 0;
}
