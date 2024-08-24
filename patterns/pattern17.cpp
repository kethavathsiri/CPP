/*
A
B C
D E F
*/
#include<iostream>
using namespace std;
int main(){
int n;
char count='A';
cout<<"enter the size:";
cin>>n;
int row=1;
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
