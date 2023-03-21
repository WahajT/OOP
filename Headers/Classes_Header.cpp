#include <iostream>
#include <string>
#include "Shape.h"
#include "D2_shape.h"
#include "square.h"
#include "cube.h"
#include "Fruit.h"
#include "Apple.h"
#include "Grapes.h"
using namespace std;

int main()
{
    cout << "------Task#1------" << endl;
    D2_shape *d2;
    d2->define();
    square s1;
    d2 = &s1;
    d2->area();
    cube c;
    d2 = &c;
    d2->area();

    cout << "------Task#2------" << endl;
    Fruit *f;
    Apple a;
    f = &a;
    f->taste();
    Grapes g;
    f = &g;
    f->taste();
    return 0;
}