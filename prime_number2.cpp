#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter a number";
    cin>>n;
    for(i=2;i<sqrt(n);i++){
        if(n%i==0){
            cout<<"The number is non prime";
            break;
        }
        else{
            cout<<"The number is prime";
            break;
        }
    }
}