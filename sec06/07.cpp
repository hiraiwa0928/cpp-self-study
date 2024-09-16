#include <bits/stdc++.h>

using namespace std;

class Integer {
    int value;

    public:
        Integer(int value) : value{value} {};

        bool operator!() const;

        bool operator&&(const Integer& rhs) const;
        bool operator||(const Integer& rhs) const;
};

bool Integer::operator!() const {
    return value == 0;
}

bool Integer::operator&&(const Integer& rhs) const {
    return value && rhs.value;
}

bool Integer::operator||(const Integer& rhs) const {
    return value || rhs.value;
}

int main() {
    Integer x = 10;
    Integer y = 3;
    Integer z = 0;

    if (x && y) {
        cout << "xとyはどちらも0ではない" << endl;
    }

    if (z || x) {
        cout << "zとxの少なくともどちらかは0ではない" << endl;
    }

    if (!z) {
        cout << "zは0" << endl;
    }

    return 0;
}
