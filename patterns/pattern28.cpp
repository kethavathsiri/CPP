/*
123321
12**21
1****1
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
while(col<=n-row+1){
 cout<<col;
 col++;
 }
 int start=row-1;
 while(start){
 cout<<"*";
 start--;
 }
 int star=row-1;
 while(star){
 cout<<"*";
 star--;
 }
 int s=n-row+1;
 while(s>=1){
 cout<<s;//row;//s;
 s--;
 //col++;
 }
 cout<<endl;
 row++;
 }
 }
