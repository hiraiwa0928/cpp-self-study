#include <bits/stdc++.h>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)
#define range(a, b) for (int i = a; i < b; i++)

using ll = long long;

class Object {
    string name;

    public:
        Object() : Object("NO NAME") {}
        explicit Object(string name): name(name) {}
        ~Object();

        void show_name() const;
};

Object::~Object() {
    cout << "Objectのデストラクター" << endl;
}

void Object::show_name() const {
    cout << "object name: " << name << endl;
}

int main() {

    Object *obj = new Object[10]{
        Object{"first"},
        Object{"second"}
    };

    obj[0].show_name();
    obj[1].show_name();
    obj[2].show_name();

    delete [] obj;

    return 0;
}
