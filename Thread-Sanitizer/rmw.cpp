#include <thread>
#include <iostream>
using namespace std;

int value = 1;

void multiply() {
    value *= 2;   // ❌ read-modify-write not atomic
}

int main() {
    thread t1(multiply);
    thread t2(multiply);

    t1.join();
    t2.join();
    cout << value << endl;
}
