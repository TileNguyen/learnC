// overloading operators example
#include <iostream>
using namespace std;

class CVertor{
    public:
        int x, y;
        CVertor ();
        CVertor (int a, int b) : x(a), y(b) {}
        CVertor operator + (const CVertor&);
        CVertor operator * (const CVertor&);
        CVertor operator / (const CVertor&);
        CVertor operator - (const CVertor&);
};

CVertor::CVertor(){
    x = 0;
    y = 0;
}

CVertor CVertor::operator+(const CVertor& param){
    CVertor temp;
    temp.x = x + param.x;
    temp.y = y + param.y;
    return temp;
}

CVertor CVertor::operator*(const CVertor& param){
    CVertor temp;
    temp.x = x * param.x;
    temp.y = y * param.y;
    return temp;
}

CVertor CVertor::operator/(const CVertor& param){
    CVertor temp;
    if(param.x != 0 && param.y != 0){
        temp.x = x / param.x;
        temp.y = y / param.y;
    }
    else{
        cout << "not devider for zero!" << endl;
    }
    return temp;
}

CVertor CVertor::operator-(const CVertor& param){
    CVertor temp;
    temp.x = x - param.x;
    temp.y = y - param.y;
    return temp;
}


int main()
{
    int a = 5, b = 10;
    CVertor foo (3, 1);
    CVertor bar (1,2);
    CVertor result;
    // result = foo + bar;
    result = foo / bar;
    cout << result.x << ", " << result.y << endl;
    cout << bar.x << ", " << bar.y << endl;
    cout << "a + b = " << a+b << endl;
    return 0;
}
