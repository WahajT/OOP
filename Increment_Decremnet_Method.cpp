
#include <iostream>
#include <string>
using namespace std;
class Count
{
private:
    int count;

public:
    void initialize_counter(int x)
    {
        count = x;
        cout << "Count value is:" << count << endl;
    }
    void increment_counter()
    {

        count++;
        cout << "After Incerement:" << count << endl;
    }
    void Decrement_counter()
    {

        count--;
        cout << "After Decrement:" << count << endl;
    }
};

int main()
{
    Count c1;
    c1.initialize_counter(2);
    c1.increment_counter();
    c1.Decrement_counter();

    return 0;
}
