#include <bits/stdc++.h>
using namespace std;


int countDivisors(int n){
		int n;
	cin>>n;
	//cnt is number of divisors
	int cnt = 0;
	for (int i = 1; i*i <=n; ++i)
	{
		if (n%i==0){
			cnt++;
			//if i==n/i, we dont want to add same number twice..
			if (i !=n/i){
			cnt++; //n/i is also a factor 
			}
		}	
	}
	//If 2 then prime
	return cnt;
}

int main(){
	
	return 0;
}