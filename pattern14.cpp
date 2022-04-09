#include<iostream>
using namespace std;
int main(){
    int i,j,k,l,n,t;
    cout<<"Enter the number ";
    cin>>n;
    for(i=1;i<=n;i++){
        t=2;
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(k=i;k>=1;k--){

            cout<<k;
        }
        for(l=1;l<i;l++){
            cout<<t;
            t++;
        }
        cout<<endl;
    }
    return 0;
}