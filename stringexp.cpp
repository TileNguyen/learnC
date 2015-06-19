#include<iostream>
#include<string>

using namespace std;

int main()
{
    string myString, a;
    a = "&%$(string with \backslash)\
    &%$";
    myString = "This is a string.";
    cout<< a;
    cout<< myString << endl;
    return 0;
}
