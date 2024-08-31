#include <bits/stdc++.h>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)
#define range(a, b) for (int i = a; i < b; i++)

using ll = long long;

class A {
    public: 
        ~A();
};

A::~A() {
    cout << "デストラクター呼び出し" << endl;
}

void function_scope(int i) {
    A a;

    cout << "関数スコープ" << endl;

    if (i > 0) {
        return;
    }
    cout << "if文のあと" << endl;
}

int main() {
    function_scope(10);

    cout << endl;

    function_scope(-10);

    return 0;
}
