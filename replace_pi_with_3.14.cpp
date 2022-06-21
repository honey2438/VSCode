#include<iostream>
using namespace std;
void replace(string str,int i){
    if(i==str.length()){
        return;
    }
    if(str[i]=='p' && str[i+1]=='i'){
        str[i]='3';
        str[i+1]='1';
    }
    cout<<str[i];
    replace(str,i+1);

}
int main(){
    int i=0;
    replace("xpixpixpi",i);
    return 0;
}