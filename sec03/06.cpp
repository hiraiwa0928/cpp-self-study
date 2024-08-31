#include <bits/stdc++.h>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)
#define range(a, b) for (int i = a; i < b; i++)

using ll = long long;

class person {
    string m_name;
    int m_age;

    person(int age);

    public:
        person();
        person(string name, int age);

        void set_name(string name);
        void set_age(int age);

        string name() const;
        int age() const;
};

person::person(int age) : m_age(age) {
    cout << "共通コンストラクター呼び出し" << endl;
}

person::person() : person(-1){
    cout << "引数なしコンストラクター呼び出し" << endl;
}

person::person(string name, int age) 
    : person(age) // 委譲先コンストラクター
{
    cout << "引数付きコンストラクター呼び出し" << endl;
    set_name(name);
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
    
    person alice("alice", 15);

    person copy(alice);

    cout << copy.name() << endl;
    cout << alice.name() << endl;

    return 0;
}
