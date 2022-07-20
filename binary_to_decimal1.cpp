#include<iostream>
#include<math.h>
using namespace std;
int binaryToDecimal(int n){
    int sum=0;
    int rem=0;
    int i=0;
    while(n>0){
        rem=n%10;
        if(rem==1){
            sum+=pow(2,i);
        }
        i++;
        n/=10;
    }
    return sum;
}
int main(){
int n;
cout<<"Enter the binary no";
cin>>n;
cout<<binaryToDecimal(n);
return 0;
}