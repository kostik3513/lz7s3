#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int size;
    cout << "Введіть розмір масиву: ";
    cin >> size;

    if (size <= 0) {
        cout << "Розмір масиву повинен бути більшим за 0!" << endl;
        return 1;
    }

    int* arr = new int[size];

    cout << "Елементи масиву: ";
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 41 - 20;
        cout << arr[i] << " ";
    }
    cout << endl;

    int minVal = arr[0];
    int maxVal = arr[0];

    for (int i = 1; i < size; ++i) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    int diff = maxVal - minVal;

    cout << "Найменший елемент: " << minVal << endl;
    cout << "Найбільший елемент: " << maxVal << endl;
    cout << "Різниця (max - min): " << diff << endl;

    delete[] arr;

    return 0;
}
