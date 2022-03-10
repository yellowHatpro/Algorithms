#include <bits/stdc++.h>
using namespace std;

/*
QUICK SORT:

Time Complexity: T(n) = T(k) + T(n-k+1) + O(n) 
Worst Case = Partition always picks greatest or smallest element as pivot
If last element is always the pivot, worst case occurs in case of increasing or decreasing order sorted array. Recurrence becomes : T(n) = T(0)+ T(n-1) + O(n) = T(n) = T(n-1) + O(n) = O(n2)
Best Case = T(n) = 2T(n/2) +O(n) = O(nLogn)
Average Case = T(n) = T(n/9) + T(9n/10) + O(n) = O(nLogn)
*/

int partition(int *arr, int low, int high){
	int pivot = arr[high];//pivot for now, is the last element
	int i = low -1; // think this as -1 index
	for (int j = low; j <=high-1; ++j)
	{
		if (arr[j]<pivot)
		{
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[high]);
	return i+1;
}
void quickSort(int *arr, int low, int high){
	if (low<high)
	{
		int pi = partition(arr,low,high);
		quickSort(arr,low,pi-1);
		quickSort(arr,pi+1,high);

	}
}

int main()
{
	int arr[10] = {9,8,7,6,5,4,3,2,1,0};
	int size = 10;
	quickSort(arr,0,size-1);
	for (int i = 0; i < size; ++i)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}