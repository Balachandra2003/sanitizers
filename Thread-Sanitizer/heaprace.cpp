#include <thread>
#include <iostream>
using namespace std;

int* p;

void writer() {
    *p = 10;   // ❌ write
}

void reader() {
    cout << *p << endl;  // ❌ read
}

int main() {
    p = new int(0);

    thread t1(writer);
    thread t2(reader);

    t1.join();
    t2.join();
    delete p;
}
