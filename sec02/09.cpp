#include <bits/stdc++.h>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)
#define range(a, b) for (int i = a; i < b; i++)

int main() {

    int value = 42;
    int other = 0;

    int *pointer = &value;
    int &ref = value;

    cout << "valueのアドレスは" << &value << "で、値は" << value << endl;

    cout << "otherのアドレスは" << &other << "で、値は" << other << endl;

    cout << "pointerのアドレスは" << pointer << "で、値は" << *pointer << endl;

    cout << "refのアドレスは" << &ref << "で、値は" << ref << endl;

    pointer = &other;
    ref = other;

    cout << endl;

    cout << "valueのアドレスは" << &value << "で、値は" << value << endl;

    cout << "otherのアドレスは" << &other << "で、値は" << other << endl;

    cout << "pointerのアドレスは" << pointer << "で、値は" << *pointer << endl;

    cout << "refのアドレスは" << &ref << "で、値は" << ref << endl;
    
    return 0;
}
