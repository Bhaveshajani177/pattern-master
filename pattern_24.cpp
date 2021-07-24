/*

*****
|
*****
|
*****

*/

#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter odd number (3,5,7,...) = ";
    cin >>n;

    if(n>1 && n%2 != 0){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(i==1 || i==(n/2+1) || i==n){
                    cout <<"*";
                }else{
                    if(j==1){
                        cout <<"|";
                    }
                }
            }
            cout <<"\n";
        }
    }else{
        cout <<"Please enter valid input";
    }

}