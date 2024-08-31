#include <bits/stdc++.h>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)
#define range(a, b) for (int i = a; i < b; i++)

using ll = long long;

int main() {
    auto show = [](int i) -> void {
        cout << "iの値は" << i << "です。" << endl;
    };

    show(42);

    auto add = [](int a, int b) {
        return a + b;
    };

    cout << add(3, 6) << endl;

    int a = add(3, 7);

    auto show2 = [=]() {
        cout << a << endl;
    };

    show2();

    return 0;
}
