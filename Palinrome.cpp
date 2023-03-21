
#include <iostream>
using namespace std;
void palindrome(string str, int index)
{
    char *arr;
    // int index;
    cout << "size of index  : " << index << endl;
    arr = new char[index];
    arr = &str[0];
    char *temp = arr;
    char *temp1 = arr;

    for (int i = 0; i < index; i++)
    {
        temp1 = temp1++;
    }

    for (int i = 0; i < index / 2; i++)
    {
        if (*temp = *temp1)
        {
            temp = temp++;
            temp1 = temp1--;
        }
        else
        {
            cout << "not palindrome" << endl;
            break;
        }
        if (temp == temp1)
        {
            break;
        }
    }
    cout << "is palindrome" << endl;
}

int main()
{
    cout << "madam"
         << " ";
    palindrome("madam", 5);
    cout << "abba"
         << " ";
    palindrome("abba", 4);
    return 0;
}