#include<iostream>
using namespace std;
int sum(int n){int s=0;
    for(int i=1;i<=n;i++){
        s+=i;
    }
    return s;
}
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    cout<<sum(n);
    return 0;

}