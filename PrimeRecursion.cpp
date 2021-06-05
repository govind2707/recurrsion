#include<bits/stdc++.h>
using namespace std;
bool prime(int n,int i)
{
	if(n==1)
		return false;
	if(i*i>n)
		return true;
	if(n%i==0)
		return false;
	prime(n,i+1);
}
int main()
{
	int num;
	cout<<"enter number";
	cin>>num;
	if(prime(num,2))
	cout<<"prime";
	else
	cout<<"not prime";
}

