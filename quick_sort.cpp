#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<"Enter the size of array";
    int a[n];
    cout<<"Enter the elements in array";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<a.start()<<a.end();
    return 0;

}