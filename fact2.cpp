#include<iostream>
using namespace std;
int fact(int n){
    int factorial;
    if(n>0){
    factorial=fact(n)*fact(n-1);
    }

    return factorial;
}
int main(){int n;
    cout<<"Enter a number to get factorial";
    cin>>n;
    cout<<fact(n);
    
}