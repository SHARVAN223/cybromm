#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    if (++a)
    {
        ++a;
    }
    cout << ++a;
}
int main()
{
    int a = 10;
    if (++a)
        ;
    {
        cout << "kksk";
        ++a;
    }
    cout << ++a;
}
