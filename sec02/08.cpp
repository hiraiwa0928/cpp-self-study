#include <bits/stdc++.h>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)
#define range(a, b) for (int i = a; i < b; i++)

int main() {
    int value = 42;

    cout << "valueのアドレスは" << &value << endl;

    int &ref = value;

    cout << "refのアドレスは" << &ref << endl;

    ref = 0;

    cout << "valueのアドレスは" << &value << "で、�