#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string name;
    int age;

    ifstream in("txt");

    in >> name;
    in >> age;

    cout << "Name : " << name << endl;
    cout << "Age : " << age << endl;

    in.close();

    return 0;
}