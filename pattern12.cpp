#include<iostream>
using namespace std;
int main(){
    int i,j,k,n;
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
        for(k=1;k<=n-i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}