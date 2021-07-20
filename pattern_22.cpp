/*

*****
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
    cout << "Enter number = ";
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==1 || i==n){
                cout <<"*";
            }
            else{
                for(int k=1; k<2; k++){
                    if(j==1){
                        cout<<"*";
                    }else{
                        cout<<" ";
                    }
                }
            }
        }
        cout<<"\n";
    }

    return 0;
}