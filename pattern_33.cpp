/*

*   *
**  *
* * *
*  **
*   *

*/

#include <iostream>
using namespace std;
int main(){

    int n, iLcount = 2, jcount = 2;
    cout<<"Enter odd number (3,5,7,...) = ";
    cin >>n;

    if(n>2){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(j==1 || j==n){
                    cout <<"*";
                }                
                else if(i==iLcount && j==jcount){
                    cout <<"*";
                    iLcount = iLcount+1;
                    jcount = jcount+1;                                        
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
}