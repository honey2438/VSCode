#include<iostream>
using namespace std;
string substring(string s){
    if(s.length()==0){
        return 0;
    }
    cout<<s<<endl;
    substring(s.substr(1));
}
int main(){
    substring("devansh");
    return 0;

}