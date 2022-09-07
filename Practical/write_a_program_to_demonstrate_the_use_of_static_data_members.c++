#include <iostream>
using namespace std;


class abc
{
    static int count;
    int num;
    public:
    void get(int a)
    {
        num =a;
        count++;
    }
    void show()
    {
        cout <<"num="<<num<<endl;
        cout<<"count="<<count<<endl;
    }
};
int abc::count;
int main()
{
    abc p;
    p.get(30);
    p.show();
    abc q;
    q.get(50);
    q.show();
    abc r;
    r.get(80);
    r.show();
    q.show();
    return 0;
}