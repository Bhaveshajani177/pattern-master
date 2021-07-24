/*

*****
|
|  --
|   |
*****

*/

#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter number = ";
    cin >> n;

    if (n > 1 && n > 2)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (i == 1 || i == n || i == (n / 2 + 1))
                {
                    if (i == 1 || i == n)
                    {
                        cout << "*";
                    }
                    else
                    {
                        if (j == 1)
                        {
                            cout << "|";
                        }
                        else if (j > n / 2 + 1)
                        {
                            cout << "-";
                        }
                        else
                        {
                            cout << " ";
                        }
                    }
                }
                else
                {
                    if (j == 1 || j == n)
                    {
                        if (j == n)
                        {
                            if (i <= n / 2)
                            {
                                cout << " ";
                            }
                            else
                            {
                                cout << "|";
                            }
                        }
                        else
                        {
                            cout << "|";
                        }
                    }
                    else
                    {
                        cout << " ";
                    }
                }
            }
            cout << "\n";
        }
    }
    else
    {
        cout << "Please enter valid input";
    }
}