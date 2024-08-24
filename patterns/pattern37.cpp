/*
  A
 ABA
ABCBA
*/
#include<iostream>
using namespace std;
int main(){
int n;
char ch;
cin>>n;
int row=1;
while(row<=n){
int space=n-row;
while(space){
cout<<" ";
space--;
}
int col=1;
ch='A';
while(col<=row){
cout<<ch;
col++;
ch++;
}
ch-=2;
col=1;
while(col<row){
cout<<ch;
ch--;
col++;
}
cout<<endl;
row++;
}
}
 





