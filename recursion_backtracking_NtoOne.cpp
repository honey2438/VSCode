#include<iostream>
using namespace std;
void BtNtoOne(int i, int n){
    if(i>n){
        return;
    }
    BtNtoOne(i+1,n);
    cout<<i<<endl;
}
int main(){
    int n,i=1;
    cout<<"Enter the value of n";
    cin>>n;

BtNtoOne(i,n);
return 0;
}