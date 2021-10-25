#include <bits/stdc++.h>
using namespace std;
int gcd (int a , int b){
	if (b==0){
		return a;
	}
	else return gcd (b,a%b);
}

int gcd_itr (int  a , int b){
	while(b){
		a%=b;
		swap(a,b);
	}
	return a;
}


	int lcm (int a, int b)
	{
		return (a*b)/gcd(a,b);
	}