#include <iostream>
using namespace std;

class Basic_Cal
{
public:
    float num1, num2;
    int opt;

    void Input()
    {

        // Taking the first number for calculation
        cout << "Enter the first number: ";
        cin >> num1;

        // Taking the second number for calculation
        cout << "Enter the second number: ";
        cin >> num2;
    }

    void Logic()
    {
    cal_again:
        // Taking option as input
        cout << "\n\n1. Addition\n2. Substraction\n3. Division\n4. Multiplication\n";
        cout << "\nPlease select the option from above to perform claculation: ";
        cin >> opt;

        switch (opt)
        {
        // Case 1 is for addition
        case 1:
            cout << "\nThe adition of " << num1 << " and " << num2 << " is " << num1 + num2 << "\n";
            break;

        // Case 2 is for substraction
        case 2:
            cout << "\nThe substraction of " << num1 << " and " << num2 << " is " << num1 - num2 << "\n";
            break;
        // Case 3 is for devision
        case 3:
            if (num1 == 0)
            {
                cout << "\nNumbres can't be divided(It's infinte)\n";
            }
            else if (num2 == 1)
            {

                cout << "\nThe Division of " << num1 << " and " << num2 << " is " << num1 << "\n";
            }
            else
            {
                cout << "\nThe Division of " << num1 << " and " << num2 << " is " << num1 / num2 << "\n";
            }
            break;

        // Case 4 is for multiplication
        case 4:
            cout << "\nThe multiplication of " << num1 << " and " << num2 << " is " << num1 * num2 << "\n";
            break;

        default:
            cout << "Please select the correct option.";
            goto cal_again;
            break;
        }
    }
};

int main()
{
    cout << "This is program of simple calculator.\n\n";
    char opt[3];

    // Calling Basic_Cal class with help of "basic_cal" object
    Basic_Cal basic_cal;
    
Repeat:

    // Calling Input Function inside class "Basic_Cal"
    basic_cal.Input();

    // Calling Logic Function inside class "Basic_Cal"
    basic_cal.Logic();

Decision:
    cout << "\nDo you want Repeat an calculation (y/n): ";
    cin >> opt;

    //Storing the first character of the array "opt" to r_opt to convert it to lowercase
    char r_opt = opt[0];

    switch (tolower(r_opt))
    {
    case 'y':
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
}