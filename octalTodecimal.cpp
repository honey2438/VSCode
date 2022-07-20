#include<iostream>
#include<math.h>
using namespace std;
int octalToDecimal(int n){
    int sum=0;
    int i=0;
    while(n>0){
        sum+=(n%10)*pow(8,i);
        i++;
        n/=10;
    }
    return sum;
}
int main(){
int n;
cout<<"Enter the octal no";
cin>>n;
cout<<octalToDecimal(n);
return 0;
}