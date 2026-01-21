#include <iostream>

int main() {
    int *arr = new int[5];
    arr[10] = 42;              // out-of-bounds write
    std::cout << arr[10];      // force a read
    delete[] arr;
}
