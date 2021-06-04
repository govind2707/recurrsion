#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n;
int fact(int i)
{
	if(i<=1)
		return i;
	return i*fact(i-1);
	
}
int main()
{
	cout<<"enter the number";
	cin>>n;
	cout<<"factorial of :"<<n<<"is"<<fact(n);		
}
