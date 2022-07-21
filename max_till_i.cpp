#include<iostream>
#include<limits.h>
using namespace std;
void max_till_i(int n, int arr[]){
    int i=0;
    int max=INT_MIN;
    while(i<n){
        if(arr[i]<max){
            arr[i]=max;
        }
        else{
            max=arr[i];
        }
        i++;
    }
    for(i=0;i<n;i++){
        cout<<arr[i];
    }
}
int main(){
int n;
cout<<"Enter the value of n";
cin>>n;
int arr[n];
cout<<"Enter the elements in array";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
max_till_i(n,arr);
return 0;
}