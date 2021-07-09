#include <iostream>
using namespace std;

int main()
{
    char n;

    cout << "Enter alphabet in UPPERCASE = ";
    cin >> n;

    for (char i = 'A'; i <= n; i++)
    {
        for (char j = 'A'; j <= n; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }

    return 0;
}