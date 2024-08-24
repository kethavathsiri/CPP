/*
D
CD
BCD
ABCD
*/
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the size:";
cin>>n;
int row=1;
 while(row<=n){
int col=1;
char ch='A'+n-row;
 while(col<=row){
 cout<<ch;
 col++;
 ch++;  
 }
 cout<<endl;
 row++;
 }
 }
