#include <iostream>
using namespace std;

class def
{
    int x, y;

public:
    def()
    {
        int a = 5, b = 6;
        
        x = a;
        y = b;
    }

    void show()
    {
        cout << "\n Entered values are: "<< endl;
        cout << x << endl;
        cout << y << endl;
    }
};

int main()
{
    def p;
    def q;

    p.show();
    q.show();

    return 0;
}