/*
  *
 **
***
*/
#include<iostream>
using namespace std;
int main(){
int n,row,col;
cout<<"enter the size:";
cin>>n;
row=1;
while(row<=n){
int space=n-row;
while(space){
cout<<" ";
space--;
}
col=1;
 while(col<=row){
 cout<<"*";
 col++;
 }
 row++;
 cout<<"\n";
}
}
