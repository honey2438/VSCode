#include<iostream>
#include<string>
using namespace std;
void revstr(string s,int i){
    if(i==s.length()){
        return ;
    }
    revstr(s, i+1);
    cout<<s[i];
}
int main(){int i=0;
   
    revstr("binod",i);
return 0;
}