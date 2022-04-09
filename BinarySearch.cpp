#include<iostream>
using namespace std;
int BinarySearch(int arr[],int key,int n){
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}
int main(){
    int n,key;
    cout<<"Enter the no of elements";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements";
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the key";
    cin>>key;
    cout<<BinarySearch(arr,key,n)<<endl;
    return 0;
}