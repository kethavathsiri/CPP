#include <iostream>
using namespace std;

int main() {
    int i, j;

    for (i = 0; i < 7; i++) { // Outer loop: iterates over rows
        printf("* "); // Print a leading star and a space

        for (j = 0; j < 5; j++) { // Inner loop: iterates over columns within each row
            if (i == 6) {
                cout<<"* "; // Print a star if on the last row
            } else {
                cout<<"  "; // Print two spaces if not on the last row
            }
        }
        cout<<endl; // Move to the next line after finishing the row
    }

    return 0;
}

