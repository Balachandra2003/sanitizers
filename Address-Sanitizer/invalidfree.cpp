int main() {
    int x = 10;
    int *p = &x;
    delete p;    // invalid free
}
