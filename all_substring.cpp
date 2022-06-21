#include<iostream>
using namespace std;
string substring(string s, int i){
    if(s.length()==0|| i==s.length()){
        return "";
    }
    string new=substring(s.substring(1),i);
    cout<<substring(new,i++);
}
int main(){
    int i=0;
    substring("ABC",i);
    return 0;
}