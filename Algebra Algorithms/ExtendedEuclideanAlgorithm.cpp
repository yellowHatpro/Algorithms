#include<bits/stdc++.h>
using namespace std;
//How different from normal gcd function??
//It finds a way to represent GCD in terms of a and b , i.e, coefficients x and y for which:
// a.x + b.y = gcd(a,b)
//Example of a Linear Diophantine Equation
int gcd(int a, int b , int& x, int&y){
	if (b==0){
		x =1;
		y=0;
		return a;// 1.(a) + 0.(b which is 0) = a
	}
	int x1, y1; //solutions
	int d = gcd (b,a%b,x1 , y1);
	x=y1;
	y = x1 - y1*(a/b);
	return d;
}
int main()
{	int a;int b; cin>>a;cin>>b;
	int x ;
	int y ;
	cout<<"a.x + b.y =";
	cout<< gcd(a,b,x,y)<<endl;
	cout<<"where x="<<x<<" and y = "<<y<<endl;
    
    return 0;
}