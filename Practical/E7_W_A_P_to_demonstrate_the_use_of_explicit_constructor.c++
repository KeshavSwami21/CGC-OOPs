#include <iostream>
#include <conio.h>
using namespace std;
class A
{
    int a, b;

public:
    A(int x, int y)
    {
        a = x;
        b = y;
        cout << "The values of a and b are: \n";
        cout << a << endl;
        cout << b << endl;
    }
    void sum()
    {
        cout << "Sum is: " << a + b;
    }
};
int main()
{

    A al = A(20, 10);
    cout << endl;
    al.sum();
    return 0;
}