#include<bits/stdc++.h>
using namespace std;
long fab(long n, long b, long a)
{
	if(n==1)
	return a;
	b=a+b;
	a=b-a;
	fab(n-1,b,a);
}
int main()
{
	long n;
	cout<<"enter required term";
	cin>>n;
	cout<<n<<"th term of faboncii is :"<<fab(n,1,0);
}
