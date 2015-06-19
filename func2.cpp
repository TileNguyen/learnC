// Function
#include<iostream>

using namespace std;


int divide (int a, int b = 2)
{
    int r;
    if( b != 0)
    {
        r = a/b;
        return (r);
    }
    return 0;
}

int main()
{
    cout << divide(12) << endl;
    cout << divide(20, 0) << endl;
    return 0;
}
