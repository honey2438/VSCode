#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=0;i<5;i++)
    {
        if(i==0 || i==4)
         {
            for(j=0;j<4;j++)
            {
                cout<<" * ";
            }
         }
         else if(i==1 || i==2 ||i==3)
         {
           for(j=0;j<4;j++){
               if(j==0 || j==3){
                   cout<<" * ";
               }
               else
               {
                   cout<<"   ";
               }
           }
          
       }
       cout<<endl;
    }
}