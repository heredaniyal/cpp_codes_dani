// #include <iostream>
// Q1
// using namespace std;

// // UPDATED VERSION DANIYAL SAQIB

// const int MAX_ROWS = 100; // ? can we use smaller values (ANSWER: PROGRAMMER CHOICE)
// const int MAX_COLS = 100;

// int main() {
//     int rows, cols; 

//     cout << "Enter the number of rows for the matrices: ";
//     cin >> rows;

//     cout << "Enter the number of columns for the matrices: ";
//     cin >> cols;

//     if (rows > MAX_ROWS || cols > MAX_COLS)
//     // validation for negative values where (?) 
//     {
//         cout << "Error: Matrix size exceeds the maximum allowed size." << endl;
//         return 1;
//     }
//     else if (rows <= 0 || cols <= 0)
//     {
//         cout << "Error: MATRIX CANNOT BE -VE!\n";
//         return 0;
//     }

//     int matrix1[MAX_ROWS][MAX_COLS], matrix2[MAX_ROWS][MAX_COLS], result[MAX_ROWS][MAX_COLS]; // (?) (ANSWER: SIZE)

//     // Input for Matrix 1
//     cout << "Enter the elements of the first matrix:" << endl;
//     for (int i = 0; i < rows; ++i) { // loop (?)
//         for (int j = 0; j < cols; ++j) {
//             cout << "Enter element at position " << i + 1 << "," << j + 1 << ": ";
//             cin >> matrix1[i][j];
//         }
//     }

//     // Input for Matrix 2
//     cout << "Enter the elements of the second matrix:" << endl;
//     for (int i = 0; i < rows; ++i) {
//         for (int j = 0; j < cols; ++j) {
//             cout << "Enter element at position " << i + 1 << "," << j + 1 << ": ";
//             cin >> matrix2[i][j];
//         }
//     }

//     // Adding Matrices
//     for (int i = 0; i < rows; ++i) {
//         for (int j = 0; j < cols; ++j) {
//             result[i][j] = matrix1[i][j] + matrix2[i][j];
//         }
//     }

//     // Displaying Resultant Matrix
//     cout << "Resultant Matrix:" << endl;
//     for (int i = 0; i < rows; ++i) {
//         for (int j = 0; j < cols; ++j) {
//             cout << result[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 1;   

// }


// #include <iostream>
// // Q2
// using namespace std;

// const int MAX_ROWS = 100;
// const int MAX_COLS = 100;

// int main() {
//     int rows, cols;

//     cout << "Enter the number of rows for the matrix: ";
//     cin >> rows;

//     cout << "Enter the number of columns for the matrix: ";
//     cin >> cols;

//     if (rows > MAX_ROWS || cols > MAX_COLS) {
//         cerr << "Error: Matrix size exceeds the maximum allowed size." << endl;
//         return 1;
//     }

//     int matrix[MAX_ROWS][MAX_COLS], transpose[MAX_COLS][MAX_ROWS];

//     // Input for Matrix
//     cout << "Enter the elements of the matrix:" << endl;
//     for (int i = 0; i < rows; ++i) {
//         for (int j = 0; j < cols; ++j) {
//             cout << "Enter element at position " << i + 1 << "," << j + 1 << ": ";
//             cin >> matrix[i][j];
//         }
//     }

//     // Finding Transpose
//     for (int i = 0; i < cols; ++i) {
//         for (int j = 0; j < rows; ++j) {
//             transpose[i][j] = matrix[j][i]; // swapping
//         }
//     }

//     // Displaying Transpose Matrix
//     cout << "Transpose of the Matrix:" << endl;
//     for (int i = 0; i < cols; ++i) {
//         for (int j = 0; j < rows; ++j) {
//             cout << transpose[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// // Q3
// using namespace std;

// const int MAX_ROWS_A = 100;
// const int MAX_COLS_A = 100;

// const int MAX_ROWS_B = 100;
// const int MAX_COLS_B = 100;

// const int MAX_ROWS_RESULT = 100;
// const int MAX_COLS_RESULT = 100;

// int main() {
//     int rowsA, colsA, rowsB, colsB;

//     cout << "Enter the number of rows for Matrix A: ";
//     cin >> rowsA;

//     cout << "Enter the number of columns for Matrix A: ";
//     cin >> colsA;

//     cout << "Enter the number of rows for Matrix B: ";
//     cin >> rowsB;

//     cout << "Enter the number of columns for Matrix B: ";
//     cin >> colsB;

//     if (colsA != rowsB || rowsA > MAX_ROWS_A || colsA > MAX_COLS_A || rowsB > MAX_ROWS_B || colsB > MAX_COLS_B) {
//         cerr << "Error: Matrix dimensions are incompatible for multiplication." << endl;
//         return 1;
//     }

//     int matrixA[MAX_ROWS_A][MAX_COLS_A], matrixB[MAX_ROWS_B][MAX_COLS_B], result[MAX_ROWS_RESULT][MAX_COLS_RESULT];

//     // Input for Matrix A
//     cout << "Enter the elements of Matrix A:" << endl;
//     for (int i = 0; i < rowsA; ++i) {
//         for (int j = 0; j < colsA; ++j) {
//             cout << "Enter element at position " << i + 1 << "," << j + 1 << ": ";
//             cin >> matrixA[i][j];
//         }
//     }

//     // Input for Matrix B
//     cout << "Enter the elements of Matrix B:" << endl;
//     for (int i = 0; i < rowsB; ++i) {
//         for (int j = 0; j < colsB; ++j) {
//             cout << "Enter element at position " << i + 1 << "," << j + 1 << ": ";
//             cin >> matrixB[i][j];
//         }
//     }

//     // Multiplying Matrices
//     for (int i = 0; i < rowsA; ++i) {
//         for (int j = 0; j < colsB; ++j) {
//             result[i][j] = 0;
//             for (int k = 0; k < colsA; ++k) 
//             {
//                 result[i][j] += matrixA[i][k] * matrixB[k][j];
//             }
//         }
//     }

//     // Displaying Resultant Matrix
//     cout << "Resultant Matrix (A * B):" << endl;
//     for (int i = 0; i < rowsA; ++i) {
//         for (int j = 0; j < colsB; ++j) {
//             cout << result[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }