#include <bits/stdc++.h>

using namespace std;

class A {
    public:
        A() {
            cout << "コンストラクター" << endl;
        }

        ~A() {
            cout << "デストラクター" << endl;
        }
};

unique_ptr<A> allocate() {
    cout << "allocate()" << endl;
    unique_ptr<A> ptr{new A{}};

    return move(ptr);
}

int main() {
    {
        unique_ptr<A> ptr;

        cout << "関数呼び出しの前" << endl;

        ptr = allocate();

        cout << "関数呼び出しのあと" << endl;
    }

    cout << "スコープのあと" << endl;

    return 0;
}
