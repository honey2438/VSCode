#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){int j=0;
    string s="469832473217";
    sort(s.begin(),s.end(),greater<int>());
   
    cout<<s<<endl;
    return 0;
}