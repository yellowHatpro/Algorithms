#include <iostream>
using namespace std;

/*
MERGE SORT:
Time Complexity: T(n) = 2T(n/2) + O(n) = Always O(nLogn)
Auxilliary Space: O(n)
Stable : Yes
In place : Yes
Algorithm Paradigm : Divide and Conquer
*/

void merge(int left,int right, int* arr){
	int mid = left + (right-left)/2;
	int l_aux_size = mid-left+1;
	int r_aux_size = right - mid;
	int* l_aux = new int[l_aux_size];
	int* r_aux = new int[r_aux_size];

	for (int i = 0; i < l_aux_size; i++)
	{
		l_aux[i] = arr[left+i];
	}
	for (int j = 0; j < r_aux_size; j++)
	{
		r_aux[j] = arr[mid+j+1];
	}
	int i=0,j=0,k=left;
	while(i<l_aux_size && j<r_aux_size){
		if (l_aux[i]<=r_aux[j])
		{
			arr[k] = l_aux[i];
			i++;
		}
		 else{
        arr[k] = r_aux[j];
        j++;
    }
    k++;
}
	while(i<l_aux_size){
    arr[k] = l_aux[i];
    i++;
    k++;
}
	while(j<r_aux_size){
    arr[k] = r_aux[j];
    j++;
    k++;
	}
}

void mergeSort(int left, int right, int* arr){
if (left>=right){
	return;
}
int mid = left +(right-left)/2;
mergeSort(left,mid,arr);
mergeSort(mid+1,right,arr);
merge(left,right,arr);
}

int main(){
	int arr[10] = {9,8,7,6,5,4,3,2,1,0};
	int size = 10;

	mergeSort(0,size-1,arr);
	 for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}