#include<iostream>
#include<cstring>
#include<math.h>
using namespace std;
void ip_add(string add,string same){
    string sa=same;
if(add.length()==0){
    return ;
}
string sub;
if(add[0]=='.'){
    int s=stoi(sub);
    if(s<0 || s>255){
        cout<<"invalid";
    }
    same[0]=add[1];
}
 sub=sa-ip_add(add.substr(1),same);
cout<<"valid";

}
 int main(){
     string add="101.101.101",same;
     same=add;
     ip_add(add,same);
     return 0;
     
 }