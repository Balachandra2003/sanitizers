#include <thread>
#include <iostream>
using namespace std;

void func() {
    static int x = 0;   // ❌ shared across threads
    x++;
}

int main() {
    thread t1(func);
    thread t2(func);

    t1.join();
    t2.join();
}
