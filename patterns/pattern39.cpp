/*
1    1
12  21
123321
*/
#include<iostream>
using namespace std;
int main(){
int n,row,col;
cout<<"enter the number:";
cin>>n;
row=1;
while(row<=n){
 col=1;
 while(col<=row){
 cout<<col;
 col++;
 }
int space=2*(n-row);
while(space>0){
cout<<" ";
space--;
}
col=row;
while(col>=1){
cout<<col;
col--;
}
cout<<endl;
row++;
}
}


