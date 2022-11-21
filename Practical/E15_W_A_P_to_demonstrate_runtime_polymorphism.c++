#include <iostream>
using namespace std;

int main()
{
    int size, arr[50], i, j, temp, index, small, count = 0;

    cout << "Enter Array Size: ";
    cin >> size;

    for (i = 0; i < size; i++)
    {
        if ((i + 1) > 3)
        {
            cout << "Enter the " << i + 1 << "th Element: ";
            cin >> arr[i];
        }
        else if ((i+1) == 1)
        {
            cout << "Enter the " << i + 1 << "st Element: ";
            cin >> arr[i];
        }
        else if ((i+1) == 2)
        {
            cout << "Enter the " << i + 1 << "nd Element: ";
            cin >> arr[i];
        }
        else
        {
            cout << "Enter the " << i + 1 << "rd Element: ";
            cin >> arr[i];
        }
        
    }

    cout << "Array before Sorting: ";
    for (i = 0; i < size; i++)
    {

        cout << arr[i];
    }

    cout << "\nArray after Sorting using slection sort: ";
    for (i = 0; i < (size - 1); i++)
    {
        small = arr[i];
        for (j = (i + 1); j < size; j++)
        {
            if (small < arr[j])
            {
                small = arr[j];
                count++;
                index = j;
            }
        }

        if (count != 0)
        {
            temp = arr[i];
            arr[i] = small;
            arr[index] = temp;
        }

        count = 0;
    }

    for (i = 0; i < size; i++)
    {

        cout << arr[i];
    }

    return 0;
}