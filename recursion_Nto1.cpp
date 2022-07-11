#include<iostream>
using namespace std;
int cnt=100;
void printTillOne(){
    if(cnt==0){
        return;
    }
    cout<<cnt<<endl;
    cnt--;
    printTillOne();
}
int main(){
printTillOne();
return 0;
}
