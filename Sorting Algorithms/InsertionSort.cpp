#include <bits/stdc++.h>
using namespace std;

/*INSERTION SORT FACTS:
Time Complexity : 0(n2)
Auxiliary Space : O(1)
Boundary Cases 	: Takes max time to sort if elements are sorted in Reverse
order.
                                  Takes min time (O(n)) when elements are
already sorted.\ Algorithm Paradigm : Incremental Approach Sorting in place :
Yes Stable : Yes Online : Yes Uses : When number of elements are smaller in the
array. When the array is almost sorted, only few elements are misplaced in
completely big array.

*/

int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
int n = 10;

void insertionSort() {
  int key;
  for (int i = 1; i < n; ++i) {
    key = arr[i];  // We will check if any element is larger than this key,
    int j = i - 1; // and we will start checking in backward direction, starting
                   // from element just before the key element, that's why we
                   // start outer for loop with i=1
    while (j >= 0 &&
           arr[j] > key) { // if the current value is greater than the key,
      arr[j + 1] = arr[j]; // shift the value right
      j--;
    }
    arr[j + 1] = key;
  }
}

int main() {
  insertionSort();
  for (int i = 0; i < n; ++i) {
    cout << arr[i] << " ";
  }
  cout << endl;
}
