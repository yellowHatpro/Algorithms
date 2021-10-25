long long binarypower(long long a , long long b){
	if (b == 0)
	{
		return 1;
	}

	long long result = binarypower(a,b/2);
	if (b%2) return result * result *a;
	else return result*result;
}

long long binpower(long long a, long long b ){
long long res = 1;
while(b>0){
	if (b&1)
	{
		res == res*a;
	}
		a= a *a;
		b>>=1;
	

}	
return res;
}