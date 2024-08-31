#include <bits/stdc++.h>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)
#define range(a, b) for (int i = a; i < b; i++)

using ll = long long;

extern int value;

void show_extern_variable();

int main() {

    cout << "main: extern変数のアドレス: " << &value << endl;
    cout << "main: extern変数の値: " << value << endl;

    value = 0;

    show_extern_variable();

    return 0;
}
