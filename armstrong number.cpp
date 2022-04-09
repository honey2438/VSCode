#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,r,sum=0;
    cout<<"Enter the number";
    cin>>n;
    while(n>0){
        r=n%10;
        sum=sum+r^3;
        n=n/10;
    }
    if(sum==n){
        cout<<"The number is armstrong";
    }  
    else{
        cout<<"The number is not armstrong";
    }
    }