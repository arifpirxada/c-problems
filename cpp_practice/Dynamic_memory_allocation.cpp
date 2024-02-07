#include <iostream>
using std::cout;
using std::cin;

int *getArrayDynamically (int size) {
    int *ptr = new int[size];
    return ptr;
}

int main () {
    int size, i;
    cout << "Enter array size: ";
    cin >> size;

    int *dynamicArray = new int[size];

    cout << "Enter array elements: " << std::endl;
    for (i = 0; i < size; i++) {
        cin >> dynamicArray[i];
    }

    cout << std::endl << "Array elements are: ";
    for (i = 0; i < size; i++) {
        cout << dynamicArray[i] << " ";
    }

    delete[] dynamicArray;
    return 0;
}