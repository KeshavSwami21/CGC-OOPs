#include <iostream>

using namespace std;

class GAT
{

    int num1, num2, num3;

public:
    void Input()
    {

        // Taking first number as input from user
        cout << ("Enter the first number: ");
        cin >> (num1);

        // Taking second number as input from user
        cout << ("Enter the Second number: ");
        cin >> (num2);

        // Taking third number as input from user
        cout << ("Enter the third number: ");
        cin >> (num3);
        cout << endl;
    }

    void Logic()
    {

        // Comparing num1 from num2
        if (num1 > num2)
        {
            // Comparing num1 to num3
            if (num1 > num3)
            {

                cout << num1 << " is greater then " << num2 << " and " << num3 << "\n\n";
            }
            // Condition is failed, so num3 is greater
            else
            {
                cout << num3 << " is greater then " << num1 << " and " << num2 << "\n\n";
            }
        }
        // Comparing num2 from num3
        else if (num2 > num3)
        {
            // Comparing num2 from num3
            if (num2 > num3)
            {
                cout << num2 << " is greater then " << num1 << " and " << num2 << "\n\n";
            }
            // Condition is failed, so num3 is greater
            else
            {

                cout << num3 << " is greater then " << num1 << " and " << num2 << "\n\n";
            }
        }
    }
};

int main()
{

    cout << "This program is to find the greatest among three numbers.\n\n";

    // Calling GAT class with help of "gat" object
    GAT gat;
    char opt[3];

Repeat:
    // Calling Input Function inside class "GAT"
    gat.Input();

    // Calling Logic Function inside class "GAT"
    gat.Logic();

Decision:
    cout << "Do you want to compare again (y/n): ";
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