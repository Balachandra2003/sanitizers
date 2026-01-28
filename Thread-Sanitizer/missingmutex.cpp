#include <thread>
#include <iostream>
using namespace std;

int counter = 0;

void inc() {
    counter++;   // ❌ not protected
}

int main() {
    thread t1(inc);
    thread t2(inc);

    t1.join();
    t2.join();
    cout << counter << endl;
}
