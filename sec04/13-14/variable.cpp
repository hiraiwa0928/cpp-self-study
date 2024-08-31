#include <bits/stdc++.h>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)
#define range(a, b) for (int i = a; i < b; i++)

using ll = long long;

int value = 42;

void show_extern_variable() {
    cout << "variable.cpp: extern変数のアドレス: " << &value << endl;
    cout << "variable.cpp: extern変数の値: " << value << endl;
}
