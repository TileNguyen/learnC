// overloading class contructor.
#include <iostream>
using namespace std;

class Rectangle {
    private:
        int width, height;
    public:
        Rectangle ();
        Rectangle (int, int);
        int area (void) {return (width*height);}
};


Rectangle::Rectangle(int a, int b)
{
    width = a;
    height = b;
}

Rectangle::Rectangle(){
    width = 5;
    height = 5;
}



int main ()
{

    //Rectangle rectb;   // default constructor called
    //Rectangle rectc(); // function declaration (default constructor NOT called)
    //Rectangle rectd{}; // default constructor called
    Rectangle rect (3,4);
    Rectangle recb;
    cout << "rect area: " << rect.area() << endl;
    cout << "recb area: " << recb.area() << endl;

    return 0;
}
