#include<iostream>
using namespace std;
int main(){
    int i,j,k=1,n;
    cout<<"Enter a number";
    cin>>n;
    for(i=1;i<=n;i++){
        k=1;
        for(j=1;j<=n;j++){
            if(j<=n-i){
                cout<<" ";
            }
            else{
                cout<<k<<" ";
                k++;
            }
            
        }
        cout<<endl;
    }
    return 0;
}
/* output
    1 
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5
*/