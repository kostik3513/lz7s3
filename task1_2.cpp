#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int size;
    cout << "Введіть розмір вектора: ";
    cin >> size;

    if (size <= 0) {
        cout << "Розмір вектора повинен бути більшим за 0!" << endl;
        return 1;
    }

    vector<int> vec;

    cout << "Елементи вектора: ";
    for (int i = 0; i < size; ++i) {
        int val = rand() % 41 - 20;
        vec.push_back(val);
        cout << vec[i] << " ";
    }
    cout << endl;

    int minVal = vec[0];
    int maxVal = vec[0];

    for (int i = 1; i < size; ++i) {
        if (vec[i] < minVal) {
            minVal = vec[i];
        }
        if (vec[i] > maxVal) {
            maxVal = vec[i];
        }
    }

    int diff = maxVal - minVal;

    cout << "Найменший елемент: " << minVal << endl;
    cout << "Найбільший елемент: " << maxVal << endl;
    cout << "Різниця (max - min): " << diff << endl;

    return 0;
}
