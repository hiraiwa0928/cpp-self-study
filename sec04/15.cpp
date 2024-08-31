#include <bits/stdc++.h>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)
#define range(a, b) for (int i = a; i < b; i++)

using ll = long long;

class A {
    int i;

    public:
        A() : i(0) {}

        void set_i(int i) {
            this->i = i;
        }

        void show() const {
            cout << i << endl;
        }
};

int main() {
    A a;
    a.show();
    a.set_i(42);
    a.show();

    return 0;
}
