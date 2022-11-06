#include <iostream>
using namespace std;

class def
{
    int x, y;

public:
    def(int a, int b = 0)
    {

        x = a;
        y = b;
    }
    void show()
    {
        cout << x << endl;
        cout << y << endl;
    }
};
int main()
{
    def p(5);
    def q(5, 6);
    p.show();
    q.show();

    return 0;
}