#include <iostream>

int main() {
    int arr[3];
    arr[5] = 10;   // out of bounds
    std::cout << arr[5];
}
