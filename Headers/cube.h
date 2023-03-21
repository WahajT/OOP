#include <iostream>
using namespace std;

class cube : public D2_shape
{
public:
    void area()
    {
        cout << "I'm cube" << endl;
    }
};