/*
1 
2 3
4 5 6
*/
#include<iostream>
using namespace std;
int main(){
int n;
int count=1;
cout<<"enter the size:";
cin>>n;
int row=1;//i or row both are same
while(row<=n){
 int col=1;
 while(col<=row){
 cout<<count;
 count++;
 col++;
 }
 cout<<endl;
 row++;
 }
 }
