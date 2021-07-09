#include <iostream>
using namespace std;

int main()
{

    int j, k, n;

    cout << "Enter number = ";
    cin >> n;

    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            cout << j <<" ";
        }
        cout <<"\n";
    }

    return 0;
}