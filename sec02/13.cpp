#include <bits/stdc++.h>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)
#define range(a, b) for (int i = a; i < b; i++)

class Mydata
{
public:
    using integer = int;

    integer get_value();
    void set_value(integer value);

private:
    integer value;
};

Mydata::integer Mydata::get_value()
{
    return value;
}

void Mydata::set_value(integer new_value)
{
    integer tmp = new_value;
    value = tmp;
}

int main()
{
    Mydata d;

    using integer = Mydata::integer;

    integer value = 42;

    d.set_value(value);

    cout << d.get_value() << endl;

    return 0;
}
