//Question : Given weights and values of n items, we need to put these items in a knapsack of capacity W to get the maximum total value in the knapsack.
//Fractional KnapSack Problem
#include <bits/stdc++.h>
using namespace std;

class Item{
public:
	int value;
	int weight;
Item(int value,int weight){
	this->value=value;
	this->weight=weight;
}
};

//We will compare the ratio of the value and the weight of the item for comparison in knapsack

bool compare(Item a, Item b){
	double r1 = (double)a.value / (double)a.weight;
	double r2 = (double)b.value / (double)b.weight;
	return r1>r2;
}

double fractionalKnapsack(int W, Item arr[], int n){
	sort(arr,arr+n,compare);
	int currentW = 0 ;//current weight in knapsack
	double finalvalue = 0.0; //Result (value in knapsack)

	//Looping through all items
	for (int i = 0; i < n; ++i)
	{	//Adding Items completely
		if (currentW+arr[i].weight<=W)
		{
			currentW+=arr[i].weight;
			finalvalue+=arr[i].value;
		}
		//Add fractional part if can't add completely
		else{
			int remain = W - currentW;
			finalvalue += arr[i].value*((double)remain/(double)arr[i].weight);
			break;
		}

	}
	return finalvalue;

}
