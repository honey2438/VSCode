#include<iostream>
using namespace std;
void reverse(int arr[],int i,int n){
    if(i>=n/2){
        return;
    }
    swap(arr[i],arr[n-i-1]);
    reverse(arr,i+1,n);
}
int main(){
    int arr[]={1,2,3,4,5};
reverse(arr,0,4);
for(int i=0;i<4;i++){
    cout<<arr[i]<<endl;
}
return 0;
}