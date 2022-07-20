#include<iostream>
#include<algorithm>
using namespace std;
bool check(int a,int b, int c){
    int x,y,z;
    x=max(a,max(b,c));
    if(x==a){
        y=b;
        z=c;
    }
    else if(x==b){
        y=a;
        z=c;
    }
    else{
        y=b;
        z=a;
    }
    
    if(x*x==y*y+z*z){
        return 1;
    }
    return 0;
}
int main(){
    int a,b,c;
cout<<"Enter the nos";
cin>>a>>b>>c;
if(check(a,b,c)){
    cout<<"is a pythagorean triplet";
}
else{
    cout<<"not a pythgorean triplet";
}
return 0;
}