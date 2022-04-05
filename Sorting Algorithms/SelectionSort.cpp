#include <bits/stdc++.h>
using namespace std;

/*
SELECTION SORT:
Time Complexity: O(n2)
Auxiliary Space: O(1)
Good Thing: Never makes more than O(n) swaps, and can be useful when memory write is a costly operation.
Stable : No , can be made stable
Inplace : Yes, doesn't require extra space.
*/

int arr[10] = {9,8,7,6,5,4,3,2,1,0};
int size = 10;

void selectionSort(){

	for (int i = 0; i < size-1; ++i){
		int key = i;
		for (int j = i+1; j < size; ++j){
			if (arr[j]<arr[key]){
				key = j;	
			}
		}
		swap(arr[key],arr[i]);
	}
}


int main(){
	selectionSort();
	for (int i = 0; i < size; ++i){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}