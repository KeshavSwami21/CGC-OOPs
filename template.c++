#include<iostream>
using namespace std;
template<typename T>T add(T a,T b)
{
    return a+b;
}
int main()
{
    int i=2;
    int j=3;
    float m=4.5;
    float n= 3;
    cout<<"Addition of i&j: "<<add(i,j)<<endl;
    cout<<"Addition of m&n: "<<add(m,n);
}