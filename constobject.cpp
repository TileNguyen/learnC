// Constructor on const object
#include <iostream>
using namespace std;

class MyClass {
    public:
        int x;
        MyClass(int val) : x(val){}
        //int& get() {return x;}
        const int& get() {return x;}
};

int main()
{
    const MyClass foo(10);
    MyClass bar(123);
    bar.get() = 144;
    //bar.x = 112;
    //bar.get() = 11;
    //foo.get() == 1111;
    //foo.x = 12;
    //cout << foo.get() << endl;
    cout << bar.get() << endl;
    return 0;
}
