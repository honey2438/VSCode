#include<iostream>
using namespace std;
int sum(int n){
    return n*(n+1)/2;
}
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    cout<<"the sum is "<<sum(n);
    return 0;
}