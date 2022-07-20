#include<iostream>
#include<valarray>
#include<cstring>
using namespace std;
int hexadecimalToDecimal(string n){
    int x=n.size();
    int add;
    int z=1;
    for(int i=x-1;i>=0;i--){
        if(n[i]>'0' && n[i]<'9'){
            add+=z*(n[i]-'0');
        }
        else if(n[i]>='A' && n[i]<='F'){
            add+=z*(n[i]-'A'+10);
        }
        z*=16;
    }
    return add;
}
int main(){
string n;
cout<<"Enter the string";
cin>>n;
cout<<hexadecimalToDecimal(n);
return 0;
}