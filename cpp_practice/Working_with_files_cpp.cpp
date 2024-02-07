#include <iostream>
#include <fstream>
#include <sstream>

using std::cout;
using std::endl;

void printArray(char *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i];
    }
}

int main() {
    std::ifstream inputFile("Standart_template_library.txt");
    std::ofstream outputFile("output.txt");

    char charArr[100];
    inputFile.read(charArr, 100);

    cout << "Text: " << endl;
    printArray(charArr, 100);

    outputFile.write(charArr, 100);

    inputFile.close();
    outputFile.close();
    return 0;
}