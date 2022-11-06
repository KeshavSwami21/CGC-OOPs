#include <iostream>
using namespace std;

class Time
{
    int min;
    int sec;
    public:

    Time (int m, int s)
    {
        min = m;
        sec = s;
    }

    operator int ()
    {
        int second (min * 60 + sec);

        return (second);
    }

    void show ()
    {
        cout << "Time in seconds: ";
    }
};

int main()
{
    int min;

    Time t1 (300, 15);

    t1.show();

    int second = t1;

    cout << second;

    return 0;
}