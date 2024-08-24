/*
enter the pattern size:3
***
* *
***
*/
#include<iostream>
using namespace std;
int main(){
int n,row,col;
cout<<"enter the pattern size:";
cin>>n;
row=0;
while(row<n){
col=0;
while(col<n){
if (row == 0 || col == 0 || row == n - 1 || col == n - 1) {
    cout << "*";
} else {
    cout << " ";
}

col++;
}
cout<<endl;
row++;
}
}
