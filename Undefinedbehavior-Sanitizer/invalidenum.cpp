#include <iostream>
using namespace std;

enum Color { RED = 0, GREEN = 1, BLUE = 2 };

int main() {
    Color c = static_cast<Color>(10);   // ❌ invalid enum value
    if (c == RED) {
        cout << "Red" << endl;
    }
    return 0;
}
