#include<iostream>
#include<string>
using namespace std;
void revstr(string s){
    if(s.length()==0){
        return;
    }
    string prev=s.substr(1);
    revstr(prev);
    cout<<s[0];
}
int main(){
   
    revstr("binod");
return 0;
}