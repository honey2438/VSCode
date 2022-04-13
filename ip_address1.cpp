#include<iostream>
#include<string>
using namespace std;
int main(){
    string n,x,y,z;
    int a,b,c;
    cout<<"Enter the ip address";
    cin>>n;
    x=n[0,2];
    y=n[4,6];
    z=n[8,10];
    a=stoi(x);
    b=stoi(y);
    c=stoi(z);
    if((a>0 && a<256)&&(b>0 && b<256) && (c>0 && c<256)){
        cout<<"Valid";
    }
    else{
        cout<<"Invalid";
    }
}