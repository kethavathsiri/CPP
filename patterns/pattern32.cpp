/*
  *
 ***
*****
*****
 ***
  *
*/
#include<iostream>
using namespace std;
int main(){
int n,row,col,space,value;
cout<<"enter the size:";
cin>>n;
row=1;
while(row<=n){
 space=n-row;
while(space){
cout<<" ";
space--;
}
 col=1;
while(col<=row){
cout<<"*";
col++;
}
value=row-1;
while(value>=1){
cout<<"*";
value--;
}
cout<<endl;
row++;
}
row=1;
while(row<=n){
space=row-1;
while(space){
cout<<" ";
space--;
}
 col=1;
while(col<=n-row+1){
cout<<"*";
col++;
}
value=1;
while(value<n-row+1){
cout<<"*";
value++;
}
cout<<endl;
row++;
}
}
