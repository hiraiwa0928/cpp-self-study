#include <bits/stdc++.h>

using namespace std;

class Integer {
    int value;

    public:
        Integer(int value) : value{value} {};

        bool operator==(const Integer& rhs) const;
        bool operator!=(const Integer& rhs) const;

        bool operator<(const Integer& rhs) const;
        bool operator>(const Integer& rhs) const;
        bool operator<=(const Integer& rhs) const;
        bool operator>=(const Integer& rhs) const;
};

bool Integer::operator==(const Integer& rhs) const {
    return value == rhs.value;
}

bool Integer::operator!=(const Integer& rhs) const {
    return !(*this == rhs);
}

bool Integer::operator<(const Integer& rhs) const {
    return value < rhs.value;
}

bool Integer::operator>(const Integer& rhs) const {
    return rhs < *this;
}

bool Integer::operator<=(const Integer& rhs) const {
    return !(rhs < *this);
}

bool Integer::operator>=(const Integer& rhs) const {
    return rhs <= *this;
}

int main() {

    Integer x = 10;
    Integer y = 3;

    if (x != y) {
        cout << "x != y はtrue" << endl;
    } else {
        cout << "x != y はfalse" << endl;
    }

    if (y >= x) {
        cout << "y >= x はtrue" << endl;
    } else {
        cout << "y >= x はfalse" << endl;
    }

    return 0;
}
