#include<iostream>
using namespace std;
void sumOfSubarrays(int n,int arr[]){
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            cout<<sum<<" ";
        }
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
sumOfSubarrays(n,arr);
return 0;
}