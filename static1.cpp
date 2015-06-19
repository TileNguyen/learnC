// static members in classs
#include <iostream>
using namespace std;

class Dummy {
    public:
        static int n;
        int m;
        Dummy () {n++; m = 8;}
};

int Dummy::n = 0;
//Dummy::m = 0;

int main()
{
    Dummy a; // constructor call.
    Dummy b[5]; // construtor call
    cout << a.n << a.m << endl;
    Dummy * c = new Dummy;
    cout << Dummy::n << c->m << endl;
    delete c;
    return 0;
}
