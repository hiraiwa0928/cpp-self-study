#include <bits/stdc++.h>
using namespace std;

void show(int& v) {
    cout << "参照: " << v << endl;
}

void show(int&& v) {
    cout << "右辺値参照: " << v << endl;
}

int main() {
    int v = 1;
    show(v);
    show(42);

    return 0;
}
