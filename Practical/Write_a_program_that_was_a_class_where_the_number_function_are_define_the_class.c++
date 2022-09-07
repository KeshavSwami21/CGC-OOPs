#include <iostream>
using namespace std;

class abc
{
    int a, b;

public:
    void get()
    {
        cout << "Enter a: ";
        cin >> a;
        cout << "Enter b: ";
        cin >> b;
    }

    void largest()
    {
        if(a>b)
        {
            cout << "a is greatest";
        }
        else
        {
            cout << "b is greatest";
        }
    }

    void display()
    {
        largest();
    }
};

int main()
{
    abc x;
    x.get();
    x.display();

    return 0;
}