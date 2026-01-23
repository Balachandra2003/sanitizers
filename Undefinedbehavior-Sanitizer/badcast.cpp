#include <iostream>
using namespace std;

class Base {
public:
    virtual ~Base() {}
};

class Derived : public Base {
public:
    void hello() { cout << "Hello" << endl; }
};

int main() {
    Base b;
    Derived* d = static_cast<Derived*>(&b);  // ❌ invalid downcast
    d->hello();
    return 0;
}
