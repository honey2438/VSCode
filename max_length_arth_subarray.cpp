#include<iostream>
#include<algorithm>
int max_length(int arr[],int n){
    int mx=2;
    int curr=2;
    int pd=arr[1]-arr[0];
    int j=2;
    while(j<n){
       if(pd==arr[j]-arr[j-1]){
        curr++;
       }
       else{
        pd=arr[j]-arr[j-1];
        curr=2;
       }
       if(mx<curr){
        mx=curr;
       }
       j++;
    }
    return mx;
}
using namespace std;
int main(){
int n;
cout<<"Enter the value of n";
cin>>n;
int arr[n];
cout<<"Enter the elements in array";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"The max length is "<<max_length(arr,n);
return 0;
}