#include <bits/stdc++.h>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)
#define range(a, b) for (int i = a; i < b; i++)

using ll = long long;

class Triangle {
    float height;
    float width;

    public:
        explicit Triangle(float height, float width);
        float area() const;
};

Triangle::Triangle(float height, float width)
    : height(height), width(width) {}

float Triangle::area() const {
    return height * width / 2;
}

int main() {
    Triangle* tri = new Triangle{10.0f, 5.0f};

    cout << "三角形の面積: " << tri->area() << endl;

    delete tri;

    return 0;
} 
