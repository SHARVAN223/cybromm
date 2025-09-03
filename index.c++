#include <iostream>
using namespace std;

int main()
{
    //     int a = 10;
    //     if (++a)
    //     {
    //         ++a;
    //     }
    //     cout << ++a;
    // }
    // int main()
    // {
    // int c = 4;
    // if (++c == 5)
    // {
    //     cout << ++c;
    // }
    // else
    // {
    //     cout << --c;
    // }
    // int a = 10;
    // if (++a)
    // {
    //     ++a;
    //     cout << ++a;
    // }

    // int a = 10;
    // if (++a)
    // {
    //     ++a;
    //     cout << ++a;
    // }
    // cout << ++a;

    // for (0; 0; 0)
    // {
    //     cout << "fghj";
    // }

    // int number;
    // cout << "enter your four number";
    // cin >> number;
    // int orignal = number;
    // int sum = 0;

    // while (number != 0)
    // {
    //     int digit = number % 10;
    //     sum = sum + (digit * digit * digit * digit);
    //     number = number / 10;
    // }

    // if (sum == orignal)
    // {
    //     cout << orignal << "armstrong";
    // }

    // else
    // {
    //     cout << orignal << "not armstrong";
    // }

    // int p = 0;
    // if (p++ || --p)
    // {
    //     cout << p;
    // }
    // else
    // {
    //     cout << p + 1;
    // }

    // int a = 2, b = 3, c = 1;

    // if (--a && b++)
    // {
    //     if (c-- || ++b)
    //     {
    //         (++a + --b);
    //     }
    //     else
    //     {
    //         (--c + a++);
    //     }
    // }
    // else
    // {
    //     if (a++ && --c)
    //     {
    //         (b-- - ++a);
    //     }
    //     else
    //     {
    //         (c++ + --b);
    //     }
    // }

    // cout << "a = " << a << endl;
    // cout << "b = " << b << endl;
    // cout << "c = " << c << endl;
    // cout << "result = " << result << endl;

    int a = 2, b = 3, c = 1;

    int result = (--a && b++) ? ((c-- || ++b) ? (++a + --b) : (--c + a++))
                              : ((a++ && --c) ? (b-- - ++a) : (c++ + --b));

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "result = " << result << endl;
}
