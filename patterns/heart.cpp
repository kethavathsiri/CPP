#include<iostream>
using namespace std;

void heart_shape_Print() {
    int i, j;

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 7; j++) {
            if ((i == 0 && j % 3 != 0) || 
                (i == 1 && j % 3 == 0) || 
                (i - j == 2) || 
                (i + j == 8)) {
                cout<<" * ";
            } else {
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
}

int main() {
    heart_shape_Print();
    return 0;
}


