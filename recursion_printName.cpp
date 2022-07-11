#include<iostream>
using namespace std;
int cnt=0;
void printName(){
    if(cnt==5){
        return;
    }
    cout<<"Devansh"<<endl;
    cnt++;
    printName();
}
int main(){
printName();
return 0;
}
// TC-> O(N);
// SC-> O(N);