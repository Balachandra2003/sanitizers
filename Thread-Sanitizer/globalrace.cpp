#include <thread>
#include <iostream>
using namespace std;

int shared;

void write() {
    shared = 42;   // ❌ write
}

void read() {
    cout << shared << endl;  // ❌ read
}

int main() {
    thread t1(write);
    thread t2(read);

    t1.join();
    t2.join();
}
