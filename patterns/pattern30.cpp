/*
    *
   ***
  *****
 *******
*********
*/
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the size:";
cin>>n;
int row=1;
while(row<=n){
int space=n-row;
while(space){
cout<<" ";
space--;
}
int col=1;
while(col<=row){
cout<<"*";
col++;
}
int value=row-1;
while(value>=1){
cout<<"*";
value--;
}
cout<<endl;
row++;
}
}


