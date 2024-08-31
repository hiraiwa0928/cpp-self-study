#include <bits/stdc++.h>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)
#define range(a, b) for (int i = a; i < b; i++)

using ll = long long;

class Base {
    public:
        void foo();
};

void Base::foo() {
    cout << "Base::foo()" << endl;
}

class Derived : public Base {
    public:
        using Base::foo;

        void foo(int v);
};

void Derived::foo(int v) {
    cout << "Derived::foo(" << v << ")" << endl;
}

int main() {
    Derived derived;
    derived.foo();
    derived.foo(42);
}
