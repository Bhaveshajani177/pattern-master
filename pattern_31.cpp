/*

*
*
*
*
*****

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number greater than 1 = ";
    cin >> n;

    if(n>1){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(j==1 || i==n){
                    cout <<"*";
                }            
                else{
                    cout <<" ";
                }
            }
            cout <<"\n";
        }
    }
    else{
        cout <<"Please enter valid input";
    }
    return 0;
}