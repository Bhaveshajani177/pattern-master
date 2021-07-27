/*

-----
  |
  |
  |
-----

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter odd (3,5,7,...) number = ";
    cin >> n;

    if (n > 2 && n%2 != 0)
    {
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(i==1 || i==n){
                    cout <<"-";
                }else{
                    if(j==n/2+1){
                        cout <<"|";
                    }else{
                        cout <<" ";
                    }
                }
            }
            cout <<"\n";
        }
    }
    else
    {
        cout << "Please enter valid input";
    }
}