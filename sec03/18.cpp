#include <bits/stdc++.h>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)
#define range(a, b) for (int i = a; i < b; i++)

using ll = long long;

class Base {
    int value = 0;

    public:
        void set_value(int value);
        int get_value() const;
};

void Base::set_value(int value) {
    this->value = value;
}

int Base::get_value() const {
    return this->value;
}

struct Derived : Base {
    Derived();
    ~Derived();
};

Derived::Derived() {
    cout << "コンストラクター" << endl;
}

Derived::~Derived() {
    cout << "デストラクター" << endl;
}

int main() {
    Derived d;

    cout << d.get_value() << endl;

    d.set_value(42);

    cout << d.get_value() << endl;
}
