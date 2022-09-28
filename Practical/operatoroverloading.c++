#include<iostream>
using namespace std;
class complex{
    int i, r;
    public:
    void get()
    {
        cout<<"Enter the values";
        cout<<"r="<<endl;
        cin>>r;
        cout<<"i="<<endl;
        cin>>i;
    }
    void operator ++()
    {
        ++r;
        ++i;
    }
    void operator--()
    {
        --r;
        --i;
    }
    void show()
    {
        cout<<"The value r(a+i)"<<endl;
    }
};
int main()
{
    complex c1()
    c1.get()
    ++c1;
    c1.show();




}