#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int rows, cols;
    cout << "Введіть кількість рядків: ";
    cin >> rows;
    cout << "Введіть кількість стовпців: ";
    cin >> cols;

    if (rows <= 0 || cols <= 0) {
        cout << "Розміри матриці повинні бути більшими за 0!" << endl;
        return 1;
    }

    vector<vector<int>> matrix(rows, vector<int>(cols));

    cout << "\nМатриця:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = rand() % 41 - 20;
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    int negativeSum = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] < 0) {
                negativeSum += matrix[i][j];
            }
        }
    }

    cout << "\nСума всіх від'ємних елементів матриці: " << negativeSum << endl;

    return 0;
}
