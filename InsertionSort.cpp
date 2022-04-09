#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=1;i<n;i++){
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
         arr[j+1]=current;
    }
    cout<<"The sorted array is ";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}