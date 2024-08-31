#include <iostream>
using namespace std;

void nochange(int i){
    i = 42;
}

void set42(int* pi) {
    *pi = 42;
}

int main() {
    int i = 0;

    nochange(i);
    cout << i << endl;

    set42(&i);
    cout << i << endl;

    const int* ptr;
    cout << ptr << endl;
    const int** pptr = &ptr;
}
