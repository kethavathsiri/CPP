/*
Enter the number of rows for the pattern: 3
*    *
**  **
******
**  **
*    *

*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows for the pattern: ";
    cin >> n;

    int row = 1;
    int spaces = 2 * (n - 1);

    while (row <= 2 * n - 1) {
        int col = 1;
        int stars;

        // Determine number of stars based on the current row
        if (row <= n) {
            stars = row;
        } else {
            stars = 2 * n - row;
        }

        // Print stars in the first half
        while (col <= stars) {
            cout << "*";
            col++;
        }

        col = 1;

        // Print spaces
        while (col <= spaces) {
            cout << " ";
            col++;
        }

        col = 1;

        // Print stars in the second half
        while (col <= stars) {
            cout << "*";
            col++;
        }

        // Move to the next line after each iteration
        cout << endl;

        // Adjust spaces for the next iteration
        if (row < n) {
            spaces -= 2;
        } else {
            spaces += 2;
        }

        // Move to the next row
        row++;
    }

    return 0;
}

