#include <bits/stdc++.h>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)
#define range(a, b) for (int i = a; i < b; i++)

using ll = long long;

class Base {
    public:
        virtual void foo();
};

void Base::foo() {
    cout << "Base::foo()" << endl;
}

class Derived : public Base {
    public:
        void foo() override;
        void foo(int i);
};

void Derived::foo() {
    cout << "Derived::foo() override" << endl;
}

void Derived::foo(int i) {
    cout << "Derived::foo(int)" << endl;
}

int main() {

    Derived derived;

    derived.foo();
    derived.foo(42);

    return 0;
}
