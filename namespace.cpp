// namespaces
#include<iostream>
using namespace std;

namespace foo
{
    int value()
    {
        return 5;
    }
}


namespace bar
{
    const double PI = 3.1416;
    double value()
    {
        return 2*PI;
    }
}

namespace first
{
    int x = 5, y = 10;
}

namespace second
{
    double x = 212.312, y = 1.2;
}

char a;


int main()
{

    using namespace first;
    using second::x;


    cout << foo::value() << endl;
    cout << bar::value() << endl;
    cout << bar ::PI << endl;

    cout << x << endl;

    int b;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}




