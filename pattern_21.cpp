/*

****
|   |
****
|   |
****

*/

#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter odd (1,3,5,7,...) number = ";

    cin >> n;

    if (n % 2 != 0)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i == 1 || i == (n / 2) + 1 || i == n)
            {
                for (int j = 1; j <= n - 1; j++)
                {
                    cout << "*";
                }
            }
            else
            {
                for (int j = 1; j <= n; j++)
                {
                    if (j == 1 || j == n)
                    {
                        cout << "|";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
            }
            cout << "\n";
        }
    } else {
        cout <<"Please enter odd number";
    }

    return 0;
}