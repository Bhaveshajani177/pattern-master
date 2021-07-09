/*
    333
    22
    1
*/

#include <iostream>
using namespace std;

int main()
{

    int n;
    char ch = 'A';

    cout <<"Enter number = ";
    cin>>n;

    for (int i = n; i >= 1; i--)
    {
        for (int j = n; j >= (n-i)+1; j--)
        {
            cout <<" "<<i;
        }

        cout <<"\n";
    }
    return 0;
}