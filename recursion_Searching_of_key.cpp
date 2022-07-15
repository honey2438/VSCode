#include<iostream>
using namespace std;
int firstocc(int arr[],int n,int i, int key){
    if(i==n){
     return -1;
    }
    if(arr[i]==key){
        return i;
    }
    
    return firstocc(arr,n,i+1,key );
}
int lastocc(int arr[],int n, int i, int key){
    if(i==n){
        return -1;
    }
    int restArr=lastocc(arr,n,i+1,key);
    if(restArr==-1 && arr[i]==key){
        return i;
    }
    else{
        return restArr;
    }
   
}
int main(){
    int n;
    int arr[6]={1,2,3,4,2,5};
    n=5;
    int key=2;
    int i=0;
    cout<<firstocc(arr,n,i,key )<<endl;
    cout<<lastocc(arr,n,i,key);
    return 0;

}