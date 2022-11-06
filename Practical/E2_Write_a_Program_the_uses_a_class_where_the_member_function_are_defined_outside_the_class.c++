#include <iostream>
using namespace std;

class outside
{
    int x, y, s;

public:
    void get();
    void sum();
    void show();
};

void outside::get()
{
    cout << "Enter the value of x: "<<endl;
    cin >> x;
    cout << "Enter the value of y: "<<endl;
    cin >> y;
}

void outside::sum()
{
    s = x+y;
}

void outside::show()
{
    cout<< "The sum of two numbers is: " << s;
}

int main()
{
    outside p;

    p.get();
    p.sum();
    p.show();

    return 0;
}