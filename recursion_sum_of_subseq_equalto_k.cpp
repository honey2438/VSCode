#include<iostream>
#include<vector>
using namespace std;
void subseq(int ind,vector<int> &ds,int arr[],int n,int sum,int s){
    if(ind==n){
        if(s==sum){
            for(auto it:ds){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }
    ds.push_back(arr[ind]);
    s+=arr[ind];
    subseq(ind+1,ds,arr,n,sum,s);
    ds.pop_back();
    s-=arr[ind];
    subseq(ind+1,ds,arr,n,sum,s);
}
int main(){
int arr[]={1,2,1};
vector<int> ds;
int n=3;
subseq(0,ds,arr,n,2,0);
return 0;
}