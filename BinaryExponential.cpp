
#include <bits/stdc++.h>
using namespace std;

long long binarypower(long long a , long long b){
	if (b == 0)
	{//base case 
		return 1;	
	}

	long long result = binarypower(a,b/2);
	if (b%2) return result * result *a;
	else return result*result;
}
//iterative
long long binpower(long long a, long long b ){
long long res = 1;
while(b>0){
	if (b&1)
	{
		res == res*a;
	}
		a= a *a;
		b>>=1; // b divides 
	

}	
return res;
}

/*
Time Complexity: O(logn)
Applications:
1. Effective computation of large exponents modulo a number
2. Effective computation of  Fibonacci numbers 
3. Applying permutation k times
*/