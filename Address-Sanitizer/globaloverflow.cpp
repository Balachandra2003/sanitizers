#include <iostream>

int global_arr[4];

int main() {
    global_arr[6] = 10;      // overflow
    std::cout << global_arr[6];
}
