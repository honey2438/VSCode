#include<iostream>
using namespace std;
void reverse(int arr[],int i){
    if(i>4){
        return;
    }
    reverse(arr,i+1);
    cout<<arr[i];

}
int main(){
int arr[]={1,2,3,4,5};
reverse(arr,0);
return 0;
}