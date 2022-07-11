#include<iostream>
using namespace std;
int cnt=1;
void printTillN(){
    if(cnt==101){
     return;
    }
    cout<<cnt<<endl;
    cnt++;
    printTillN();
}
int main(){
printTillN();
return 0;
}