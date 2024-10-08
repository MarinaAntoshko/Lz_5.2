// Підрахувати середнє арифметичне всіх додатних елементів у даному двовимірному масиві.//

#include <iostream>
#include <windows.h>
#include <cmath>
#include <ctime>   // для time()
#include <cstdlib> // для rand() і srand()
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int rows, cols;
    int** arr;

    cout << "Kількість рядків: ";
    cin >> rows;
    cout << "Kількість стовпців: ";
    cin >> cols;

    srand(time(0));

    arr = new int* [rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = rand() % 41 - 20;
        }
    }

    cout << "Mасив:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    double sum = 0, k = 0;
    double sz = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > 0) 
            {
                sum += arr[i][j];
                k++;
            }
        }
    }
    sz = sum / k;
    cout << "Середнє значення додатніх елементів: " << sz;
    delete[] arr;

    return 0;
}

