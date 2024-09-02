#include <bits/stdc++.h>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)
#define range(a, b) for (int i = a; i < b; i++)

using ll = long long;

class Triangle {
    int m_height;
    int m_base_length;

    public:
        explicit Triangle(int height, int base_length);

        int height() const;
        int base_length() const;
};

Triangle::Triangle(int height, int base_length)
    : m_height(height), m_base_length(base_length) {}

int Triangle::height() const {
    return m_height;
}

int Triangle::base_length() const {
    return m_base_length;
}

int main() {
    Triangle triangles[] {
        Triangle{10, 20}, 
        Triangle{20, 30},
        Triangle(40, 50),
    };

    for (auto& tri : triangles) {
        cout << "面積: " << tri.base_length() * tri.height()  / 2 << endl;
    }

    return 0;
}
