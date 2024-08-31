#include <bits/stdc++.h>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)
#define range(a, b) for (int i = a; i < b; i++)

using ll = long long;

class A {
    int value;
    public:
        void set_value(int value);
        int get_value() const;
};

void A::set_value(int value) {
    this->value = value;
}

int A::get_value() const {
    return this->value;
}

int main() {

    A a;
    a.set_value(42);

    cout << a.get_value() << endl;
    
    return 0;
}
