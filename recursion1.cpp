#include<iostream>
using namespace std;
void  print(){
    cout<<"1";
    print();
}
int main(){
print();
return 0;
}