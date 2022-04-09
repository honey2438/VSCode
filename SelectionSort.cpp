#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The sorted array is "<<endl;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int k=0; k<n;k++){
        cout<<arr[k];
    }
    return 0;
}