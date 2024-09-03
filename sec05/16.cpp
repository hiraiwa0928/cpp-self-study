#include <bits/stdc++.h>
using namespace std;

class Marker {
    public:
        Marker();
        ~Marker();
};

Marker::Marker() {
    cout << "コンストラクター: " << this << endl;
}

Marker::~Marker() {
    cout << "デストラクター: " << this << endl;
}

void copy(Marker m) {
    cout << "copy: " << &m << endl;
}

void reference(const Marker& m) {
    cout << "reference: " << &m << endl;
}

int main() {
    Marker m;

    cout << "値渡し前" << endl;
    copy(m);
    cout << "値渡し後" << endl;

    cout << "参照渡し前" << endl;
    reference(m);
    cout << "参照渡し後" << endl;

    return 0;
}
