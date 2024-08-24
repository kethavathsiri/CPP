/*
********
***  ***
**    **
*      *
*      *
**    **
***  ***
********
*/
#include <iostream>
using namespace std;

int main() {
    int N,col;
    cout << "Enter the number of rows for the pattern: ";
    cin >> N;

    int row = 0;
    int iniS = 0;

    while (row < N) {
         col = 1;

        // Print stars in the row
        while (col <= N - row) {
            cout << "*";
            col++;
        }
        col = 0;
        
        // Print spaces in the row
        while (col < iniS) {
            cout << " ";
            col++;
        }
        col= 1;
        while (col <= N - row) {
            cout << "*";
            col++;
        }
        iniS += 2;
        cout << endl;
        row++;
    }
      row = 1;
     iniS = 2 * N - 2;

    while (row <= N) {
         col = 1;

        // Print stars in the row
        while (col <= row) {
            cout << "*";
            col++;
        }

        col = 1;

        // Print spaces in the row
        while (col <= iniS) {
            cout << " ";
            col++;
        }

        col = 1;

        // Print stars in the row again
        while (col <= row) {
            cout << "*";
            col++;
        }
        // Decrease the number of spaces by 2 for the next row
        iniS -= 2;
        // Move to the next row and print a newline
        cout << endl;
        row++;
    }

    return 0;
}
     
