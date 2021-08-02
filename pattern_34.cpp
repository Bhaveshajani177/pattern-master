/*
  
 ***
*   *
*   *
*   *
 ***

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter odd (3,5,7,...) number = ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(i>1 && i<n && j==1){
                cout <<"*";
            }
            else if(i>1 && i<n && j==n){
                cout <<"*";
            }
            else if(i==1 && j>1 && j<n){
                cout <<"*";
            }
            else if(i==n && j>1 && j<n){
                cout <<"*";
            }
            else{
                cout <<" ";
            }
        }
        cout << "\n";
    }
}