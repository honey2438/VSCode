#include<iostream>
using namespace std;
int decimal_to_octal(int n){
     int rem[10],i=0,j=0;
    
    while(n>0){
        rem[i]=n%8;
        n=n/8;
        i++;

    }
    
    for( i=i-1;i>=0;i--){
        cout<<rem[i];
        j++;
    }
}
int main(){
    int n;
    cout<<"Enter a decimal no";
    cin>>n;
    cout<<"The converted number is ";
    decimal_to_octal(n);
   
    return 0;
}