#include<bits/stdc++.h>
using namespace std;
int Hexadecimaltodecimal(string n){
    int sum=0,a=1;
    int s=n.size();
    for(int i=s-1;i>=0;i--){
        if(n[i]>='0' && n[i]<='9'){
          sum+=a*(n[i]-'0');
        }
        else if(n[i]>='A' && n[i]<='F'){
            sum+=a*(n[i]-'A'+10);
        }
        a*=16;
    }
    return sum;
}
int main(){
    string n;
    cout<<"Enter the hexadecimal no";
    cin>>n;
    cout<<Hexadecimaltodecimal(n);
    return 0;
}