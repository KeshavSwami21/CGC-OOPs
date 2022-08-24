#include <iostream>

using namespace std;

class GAT
{

    int a, b, c;

public:
    void Input()
    {
        cout << ("Enter the first number: ");
        cin >> (a);
        cout << (endl);

        cout << ("Enter the Second number: ");
        cin >> (b);
        cout << (endl);

        cout << ("Enter the third number: ");
        cin >> (c);
        cout << (endl);
    }

    void Logic()
    {
        if (a > b)
        {
            if (a > c)
            {

                cout << a << " is greater then " << b << " and " << c;
            }

            else
            {
                cout << c << " is greater then " << a << " and " << b;
            }
        }
        else if (b > a)
        {
            if (b > c)
            {
                cout << b << " is greater then " << a << " and " << c;
            }
            else
            {

                cout << c << " is greater then " << a << " and " << b;
            }
        }
    }
};

int main()
{
    GAT gat;

    gat.Input();
    gat.Logic();

    return 0;
}