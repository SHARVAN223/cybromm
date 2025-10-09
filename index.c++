#include <iostream>
#include <vector>
using namespace std;

int linearsearch(vector<int> &vec, int sz, int target)
{
    for (int i = 0; i < sz; i++)
    {
        if (vec[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    vector<int> vec = {4, 2, 7, 8, 1, 2, 5};
    int sz = 7;
    int target = 7;
    cout << linearsearch(vec, sz, target) << endl;

    return 0;
}

// void reverseArray(vector<int> &arr, int sz)
// {
//     int start = 0;
//     int end = sz - 1;

//     while (start < end)
//     {
//         swap(arr[start], arr[end]);
//         {
//             start++;
//             end--;
//         }
//     }
// }

// int main()
// {
//     vector<int> arr = {1, 23, 4, 6, 7};
//     int sz = arr.size();

//     reverseArray(arr, sz);
//     for (int i = 0; i < sz; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }