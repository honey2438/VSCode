#include<iostream>
using namespace std;
int main(){
    int n;
     cout<<"Enter the value of n";
     cin>>n;
    for(int i=0;i<n;i++){
        int k=1;
        for(int j=0;j<n;j++){
            if(j<n-i-1){
                cout<<" ";
            }
            else{
                cout<<k;
            }
            k--;
        }
        k+=2;
        for(int l=0;l<=i;l++){
            cout<<k;
            k++;
        }
    }
    return 0;
}
/* output
    1
   212
  32123
 4321234
543212345
*/