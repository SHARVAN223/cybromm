#include <iostream>
using namespace std;

int sumDigit(int num)
{
    int digit = 0;
    while (num > 0)
    {
        int lastdigit = num % 10;
        num = num / 10;

        digit = digit + lastdigit;
    }
    return digit;
}
int main()
{
    cout << "sum = " << sumDigit(1234);
    return 0;
}