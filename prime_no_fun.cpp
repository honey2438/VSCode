#include<iostream>
using namespace std;
bool isprime(int i){
    for(int j=2;j<i;j++){
        if(i%j==0){
            return false;
        }
    }
   return true;
}
int main(){
int m,n;
cout<<"Enter two numbers ";
cin>>m>>n;
for(int i=m;i<=n;i++){
    if(isprime(i)){
        cout<<i<<" ";

    }
 }
 return 0;
    
}