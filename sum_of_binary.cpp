#include<bits/stdc++.h>
using namespace std;
int reverse(int n){
    int rev=0;
    while(n>0){
    rev=rev*10+(n%10);
    n/=10;
    }
    return rev;
}
int sum_of_binary_no(int a, int b){
   int prev=0;
    int sum=0;
     while(a>0 && b>0){
         if(a%2==0 && b%2==0){
             sum=sum*10+prev;
             prev=0;
         }
         else if((a%2==0 && b%2==1)|| (a%2==1 && b%2==0)){
             if(prev==1){
                 sum=sum*10+0;
                 prev=1;
             }
             else{
                 sum=sum*10+1;
                 prev=0;
             }
         }
         else{
             if(prev==1){
             sum=sum*10+1;
             prev=1;
             }
             else{
                 sum=sum*10+0;
                 prev=1;
             }
         }
         a/=10;
         b/=10;
     }
     while(a>0){
         if(prev==0){
             if(a%2==1){
                 sum=sum*10+1;
                 prev=0;
             }
             else{
                 sum=sum*10+0;
             }
         }
         if(prev==1){
             if(a%2==1){
                 sum=sum*10+0;
                 prev=1;
             }
             else{
                 sum=sum*10+1;
                 prev=0;
             }
         }
         a/=10;
     }

     while(b>0){
         if(prev==0){
             if(b%2==1){
                 sum=sum*10+1;
                 prev=0;
             }
             else{
                 sum=sum*10+0;
             }
         }
         if(prev==1){
             if(b%2==1){
                 sum=sum*10+0;
                 prev=1;
             }
             else{
                 sum=sum*10+1;
                 prev=0;
             }
         }
         b/=10;
     }
     reverse(sum);
     return sum;

}
int main(){
    int a,b;
    cout<<"Enter two binary no";
    cin>>a>>b;
    cout<<sum_of_binary_no(a,b);
    return 0;
}