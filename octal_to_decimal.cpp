#include<bits/stdc++.h>
using namespace std;
int Octaltodecimal(int n){
    int sum=0;
    int a=1;
    while(n>0){
        int b=n%10;
        sum+=a*b;
        a*=8;
        n/=10;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter the octal no";
    cin>>n;
    cout<<Octaltodecimal(n);
    return 0;
}