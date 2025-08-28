#include <iostream>
using namespace std;
int main()
{
    int r;
    cout << "enter a row:";
    cin >> r;

    int c;
    cout << "enter a colum:";
    cin >> c;

    int mid = r / 2 + 1;

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (i == mid || j == mid)
            {
                cout << "*" << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j > 6 - i)
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
