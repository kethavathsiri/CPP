    /*
***
**
*
   */
#include<iostream>
using namespace std;
int main(){
int n,row,col;
cout<<"enter the size:";
cin>>n;
row=1;
while(row<=n){
col=1;
 while(col<=n-row+1){
 cout<<"*";
 col++;
 }
 row++;
 cout<<"\n";
}
}
