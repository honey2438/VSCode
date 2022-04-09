#include<iostream>
using namespace std;
int main(){
    int i,j,k,n;
    cout<<"Enter a number to print the pattern";
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
        for(k=1;k<i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}