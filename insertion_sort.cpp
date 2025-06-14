#include <iostream>
using namespace std;

void insertionSort(int data[], int n) {
    for (int i = 1; i < n; i++) {
        int key = data[i];
        int j = i - 1;
        while (j >= 0 && data[j] > key) {
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = key;
    }
}

void printArray(int data[], int n) {
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
}

int main() {
    int data[] = {29, 10, 14, 37, 13};
    int n = sizeof(data) / sizeof(data[0]);

    cout << "Data sebelum diurutkan: ";
    printArray(data, n);

    insertionSort(data, n);

    cout << "Data setelah diurutkan: ";
    printArray(data, n);

    return 0;
}
