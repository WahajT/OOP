#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
    int RollNumber;
    float GPA;
    string name;
    int *marks[5]

        Student()
    {
        cout << "Enter your roll number";
        cin >> RollNumber;
        marks = new int[5];
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
        void CalculateGPA()
        {
            for (int i = 0; i < 5; i++)
            {
            }
        }
    }
};
