#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 0;
    int c = a / b;        // ❌ division by zero
    cout << c << endl;
    return 0;
}
