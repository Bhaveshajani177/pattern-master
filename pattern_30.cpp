/*

*     *
*   *
* *
*
* *
*   *
*     *

*/

#include <iostream>
using namespace std;

int main(){

    int n, top=0, down=0;
    cout <<"Enter odd ( 3,5,7,... )number = ";
    cin >>n;
    top = n;
    down = 3;

    if(n%2 != 0 && n>1){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(j==1){
                    cout <<"*";
                }
                else if(j==top){
                    cout <<"*";
                    top = top-2;
                }
                else if(i>n/2+1 && j==down){                    
                    cout <<"*";
                    down = down+2;
                    break;
                }
                else{
                    cout <<" ";
                }
            }            
            cout <<"\n";
        }
    }
    else{
        cout <<"please enter odd number";
    }

    return 0;
}