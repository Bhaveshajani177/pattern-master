/*

     *
    * *
   *   *
  *     *
 *********

*/

#include <iostream>
using namespace std;

int main(){

    int n;
    cout <<"Enter value = ";
    cin >>n;

    for(int i=1; i<=n; i++){
        for(int j=n; j>=i; j--){
            cout <<" ";
        }
        for(int k=1; k<=((i*2)-1); k++){            
            if(k==1 || k == (i*2)-1){
                cout <<"*";                
            }
            else{                
                if(i==n){
                    cout <<"*";    
                } 
                else{
                    cout <<" ";
                }                
            }
        }
        cout <<"\n";
    }
    return 0;

}