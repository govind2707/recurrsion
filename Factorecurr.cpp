#include<bits/stdc++.h>
using namespace std;
int arr[10000];
int fact(int n)
{
	if(n<=1)
		return 1;
	if(arr[n]!=-1)
		return arr[n];
	return arr[n]=n*fact(n-1);
	
}
int main()
{
	int n;
	cout<<"enter num";
	cin>>n;
	for(int i=0;i<=n;i++)
		arr[i]=-1;
	cout<<"factorial of "<<n<<"is "<<fact(n);
}
