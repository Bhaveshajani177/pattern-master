/*

 0
 1 1
 2 3 5
 8 13 21 34
 55 89 144 233 377

*/
#include <iostream>
using namespace std;

int main()
{

    int a = 1, b = 1, c, n, count = 0;

    cout << "Enter number = ";
    cin >> n;

    cout << " " << "0" << "\n" << " " << a <<" "<< b << "\n";

    for (int j = 3; j <= n; j++)
    {
        for (int k = 1; k <= j; k++)
        {
            c = a + b;
            cout << " " << c;
            a = b;
            b = c;

        }
        cout << "\n";
    }
    return 0;
}