/*
*
**
***
****
***
**
*
*/
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    // Upper half of the pattern
    int row = 1;
    while (row <= n) {
        int col = 1;
        while (col <= row) {
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }

    // Lower half of the pattern
    row = n - 1;
    while (row >= 1) {
        int col = 1;
        while (col <= row) {
            cout << "*";
            col++;
        }
        cout << endl;
        row--;
    }

    return 0;
}

