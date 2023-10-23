#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

// Function to calculate the determinant of a 3x3 matrix
double determinant3x3(double matrix[3][3]) {
    double det = 0;

    // Calculate the determinant using the formula
    // det(A) = a(ei − fh) − b(di − fg) + c(dh − eg)
    det = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1])
          - matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0])
          + matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);

    return det;
}

int main() {
    double matrix[3][3];

    // Seed the random number generator
    srand(time(0));

    // Generate random numbers for the 3x3 matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = rand() % 100; // You can adjust the range as needed
        }
    }

    // Print the random matrix
    cout << "Random 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Calculate and output the determinant
    double det = determinant3x3(matrix);
    cout << "Determinant: " << det << endl;

    return 0;
}
