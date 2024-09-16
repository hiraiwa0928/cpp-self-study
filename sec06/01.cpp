#include <bits/stdc++.h>

using namespace std;

class Integer {
    int value;

    public:
        Integer(int value) : value{value} {};

        Integer add(const Integer& other) const;
        Integer sub(const Integer& other) const;

        Integer mul(const Integer& other) const;
        Integer div(const Integer& other) const;

        void show() const;
};

Integer Integer::add(const Integer& other) const {
    return Integer{value + other.value};
}

Integer Integer::sub(const Integer& other) const {
    return Integer{value - other.value};
}

Integer Integer::mul(const Integer& other) const {
    return Integer{value * other.value};
}

Integer Integer::div(const Integer& other) const {
    return Integer{value / other.value};
}

void Integer::show() const {
    cout << "Integer.value = " << value << endl;
}

int main() {
    Integer x = 10;
    Integer y = 3;
    Integer z = 7;

    auto v = x.sub(y.div(y)).add(z.mul(x));

    v.show();

    return 0;
}
