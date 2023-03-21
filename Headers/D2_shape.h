#include <iostream>
using namespace std;

class D2_shape : public Shape
{
public:
    void define()
    {
        cout << "This is a 2D Shape" << endl;
    }
};
