#include <bits/stdc++.h>
using namespace std;

class person {
    string m_name;
    int m_age;

    person(int age) : m_age{age} {};

    public:
        person() : person{-1} {};

        person(string name, int age) :
            m_name{name}, m_age{age} {};
        
        person(person&& other);

        const string& name() const {return m_name;};
        int age() const {return m_age;};
};

person::person(person&& other)
    : m_name{other.m_name}, m_age{other.m_age} {
    
    cout << "ムーブコンストラクター呼び出し" << endl;
}

int main() {
    person alice{"alice", 15};

    // std::move オブジェクトを右辺値参照にキャスト
    person mv{move(alice)};

    cout << mv.name() << endl;
    cout << mv.age() << endl;

    return 0;
}
