#include <iostream>
using namespace std;

int main() {
    char buffer[10];
    int *p = (int*)(buffer + 1);   // ❌ misaligned pointer
    *p = 100;
    cout << *p << endl;
    return 0;
}
