#include <bits/stdc++.h>

using namespace std;

class C {
    int a;
    public:
        explicit C(int a) : a{a} {};

        void copy_and_set(int value) const {
            cout << "copy_and_set: a == " << a << endl;

            [*this, value]() mutable {
                cout << "lambda: a == " << a << endl;
                a = value;
                cout << "lambda: a == " << a << endl;
            }();

            cout << "lambda: a == " << a << endl;
        }
};

int main() {
    C c{42};

    c.copy_and_set(0);
}
