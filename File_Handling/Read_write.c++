#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char ch;

    ofstream out("demo text");

    if (out.is_open())
    {
        cout << "Hi" << endl;
        cout << "How are you." << endl;

        out.close();
    }
    else  
    {
        cout << "Unable to open the file.";

        ifstream in("demo text");
    }
    
}