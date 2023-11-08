#include <iostream>
void bubbleSort(int arr[], int n) {

}

// Function to calculate the determinant of a 2x2 matrix
double determinant2x2(double a, double b, double c, double d) {
    return a * d - b * c;
}

// Function to calculate the determinant of a 3x3 matrix
double determinant3x3(double mat[3][3]) {
    double det = 0;
    for (int i = 0; i < 3; i++) {
        det += mat[0][i] * determinant2x2(mat[1][(i + 1) % 3], mat[1][(i + 2) % 3], mat[2][(i + 1) % 3], mat[2][(i + 2) % 3]);
    }
    return det;
}

// Function to calculate the determinant of a 4x4 matrix
double determinant4x4(double mat[4][4]) {
    double det = 0;
    for (int i = 0; i < 4; i++) {
        double minorMatrix[3][3];
        for (int j = 1; j < 4; j++) {
            int col = 0;
            for (int k = 0; k < 4; k++) {
                if (k != i) {
                    minorMatrix[j - 1][col] = mat[j][k];
                    col++;
                }
            }
        }
        double minorDet = determinant3x3(minorMatrix);
        det += (i % 2 == 0 ? 1 : -1) * mat[0][i] * minorDet;
    }
    return det;
}

int main() {
    double mat[4][4] = {
            {1, 0, 2, -1},
            {3, 0, 0, 5},
            {2, 1, 4, -3},
            {1, 0, 5, 0}
    };

    double det = determinant4x4(mat);

    std::cout << "Determinant of the matrix is: " << det << std::endl;

    return 0;
}