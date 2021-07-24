/*

****
*   *
*   *
*   *
****

*/

#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter number = ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)
        {
            for (int j = 1; j <= n - 1; j++)
            {
                cout << "*";
            }
            cout << "\n";
        }
        else
        {
            for (int j = 1; j <= n; j++)
            {                
                if(j==1 || j==n){
                    cout <<"*";
                } else {
                    cout <<" ";
                }
            }
            cout << "\n";
        }
    }

    return 0;
}