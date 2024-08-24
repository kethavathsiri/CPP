/*
1 
2 3
3 4 5
*/
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the size:";
cin>>n;
int row=1;//i or row both are same
while(row<=n){
 int col=1;
 int value=row;
 while(col<=row){
 cout<<value;
 value++;
 col++;
 }
 cout<<endl;
 row++;
 }
 }
