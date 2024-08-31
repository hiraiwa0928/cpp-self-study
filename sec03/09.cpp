#include <bits/stdc++.h>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)
#define range(a, b) for (int i = a; i < b; i++)

using ll = long long;

class A {
    int m_v;

    public:
        explicit A(int n);

        int v() const;
};

A::A(int n) : m_v(n) {}

int A::v() const {
    return m_v;
}

int main() {

    // A x = 0; // explicitキーワードがない場合、この行はコンパイルエラーになる

    A x = A(42);

    if (x.v() == 42) {
        cout << "A.v()は42です" << endl;
    } else {
        cout << "A.v()は42ではありません" << endl;
    }

    return 0;
}
