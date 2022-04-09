#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter a number";
    cin>>n;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"The number is non prime";
            break;
        }
        else{
            cout<<"The number is prime";
        }
    }
}