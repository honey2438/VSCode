#include<bits/stdc++.h>
using namespace std;
Binarytodecimal(int n){
    int sum=0;
    int a=1;
    while(n>0){
        int b=n%10;
        sum+=a*b;
        a*=2;
        n/=10;

    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter the binary no ";
    cin>>n;
    cout<<Binarytodecimal(n);
    return 0;
}