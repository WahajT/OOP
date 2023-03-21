#include <iostream>
using namespace std;
class Stack
{

private:
    int index;
    int arr[5];

public:
    Stack()
    {
        index = -1;
        // arr = {0, 0, 0, 0, 0};
    }

    void push(int data)
    {

        if (index == 4)
        {
            cout << "Stack Overflow" << endl;
            return;
        }

        index++;
        arr[index] = data;
    }

    int pop()
    {
        int poppedData = 0;

        if (index == -1)
        {
            cout << "Stack Underflow" << endl;
            return -1;
        }

        poppedData = arr[index];
        arr[index] = 0;
        index--;

        return poppedData;
    }

    void display()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(int argc, char const *argv[])
{

    Stack myStack;

    myStack.display();
    myStack.push(1);
    myStack.display();
    myStack.push(5);
    myStack.display();
    myStack.push(200);
    myStack.display();
    myStack.push(14);
    myStack.display();
    myStack.push(17);
    myStack.display();
    myStack.push(56);
    myStack.display();
    cout << myStack.pop() << endl;
    cout << myStack.pop() << endl;
    cout << myStack.pop() << endl;
    cout << myStack.pop() << endl;
    cout << myStack.pop() << endl;
    cout << myStack.pop() << endl;

    return 0;
}
