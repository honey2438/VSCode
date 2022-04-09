#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
    cout<<"Enter the value of n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            cout<<sum<<endl;
        }
    }
    
    return 0;
}