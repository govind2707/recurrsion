#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n;
int fact(int i)
{
	if(i>=n)
	{
	return i;
	}
	return i*fact(i+1);
	
}
int main()
{
	cout<<"enter number";
	cin>>n;
	cout<<"factorial of :"<<n<<"is"<<fact(1);
}

