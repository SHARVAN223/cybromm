#include <iostream>
using namespace std;
int main()
{
    int number = 153;
    int rev = 0;
    int ori_val = number;
    int ori_value = 0;
    while (number != 0)
    {
        int digit = number % 10;
        rev = rev + digit * digit * digit;
        number = number / 10;
    }

    if (rev == ori_val)

    {
        cout << "palidrom";
    }
    else
    {
        cout << "no palidrom";
    }
}
