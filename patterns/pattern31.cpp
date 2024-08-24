/*

 *********
  *******
   *****
    ***
     *
*/
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int row=1;
while(row<=n){
int space=row;
while(space){
cout<<" ";
space--;
}
int col=1;
while(col<=n-row+1){
cout<<"*";
col++;
}
int value=1;
while(value<n-row+1){
cout<<"*";
value++;
}
cout<<endl;
row++;

}
}
