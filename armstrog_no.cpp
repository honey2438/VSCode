#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,r,sum=0,temp;
    cout<<"Enter the number";
    cin>>n;
    temp=n;
    while(n>0){
        r=n%10;
        sum+=pow(r,3);
        n=n/10;
    }
    cout<<n<<endl;
    cout<<sum<<endl;
    if(sum==temp){
        cout<<"The number is armstrong";
    }  
    else{
        cout<<"The number is not armstrong";
    }
    }