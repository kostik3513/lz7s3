# Лабораторна робота №7

**Виконав:** студент групи 4СОМ Кланцатий Костянтин

**Варіант:** №3

**Тема: Опрацювання динамічних масивів.**

**Мета:** *набути практичних навиків програмного використання вказівників та динамічної пам’яті при опрацюванні масивів.*

---

## Завдання 1. «Динамічний одновимірних масивів».

Знайти різницю між найбільшим і найменшим елементами одновимірного масиву.

**Код(вказівник):**

```
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
```

<img width="1897" height="902" alt="image" src="https://github.com/user-attachments/assets/6671b2bc-5556-431a-80f0-579a732c0b9e" />

**Код(vector):**

```
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
```

<img width="1896" height="902" alt="image" src="https://github.com/user-attachments/assets/691cc50d-9927-4635-b60b-132d14bf85f8" />

## Завдання 2. «Динамічний двовимірний масив».

Знайти суму всіх від’ємних елементів матриці.

**Код(vector):**

```
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
```

<img width="1897" height="903" alt="image" src="https://github.com/user-attachments/assets/deb8cbbd-d261-4324-a1b3-effa7ac4cc6f" />

---

## Висновок
Під час виконання лабораторної роботи здобуто практичні навички використання динамічної пам'яті в C++. Реалізовано алгоритми обробки одновимірних та двовимірних масивів із використанням вказівників (new/delete[]) і контейнера std::vector. Порівняно обидва підходи та підтверджено, що std::vector є більш безпечним і зручним засобом, оскільки автоматично керує виділенням та звільненням пам'яті.
