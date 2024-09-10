#include <bits/stdc++.h>

using namespace std;

void func(int a, int b, int c) {
    cout << "func(" << a << ", " << b << ", " << c << ")" << endl;
}

int main() {
    func(0, 1, 2);

    auto lambda = [](int a, int b, int c) {
        cout << "lambda(" << a << ", " << b << ", " << c << ")" << endl;
    };

    lambda(0, 1, 2);

    return 0;
}
