#include<iostream>
using namespace std;
int sum=0;
int SumOfN(int n){
    if(n<1){
        return sum;
    }
    sum=sum+n;
    SumOfN(n-1);
}
int main(){
int n;
cout<<"Enter the value of n";
cin>>n;
cout<<SumOfN(n);
return 0;
}