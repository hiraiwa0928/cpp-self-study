#include <bits/stdc++.h>

using namespace std;

class Integer {
    int value;

    public:
        Integer(int value) : value{value} {};

        Integer operator+(const Integer& rhs) const;
        Integer operator-(const Integer& rhs) const;

        Integer operator+() const;
        Integer operator-() const;

        void show() const;
};

Integer Integer::operator+(const Integer& rhs) const {
    return Integer{value + rhs.value};
}

Integer Integer::operator-(const Integer& rhs) const {
    return Integer{value - rhs.value};
}

Integer Integer::operator+() const {
    return *this;
}

Integer Integer::operator-() const {
    return Integer{-value};
}

void Integer::show() const {
    cout << "Integer.value = " << value << endl;
}

int main() {
    Integer x = 10;
    Integer y = 3;
    Integer z = 7;

    auto v = x - -y + +z;

    v.show();

    return 0;
}
