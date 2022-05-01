#include<iostream>
using namespace std;
string replacex(string s){
    if(s.length()==0){
        return "";
    }
    string ans=replacex(s.substr(1));
    if(s[0]=='x'){
        return ans+s[0];
    }
    else{
        return s[0]+ans;
    }
}
int main(){
    cout<<replacex("adxgkhxahdlx");
    return 0;
    
}