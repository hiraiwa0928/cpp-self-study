#include <bits/stdc++.h>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)
#define range(a, b) for (int i = a; i < b; i++)

using ll = long long;

int foo(int value) {
    cout << "foo: " << value << endl;
    return value;
}

bool is_even(int value) {
    return value % 2 == 0;
}

bool is_zero(int value) {
    return value == 0;
}

int main() {
    if (is_even(foo(42)) && !is_zero(foo(42))) {
        cout << "foo(42)はゼロではない偶数を返しました" << endl;
    }

    cout << endl;

    if (int value = foo(42); is_even(value) && !is_zero(value)) {
        cout << "foo(42)はゼロではない偶数を返しました" << endl;
    }

    return 0;
}
