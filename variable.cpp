#include<iostream>
#include <typeinfo>

using namespace std;

int main()
{
    // Declaring variable:
    int a, b, c;
    int result;

    // precess.
    a = 5;
    b = (2);
    c = {10};
    a = a + 1;
    char ch = '1';

    //auto aaa = a;
    //decltype(ch) m;
    //m = 'm';
    //std::cout<< m <<" + "<< ch << endl;

    result = a - b - c;

    // Print out the result:
    cout << result << endl;

    // Terminate the grogram:
    return 0;
}
