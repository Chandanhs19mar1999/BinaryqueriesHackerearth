#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,q;
	cin >>n>>q;				
	int a[n];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	while(q--)
	{
		int querytype;
		cin>>querytype;
		if(querytype==0)
		{
			int l,r;
			cin>>l>>r;
			if(a[r]==1)
			{
				cout<<"ODD"<<endl;
			}
			else
			{
				cout<<"EVEN"<<endl;
			}
		}
		else
		{
			int flipindex;// conver 0 to 1 or 1 to 0
			cin>>flipindex;
			if(a[flipindex]==0)
			{
				a[flipindex]=1;
			}
			else
			{
				a[flipindex]=0;
			}
		}
	}
}

