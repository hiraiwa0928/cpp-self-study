#include <bits/stdc++.h>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)
#define range(a, b) for (int i = a; i < b; i++)

using ll = long long;

class A {
    string m_name;
    int m_value;

    public:
        explicit A(string name, int value);
        explicit A(string name);
        A();
        void show() const;
};

A::A(string name, int value) : m_name(name), m_value(value) {}

A::A(string name) : A(name, -1) {}

A::A() : A("default") {}

void A::show() const {
    cout << m_name << " " << m_value << endl;
}

int main() {
    A a[4] = {
        A{"first", 42},
        A{"second"}
    };

    rep(4) {
        a[i].show();
    }
}
