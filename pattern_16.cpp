/*
     1
    123
   12345
  1234567
 123456789
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    
    cout <<"Enter number = ";
    cin >>n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i) - 1; k++)
        {
            cout << k;
        }
        cout << "\n";
    }

    return 0;
}