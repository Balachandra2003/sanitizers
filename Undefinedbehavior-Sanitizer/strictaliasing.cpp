#include <iostream>
using namespace std;

int main() {
    float f = 3.14f;
    int* p = (int*)&f;    // ❌ strict aliasing violation
    cout << *p << endl;
    return 0;
}
