/*
    1
   121
  12321
 1234321
123454321
*/
#include<iostream>
using namespace std;
int main(){
int n,row,col;
cout<<"enter the size:";
cin>>n;
row=1;
while(col<=n){
int space=n-row;
while(space){
cout<<" ";
space--;
}
col=1;
while(col<=row){
 cout<<col;
 col++;
 }
 int start=row-1;
 while(start){
 cout<<start;
 start--;
 }
 cout<<endl;
 row++;
}
}
