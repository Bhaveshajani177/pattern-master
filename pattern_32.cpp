/*

*   *
** **
* * *
*   *
*   *

*/

#include <iostream>
using namespace std;
int main(){

    int n, iLcount = 2, iRcount = 2, jcount = 2, jdec;
    cout<<"Enter odd number (3,5,7,...) = ";
    cin >>n;
    jdec = n-1;

    if(n>1 && n%2 != 0){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(j==1 || j==n){
                    cout <<"*";
                }
                else if(i==n/2+1 && j==n/2+1){
                    cout <<"*";
                }                
                else if(i==iLcount && j==jcount){
                    cout <<"*";
                    iLcount = iLcount+1;
                    jcount = jcount+1;                                        
                }
                else if(i==iRcount && j==jdec){
                    cout <<"*";
                    iRcount = iRcount+1;
                    jdec = jdec-1;
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