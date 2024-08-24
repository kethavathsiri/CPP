/*
4321
 321
  21
   1
*/
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size: ";
    cin >> n;
    int row = 1;
    while (row <= n) {
        int space= row-1; 
        while (space) { 
            cout << " ";
            space--;
        }
        int col =n-row+1;// n - row + 1;
        //int value=row;
        while (col>=1) {
            cout << col;
            
            col--;
        }
        cout << endl;
        row++;
    }
    return 0;
}


