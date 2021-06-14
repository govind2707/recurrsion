#include<bits/stdc++.h>
#include<string>
using namespace std;
void permutation(string ans,string old,int visit[])
{
	if(ans.size()==old.size())
	{
		cout<<ans<<endl;
		return;
	}
	for(int i=0;i<old.size();i++)
	{
		if(visit[i]==0)
		{
			visit[i]=1;
		permutation(ans+old[i],old,visit);
		visit[i]=0;
		}
	}
}
		

int main()
{
	string old;
	cout<<"enter string";
	cin>>old;
	int visit[old.size()]={0};
	string ans="";
	permutation(ans,old,visit);
	
}
