/*
1
01
101
*/
#include<iostream>
using namespace std;
int main(){
int n,row,col,start;
cout<<"enter the number:";
cin>>n;
row=0;
while(row<n){
if(row%2==0){
start=1;}
else{
start=0;}
col=0;
while(col<=row){
cout<<start;
start=1-start;//toggle between 0 and 1
col++;
}
cout<<endl;
row++;
}
}

 
