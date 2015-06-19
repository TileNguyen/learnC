#include<iostream>

using namespace std;

int main()
{
    int x = 10;
    int y = 20;
    {
        int x;
        x = 50;
        y = 50;
        cout << "inner block: " << endl;
        cout << "x: " << x << endl;
        cout << "y: " << y << endl;
    }

    cout << "outer block: " << endl;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    return 0;
}
