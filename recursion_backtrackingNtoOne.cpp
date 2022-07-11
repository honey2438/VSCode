#include<iostream>
using namespace std;
void BtOnetoN(int i, int n){
    if(i<1){
      return;
    }
BtOnetoN(i-1,n);
cout<<i<<endl;
}
int main(){
    int n;
    cout<<"Enter the value of N";
    cin>>n;
BtOnetoN(n,n);
return 0;
}