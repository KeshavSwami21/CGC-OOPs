#include <iostream>
using namespace std;
class student
{
    string NAME;
    int AGE;
    int p;
    public:
    student()
    {
        cout <<"constructor is called \n";
    }
    student(string n,int a)
    {
        NAME = n;
        AGE = a;
    }
    void display()
    {
        cout<<"NAME:"<<NAME<<endl;
        cout<<"AGE:"<<AGE<<endl;
    }
    void * operator new(size_t size)
    {
        cout<<"overloading new operator with size:"<<size<<endl;
        void *p = :: operator new (size);
        //void *p = malloc(size);
        return p;
    }
    void operator delete(void *p)
    {
        cout<<"overloading delete operator:"<<endl;
        free(p);
    }
};
int main()
{
    student *p = new student("Abc" , 24);
    p -> display();
    delete p;
}