#include <iostream>
using namespace std;
int main()
{
    int arr[50], i, elem, pos, tot;

    cout << "Enter the Size for Array: ";
    cin >> tot;

    cout << "Enter " << tot << " Array Elements: ";

    for (i = 0; i < tot; i++)
    {
        cin >> arr[i];
    }

    cout << "\nEnter Element to Insert: ";
    cin >> elem;

    cout << "At What Position : ";
    cin >> pos;

    for (i = tot; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[i] = elem;
    tot++;

    cout << "\nThe New Array is:\n";

    for (i = 0; i < tot; i++)
    {
        cout << arr[i] << "  ";
    }

    return 0;
}