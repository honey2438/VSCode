#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the number of row and columns";
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int key;
    cout<<"Enter the element to search";
    cin>>key;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==key){
                cout<<" The element is found at "<<i+1<<" row and "<<j+1<<" column";
            }
        }
    }
    return 0;
}