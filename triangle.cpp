#include <iostream>

using namespace std;

int main()
{
   int n;
   cout<<"Enter the value of n";
   cin>>n;
  for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
          if(i==n){
              cout<<"*";
          }
          else{
               if(j<=(n/2)-i || ( j>(n/2)-i+1  &&  j<(n/2)+i ) ){
              cout<<" ";
          }
          else if(j==(n/2)-i+1 || j==(n/2)+i+1 ){
              cout<<"*";
          }
          }
         
          
      }
      cout<<endl;
  }

    return 0;
}
