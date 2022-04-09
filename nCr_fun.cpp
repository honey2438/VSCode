#include<iostream>
using namespace std;
int fact(int n){
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}
int main(){
    int n,c,i,j;
    cout<<"Enter the value of n";
    cin>>n;
    for(i=0;i<=n;i++){
        for(j=0;j<=i;j++){
        c=fact(i)/(fact(i-j)*fact(j));
        cout<<c;
        }
        cout<<endl;
    }
    return 0;
    
}