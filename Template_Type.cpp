#include <iostream>
#include <cmath>
using namespace std;

template <typename apuntype>

void print(apuntype a)
{
    cout << sqrt(a) << endl;
}

int main()
{
    print<int>(2);
    print<float>(2.88f);
    print<double>(2.5);

    return 0;
}