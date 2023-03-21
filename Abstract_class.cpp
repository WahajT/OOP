#include <iostream>
#include <string>
using namespace std;
class Load
{

    string load;

public:
    void setVal(string x)
    {
        load = x;
    }
    void getVal()
    {
        cout << "What we got in load:" << Load::load << endl;
    }
};

int main()
{
    Load l;
    l.setVal("Football");
    l.getVal();

    return 0;
}