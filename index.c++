#include <iostream>
using namespace std;

int decimaltoBinary(int decN)
{
    int ans = 0;
    int pow = 1;

    while (decN > 0)
    {
        int rem = decN % 2;
        decN /= 2;

        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}
int main()
{
    cout << decimaltoBinary(50) << endl;
    return 0;
}