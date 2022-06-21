#include <iostream>
using namespace std;
// Dutch National Flag Problem
// Given an array of 0s, 1s and 2s, sort the array in-place.
int main()
{
    int arr[10] = {1, 2, 0, 1, 2, 0, 0, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    // 3 pointers to keep track of 0s, 1s and 2s
    int low = 0; // low and medium begin at 0th index
    int mid = 0;
    int high = n - 1;
    // 3 cases

    // 1. If arr[mid] = 0, swap arr[mid] with arr[low] and increment low and mid
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else if (arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}