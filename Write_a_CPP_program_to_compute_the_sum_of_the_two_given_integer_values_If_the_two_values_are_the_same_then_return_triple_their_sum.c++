#include <iostream>

using namespace std;

class CTS
{
public:
    int num1, num2;

    // Intializing Iput and Logic functions
    void Input();
    void Logic();
};

// Defining Input function
void CTS::Input()
{
    // Getting the fisrt number from user
    cout << "Enter the first number: ";
    cin >> num1;

    // Getting the second number from user
    cout << "Enter the second number: ";
    cin >> num2;
}

// Defining Logic function
void CTS::Logic()
{
    if (num1 != num2)
    {
        cout << "\n"
             << num1 << " and " << num2 << " are not equal. So,\nThe sum of the " << num1 << " and " << num2 << " is: " << num1 + num2;
    }
    else
    {
        cout << "\n"
             << num1 << " and " << num2 << " are equal. So,\nThe triple the sum of " << num1 << " and " << num2 << " is: " << (num1 + num2) * 3;
    }
}

int main()
{
    char opt[3];
    cout << "This program is to compute the sum of the two given values.\nIf the two values are the same, then return triple their sum.\n\n";

    // Initializing the "CTS" class as cts
    CTS cts;

Repeat:

    // Calling Input and Logic functions
    cts.Input();
    cts.Logic();

    
Decision:
    cout << "\n\nDo you find the sum again (y/n): ";
    cin >> opt;

    // Storing the first character of the array "opt" to r_opt to convert it to lowercase
    char r_opt = opt[0];

    switch (tolower(r_opt))
    {
    case 'y':
        cout<<endl;
        goto Repeat;
        break;

    case 'n':
        break;

    default:
        cout << "\nPlease input correct option.\n";
        goto Decision;
        break;
    }

    cout << "\nThanks for using me:D\n";

    return 0;
}