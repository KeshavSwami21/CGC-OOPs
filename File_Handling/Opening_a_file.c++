#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    char name[15];
    int age;

    ofstream out("txt");

    cout << "Enter Name: " << endl;
    cin >> name;

    cout << "\nAge : " << endl;
    cin >> age;

    out << name << endl;
    out << age << endl;

    out.close();

    return 0;
}