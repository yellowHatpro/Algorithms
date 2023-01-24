//Sieve of Eratosthenes

/*Algorithm to find all primes in a segment [1;n] using O(n loglogn)  operations.
*/

#include <bits/stdc++.h>
using namespace std;

//A standard and totally normal sieve
sieveOfEratosthenes(int n){
	vector<bool> prime(n+1, true);
	prime[1] = false;
	for (int i = 2; i < n; ++i)
	{
		if (prime[i]){
			for (int j = 2*i; j <= n; j+=i)
			{
				prime[j] = false;
			}
		}
	}
}







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

//Segmented Sieve
vector<char> segmentedSieve(long long L, long long R){
	//gen all primes up to sqrt(R)
	 long long lim = sqrt(R);
    vector<char> mark(lim + 1, false);
    vector<long long> primes;
    for (long long i = 2; i <= lim; ++i) {
        if (!mark[i]) {
            primes.emplace_back(i);
            for (long long j = i * i; j <= lim; j += i)
                mark[j] = true;
        }
    }

    vector<char> isPrime(R - L + 1, true);
    for (long long i : primes)
        for (long long j = max(i * i, (L + i - 1) / i * i); j <= R; j += i)
            isPrime[j - L] = false;
    if (L == 1)
        isPrime[0] = false;
    return isPrime;
}

int main(){
	int n;cin>>n;
	primesUsingSieveOfEratosthenes(n);
}

