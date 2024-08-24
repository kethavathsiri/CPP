/*
A B C
D E F
G H I
*/
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the size:";
cin>>n;
char start='A';
int row=1;
 while(row<=n){
int col=1;
 while(col<=n){
 cout<<start;
 col++; 
 start++;
 }
 cout<<endl;
 row++;
 }
 }
