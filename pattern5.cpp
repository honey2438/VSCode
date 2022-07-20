#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=n;j>0;j--){
            if(j>i+1){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
   cout<<endl;

    }
    return 0;

}
/*output
    *
   **
  ***
 ****
*****

*/