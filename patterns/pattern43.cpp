/*
enter the number:3
33333
32223
32123
32223
33333
*/
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the number:";
cin>>n;
int row=0;
while(row<2*n-1){
int col=0;
while(col<2*n-1){
int top=row;
int left=col;
int right=(2*n-2)-col;
int down=(2*n-2)-row;
cout<<(n-min(min(top,down),min(left,right)));
col++;
}
cout<<endl;
row++;
}
}
/*
For instance, if row = 2 and col = 1, then:

top = 2
left = 1
down = 4 - 2 = 2
right = 4 - 1 = 3
So, min(top, down) = min(2, 2) = 2 and min(left, right) = min(1, 3) = 1. Therefore, min(min(top, down), min(left, right)) = min(2, 1) = 1.*/
