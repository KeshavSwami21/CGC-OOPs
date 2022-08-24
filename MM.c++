#include <iostream>
using namespace std;
int main()
{
    int n, m, mult[10][10];

    // Storing elements of first matrix.
    cout << "Enter the first matrix rows: ";
    cin >> n;
    cout << "Enter the first matrix colums: ";
    cin >> m;

    int arr[n][m];

    cout << "Enter the matrix elemts by adding space after each element: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Storing elements of Second matrix.
    int p, q;

    cout << "Enter the Second matrix rows: ";
    cin >> p;
    cout << "Enter the Second matrix colums: ";
    cin >> q;

    int arry[p][q];
    cout << "Enter the matrix elemts by adding space after each element: \n";
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cin >> arry[i][j];
        }
    }

    if (m == p)
    {
        // Initializing elements of matrix mult to 0.
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < q; ++j)
            {
                mult[i][j] = 0;
            }

        // Multiplying matrix a and b and storing in array mult.
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < q; ++j)
                for (int k = 0; k < m; ++k)
                {
                    mult[i][j] += arr[i][k] * arry[k][j];
                }

        cout << endl
             << "Output Matrix: " << endl;
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < q; ++j)
            {
                cout << " " << mult[i][j];
                if (j == q - 1)
                    cout << endl;
            }
    }
    return 0;
}