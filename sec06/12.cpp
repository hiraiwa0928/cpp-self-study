#include <bits/stdc++.h>

using namespace std;

class A {
    
    public:
        A* operator&();
        const A* operator&() const;

};

A* A::operator&() {
    cout << "this: " << this << endl;
    return this;
}

const A* A::operator&() const {
    cout << "this(const): " << this << endl;
    return this;
}

int main() {

    A a1;
    A* pointer1 = &a1;

    const A a2;
    const A* pointer2 = &a2;

    return 0;
}
