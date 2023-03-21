
#include <iostream>
using namespace std;

template <typename apunclass>
class Stack
{
private:
    int index = -1;
    apunclass array[10];

public:
    push(apunclass a)
    {
        if (index >= (array - 1))
        {
            cout << "There is no space in stack" << endl;
        }
        else
        {
            array[++index] = a;
            cout << a << endl;
        }
    }
    int pop()
    {
        if (index < 0)
        {
            cout << "Empty Stack" << endl;
        }
        else
        {
            apunclass a = array[index--];
            return a;
        }
    }
    bool empty()
    {
        return (index < 0);
    }
};

int main()
{
    Stack<int> obj;
    obj.push(1);
    obj.push(2);
    obj.push(3);
    obj.push(32);
    while (!obj.isEmpty())
    {
        cout << obj.pop() << endl;
    }

    return 0;
}
