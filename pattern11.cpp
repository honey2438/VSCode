#include<iostream>
using namespace std;
int main(){
    int i,j,n,r;
    cout<<"Enter a number ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            r=(i+j)%2;
            if(r==0){
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
    cout<<endl;
    }
    return 0;
}
/* output
1
01
101
0101
10101
*/