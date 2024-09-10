#include <bits/stdc++.h>

using namespace std;

int identity(int v) {
    return v;
}

int square(int v) {
    return v * v;
}

int main() {

    int (*func)(int) = identity;

    cout << "func(4): " << func(4) << endl;

    func = &square;

    cout << "func(4): " << func(4) << endl;

    return 0;
}
