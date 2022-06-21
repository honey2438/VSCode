#include<bits/stdc++.h>
using namespace std;
int main(){
int a=INT_MIN,n;
cout<<"Enter the size of array";
cin>>n;
int arr[n];
cout<<"Enter the elements in array";
for(int i=0;i<n;i++){
cin>>arr[i];
}
for(int i=0;i<n;i++){
 a=max(a,arr[i]);
 arr[i]=a;
 cout<<arr[i];
}

return 0;
}