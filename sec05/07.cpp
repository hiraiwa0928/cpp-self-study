#include <bits/stdc++.h>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)
#define range(a, b) for (int i = a; i < b; i++)

using ll = long long;

int main() {
    vector<int> empty;
    cout << "empty.size(): " << empty.size() << endl;

    vector<int> array = {10, 20, 30, 40, 50};
    cout << "array.size(): " << array.size() << endl;

    for (int e : array) {
        cout << e << endl;
    }

    return 0;
}
