#include <iostream>
#include <string>
using namespace std;
class Car
{
private:
    float EngineSize;
    string BodyColor;
    int Mileage;

public:
    void setValue(float x, string y, int z)
    {
        EngineSize = x;
        BodyColor = y;
        Mileage = z;
    }
    void getValue()
    {
        cout << "The can engine size is:" << Car::EngineSize << endl;
        ;
        cout << "The car Color is:" << Car::BodyColor << endl;
        cout << "The car mileage is:" << Car::Mileage << endl;
    }
};

int main()
{
    Car c1;
    c1.setValue(19.2, "Black", 912);
    c1.getValue();

    return 0;
}
