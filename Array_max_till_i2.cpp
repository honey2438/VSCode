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
    for(int i=0;i<n;i++){
            if(arr[i]>arr[i+1]){
                arr[i+1]=arr[i];           
            
            }
       }
     for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}