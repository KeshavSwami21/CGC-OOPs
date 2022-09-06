#include <iostream>
using namespace std;

int i, n;
int arr[100];
class NaF
{

public:
    void INPUT()
    {
        cout << "How many numbers you wnat to enter: ";
        cin >> n;

        for (i = 0; i < n; i++)
        {

            cout << "Enter the " << i + 1;
            if (i == 0)
            {
                cout << "st value of array: ";
            }
            else if (i == 1)
            {
                cout << "nd value of array: ";
            }
            else if (i == 2)
            {
                cout << "rd value of array: ";
            }
            else
            {
                cout <<"th value of array: ";
            }

            cin >> arr[i];
        }
    }

    void LOGIC()
    {
        for(i=0; i < n; i++)
        {
            if(arr[i] == 19 || arr[i] == 5)
            {
                cout << "True";
                break;
            }
            else
            {
                cout << "False";
            }
        }
    }
};

int main()
{
    NaF nAf;

    nAf.INPUT();
    nAf.LOGIC();

    return 0;
}