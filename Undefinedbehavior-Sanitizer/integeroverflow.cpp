#include <iostream>
using namespace std;

int main() {
    int x = 2147483647;   // INT_MAX
    x = x + 1;            // ❌ signed integer overflow
    cout << x << endl;
    return 0;
}
