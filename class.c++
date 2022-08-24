#include <iostream>

using namespace std;

class News
{

public:
    void New()
    {

        int a = 4;
        int b = 5;
        int c = a + b;

        cout << c;
    }
};

int main()
{
    News num;

    num.New();
   

    return 0;
}
