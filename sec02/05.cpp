#include <bits/stdc++.h>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)
#define range(a, b) for (int i = a; i < b; i++)

enum class Category : long long int
{
    Value1,
    Value2,
    Value3 = 125,
    Value4
};

int main()
{

    Category cat = Category::Value3;

    cout << static_cast<int>(cat) << endl;

    return 0;
}
