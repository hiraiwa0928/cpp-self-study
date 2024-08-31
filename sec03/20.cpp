#include <bits/stdc++.h>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)
#define range(a, b) for (int i = a; i < b; i++)

using ll = long long;

class A {
    union
    {
        int i;
        float f;
    };

    ll l;

    public:
        A();

        int get_i() const;
        void set_f(float f);
        ll get_l() const;
};

A::A() : i(0xdeadbeef), l(0xc0ffee) {
    cout << "&f" << &f << endl
        << "&i" << &i << endl
        << "&l" << &l << endl;
}

int A::get_i() const{
    return i;
}

void A::set_f(float f) {
    this->f = f;
}

ll A::get_l() const {
    return l;
}

int main() {
    A a;
    cout << "i: " << hex << a.get_i() << endl;
    a.set_f(2.71818f);
    cout << "i: " << hex << a.get_i() << endl;
    cout << "l: " << hex << a.get_l() << endl;

    return 0;
}
