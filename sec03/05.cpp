#include <bits/stdc++.h>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)
#define range(a, b) for (int i = a; i < b; i++)

using ll = long long;

class person {
    string m_name;
    int m_age;

    public:
        person();
        ~person();

        void set_name(string name);
        void set_age(int age);

        string name() const;
        int age() const;
};

person::person() : m_age(-1) {
    cout << "コンストラクターの呼び出し" << endl;
}

person::~person()  {
    cout << "デストラクター呼び出し" << endl;
}

void person::set_name(string name) {
    m_name = name;
}

void person::set_age(int age) {
    m_age = age;
}

string person::name() const {
    return m_name;
}

int person::age() const {
    return m_age;
}

int main() {
    person bob;

    cout << "初期化直後の年齢:" << bob.age() << endl;

    bob.set_name("bob");
    bob.set_age(20);

    cout << "名前: " << bob.name() << endl;
    cout << "年齢: " << bob.age() << endl;

    return 0;
}
