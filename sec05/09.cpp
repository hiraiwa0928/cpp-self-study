#include <bits/stdc++.h>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)
#define range(a, b) for (int i = a; i < b; i++)

using ll = long long;

int main() {
    vector<int> list;

    list.push_back(42);
    list.push_back(0);

    for (int e : list) {
        cout << e << endl;
    }

    cout << endl;

    list.pop_back();
    list.push_back(-10);

    for (int e : list) {
        cout << e << endl;
    }

    return 0;
}
