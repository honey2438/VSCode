#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n<=1){
        return n;
    }
    int slast=fibonacci(n-1);
    int last=fibonacci(n-2);
    return slast+last;
}
int main(){
cout<<fibonacci(4);
return 0;
}