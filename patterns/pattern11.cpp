/*
1
2 1
3 2 1
4 3 2 1
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
 while(col<=row){
 cout<<row-col+1;
 col++;
 }
 cout<<endl;
 row++;
 }
 }
