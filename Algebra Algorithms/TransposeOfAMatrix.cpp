//Finding Transpose of a Matrix in place:
#include <bits/stdc++.h>
using namespace std;

int matrix[4][4]=   {{1,2,3,4},
					{5,6,7,8},
					{9,10,11,12},
					{13,14,15,16}};

void transpose(){
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			swap(matrix[i][j],matrix[j][i]);
		}
	}
}
int main(){
	transpose();
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}