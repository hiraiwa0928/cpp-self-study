#include <bits/stdc++.h>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)
#define range(a, b) for (int i = a; i < b; i++)

using ll = long long;

class product {
    int id; 

    public:
        int get_id() const;
        void set_id(int new_id);
};

int product::get_id() const {
    return id;
}

void product::set_id(int new_id) {
    id = new_id;
}

int main() {
    const product p{};

    cout << p.get_id() << endl;

    return 0;
}
