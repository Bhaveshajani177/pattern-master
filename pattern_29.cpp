/*

    *
    *
    *
*   *
*****

*/

#include <iostream>
using namespace std;
int main(){
    
    int n;
    cout <<"Enter number = ";
    cin>>n;

    for(int i=1; i<=n; i++){        
        for(int j=1; j<=n; j++){            
            if(n>8){
                if(j==n || i>n/2+2 && j==1 || i==n){
                    cout <<"*";
                } else{
                    cout <<" ";
                }
            } else{
                if(n<5){
                    if(j==n || i>n/2 && j==1 || i==n){
                        cout <<"*";
                    } else{
                        cout <<" ";
                    }
                } else{
                    if(j==n || i>n/2+1 && j==1 || i==n){
                        cout <<"*";
                    } else{
                        cout <<" ";
                    }
                }
            }     
        }
        cout <<"\n";
    }

    return 0;
}