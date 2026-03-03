#include <iostream>

using namespace std;

int main() {
    int m1[10][10], m2[10][10], m3[10][10];
    int i, j, r, c;

    cout << "Enter the no.of rows of the matrices to be added(max 10):";
    cin >> r;
    cout << "Enter the no.of columns of the matrices to be added(max 10):";
    cin >> c;

    cout << "\n1st Matrix Input:\n";
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cout << "\nmatrix1[" << i << "][" << j << "]=  ";
            cin >> m1[i][j];
        }
    }

    cout << "\n2nd Matrix Input:\n";
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cout << "\nmatrix2[" << i << "][" << j << "]=  ";
            cin >> m2[i][j];
        }
    }

    cout << "\nMultiplying Matrices...\n";
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            m3[i][j] = m1[i][j] * m2[i][j];
        }
    }

    cout << "\nThe resultant Matrix is:\n";
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cout << "\t" << m3[i][j];
        }
        cout << endl;
    }

    return 0;
}