#include <bits/stdc++.h>
using namespace std;

class Object {
    string name;

    public:
        Object(string name);

        const string& get_name() const;
};

Object::Object(string name) : name{name} {}

const string& Object::get_name() const {
    return name;
}

int main() {
    Object obj{"とても大きなオブジェクト"};

    const string& name = obj.get_name();
    cout << name << endl;

    return 0;
}
