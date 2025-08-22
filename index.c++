#include <iostream>
using namespace std;
int main()
{

    // int ft = 0;
    // int st = 1;

    // int i = 1;
    // int n = 6;

    // while (i <= 6)
    // {
    //     if (i == 1)
    //     {
    //         cout << ft << "\t";
    //         i++;
    //     }
    //     if (i == 2)
    //     {
    //         cout << st << "\t";
    //         i++;
    //     }

    //     int next = ft + st;
    //     cout << next << "\t";

    //     ft = st;
    //     st = next;
    //     i++;
    // }

    for (int r = 1; r <= 5; r++)
    {
        for (int c = 1; c <= 5; c++)
        {
            if (c <= r)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
