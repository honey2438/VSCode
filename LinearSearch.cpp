#include<iostream>
using namespace std;
int LinearSearch(int arr[],int key,int n){
    for(int i=0;i<=n;i++){
        if(arr[i]==key){
            cout<<"The key is found at index no ";
            return i;
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
    cout<<LinearSearch(arr,key,n)<<endl;
    return 0;
}