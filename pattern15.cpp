#include<iostream>
using namespace std;
int main(){
    int i,j,l,n;
    cout<<"Enter a number";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j<=n-i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        for(l=1;l<i;l++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=1;i<=n;i++){
        for(j=n;j>=1;j--){
            if(j>n-i+1){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        for(l=n;l>i;l--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}