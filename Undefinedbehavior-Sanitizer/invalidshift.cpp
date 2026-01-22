#include <iostream>
using namespace std;

int main() {
    int x = 1;
    int shift = 32;
    int y = x << shift;   // ❌ shift >= bit width
    cout << y << endl;
    return 0;
}
