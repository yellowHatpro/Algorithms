//Sieve of Eratosthenes

/*Algorithm to find all primes in a segment [1;n] using O(n loglogn)  operations.
*/

#include <bits/stdc++.h>
using namespace std;
//This one is optimization over the actual sieve method, although it has Time Complexity of n log log(sqrt(n) + O(n)) , asymptotically same , but reduces operations noticeably.
primesUsingSieveOfEratosthenes(int n){
vector<bool> is_prime(n+1, true);
is_prime[0] = is_prime[1] = false;
for (int i = 2; i*i <=n; ++i){
	if (is_prime[i]){
		for (int j = i*i; j <=n; j+=i){
			is_prime[j] = false;
		}
	}
}
for (int i = 0; i < n+1; ++i)
{
	if (is_prime[i]==true)
	{
		cout<<i<<" ";
	}
}
cout<<endl;
}

int main(){
	int n;cin>>n;
	primesUsingSieveOfEratosthenes(n);
}

