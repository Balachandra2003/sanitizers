int* getPtr() {
    int x = 10;
    return &x;   // stack memory
}

int main() {
    int *p = getPtr();
    *p = 20;     // invalid access
}
