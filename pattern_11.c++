/*
    321
    32
    3
*/

#include <iostream>
using namespace std;

int main()
{

    int n;

    cout <<"Enter number = ";
    cin>>n;

    for (int i = n; i >= 1; i--)
    {
        for (int j = n; j >= (n-i)+1; j--)
        {
            cout <<" "<<j;
        }

        cout <<"\n";
    }
    return 0;
}