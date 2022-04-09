#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter the size of the array";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array";
    for(i=0;i<=n;i++){
        cin>>arr[i];
    }
    int a=INT_MIN;
    int b=INT_MAX;
    for(i=0;i<=n;i++){
        if(arr[i]>a){
           a=arr[i];
        }
        if(arr[i]<b){
            b=arr[i];
        }
    }
    cout<<"The maximum number is "<<a<<endl<<"The minimum number is "<<b;
    return 0;
}