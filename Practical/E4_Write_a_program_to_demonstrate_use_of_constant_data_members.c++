#include <iostream>
using namespace std;
class abc
{
    int data;

public:
    void assign()c
    {
        data = 20;
    }
    void changedata() const
    {
        int data = 40;
        cout << endl
             << "can't change the data constant member function!" << endl;
    }
    void show()
    {
        cout << "Data: " << data;
    }
};

int main()
{
    abc s;
    s.assign();
    s.show();
    s.changedata();

    return 0;
}
