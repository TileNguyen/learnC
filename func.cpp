// Function
#include<iostream>

using namespace std;


void odd (int x);
void even (int x);






inline int addition(int a, int b)
{
    int r;
    r = a + b;
    return r;
}

void duplicate(int& a, int& b, int& c)
{
    a *= 2;
    b *= 2;
    c *= 2;
}

int main()
{
    int z;
    z = addition(5, 6);
    cout << "The result is "<< z << endl;
    int x = 1, y = 2, n = 3;
    duplicate(x, y, n);
    cout << "x = " << x
        << "y = " << y
        << "n = " << n << endl;


    int i;
    do{
        cout << "Please, enter number (0 to exit): ";
        cin >> i;
        odd (i);
    }while (i != 0);
    return 0;
}


void odd (int x)
{
    if((x%2) != 0) cout << "It is odd.\n";
    else even(x);
}

void even (int x)
{
    if((x%2) == 0) cout << "It is even.\n";
    else odd(x);
}
