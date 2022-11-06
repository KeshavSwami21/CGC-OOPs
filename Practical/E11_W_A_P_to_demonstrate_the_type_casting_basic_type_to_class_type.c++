#include <iostream>
using namespace std;

class Time
{
    int min;
    int sec;

public:
    void set(int, int);
    void show();

    Time()
    {
        cout << "Basic type to class type convertor. \n";
    }

    Time(int s)
    {
        min = s / 60;
        sec = s % 60;
    }
};

void Time ::set(int m, int s)
{
    min = m;
    sec = s;
}

void Time ::show()
{
    cout << "Time :: " << min << "." << sec;
}

int main()
{
    int seconds = 435;
    Time t1;
    t1 = seconds;
    t1.show();

    return 0;
}