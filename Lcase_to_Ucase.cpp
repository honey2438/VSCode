#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
 int main(){
     string str;
     cout<<"Enter a string";
     cin>>str;
     
     for(int i=0;i<str.size();i++){
            str[i]-=32;
        
     }
     cout<<str;
     return 0;
 }