#include <iostream>
using namespace std;

void reverseArray(int arr[], int sz)
{
    int start = 0;
    int end = sz - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int arr[] = {1, 23, 4, 67};
    int sz = 4;

    reverseArray(arr, sz);

    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
