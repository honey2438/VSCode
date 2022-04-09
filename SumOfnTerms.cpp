#include<iostream>
using namespace std;
int sum(int n){
    int temp=n*(n+1)/2;
    return temp;
}
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    cout<<"the sum is "<<sum(n);
    return 0;
}