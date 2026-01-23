#include <iostream>
using namespace std;

int main() {
    int arr[3];
    int* p = arr;
    p = p + 1000000;     // ❌ pointer arithmetic overflow
    cout << *p << endl;
    return 0;
}
