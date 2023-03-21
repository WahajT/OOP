#include <iostream>
using namespace std;

class square : public D2_shape
{
public:
    void area()
    {
        cout << "I'm Square " << endl;
    }
};
