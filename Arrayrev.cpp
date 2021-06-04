#include<bits/stdc++.h>
using namespace std;
int reversearray(int a,int b,int a1[])
{
	if(a>=b)
	return 0;
	swap(a1[a],a1[b]);
	reversearray(a+1,b-1,a1);
}
int main()
{
	int n;
	cout<<"enter size";
	cin>>n;
	cout<<"enter array elements";
	int a1[n];
	for(int i=0;i<n;i++)
		cin>>a1[i];
	reversearray(0,n-1,a1);
	cout<<"after reversing :";
	for(int i=0;i<n;i++)
		cout<<a1[i]<<" ";
}
