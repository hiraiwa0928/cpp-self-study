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
    cout << "foo()" << endl;
}

class Derived : public Base {
    public:
        void bar();
};

void Derived::bar() {
    cout << "bar()" << endl;
}

int main() {

    Base base;
    base.foo();

    Derived derived;
    derived.foo();
    derived.bar();

    return 0;
}
