#include <bits/stdc++.h>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)
#define range(a, b) for (int i = a; i < b; i++)

using ll = long long;

int count() {
    static int counter = 0;
    return ++counter;
}

int main() {
    cout << "1回目: " << count() << endl;

    cout << "2回目: " << count() << endl;

    cout << "3回目: " << count() << endl;

    return 0;
}
