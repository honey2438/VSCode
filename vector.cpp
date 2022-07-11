#include<iostream>
#include<vector>
using namespace std;
int main(){
// vector<int> vect;
// vect.push_back(1);
// vect.push_back(2);
// vect.push_back(3);
// cout<<vect.empty();
// cout<<vect.at(1);
// vect.size();

// vect.clear();
// cout<<vect.empty();
vector<int> v(6,4);
for(int i;i<v.size();i++){
    cout<<v.at(i);
}



return 0;
}