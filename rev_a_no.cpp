#include<iostream>
using namespace std;
int main(){
    int sum=0,n,r=0;
    cout<<"Enter a number to reverse";
    cin>>n;
    while(n>0){
        sum=(sum*10)+n%10;
        n=n/10;
    }
    cout<<sum;
}