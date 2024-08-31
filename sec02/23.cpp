#include <bits/stdc++.h>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)
#define range(a, b) for (int i = a; i < b; i++)

using ll = long long;

int main() {
    int a = 0;

    auto lambda = [&] () {
        cout << "キャプチャした変数: " << a << endl;

        ++a;
    };

    lambda();

    cout << "元の変数: " << a << endl;

    return 0;
}
