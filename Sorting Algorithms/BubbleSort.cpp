#include <bits/stdc++.h>
using namespace std;

/*
BUBBLE SORT:

Worst Case and Average Case Time Complexity: O(n2)
Worst Case occurs when Array is reverse sorted.
Best Case Time Complexity: O(n) : Array already sorted
Auxiliary Space : O(1)
Boundary Cases : Bubble sort takes min time (Order(n)) when elements are already
sorted. In Place : Yes Stable : Yes Uses : Simple Algorithm , Used to detect a
very small error(like swap of just two elements) in almost sorted array, and fix
it with just linear complexity (2n).

*/

int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
int n = 10;

void bubbleSort() {
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n - i - 1; ++j) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}
