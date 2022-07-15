#include<iostream>
using namespace std;
string substring(string s, int i){
    if(s.length()==0|| i==s.length()){
        return "";
    }
    string newstr=substring(s.substr(1),i);
    cout<<substring(newstr,i++);
}
int main(){
    int i=0;
    substring("ABC",i);
    return 0;
}