/*
A B C
A B C
A B C
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
 while(col<=n){
 char ch='A'+col-1;
 cout<<ch;
 col++;
 }
 cout<<endl;
 row++;
 }
 }
