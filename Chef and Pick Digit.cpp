#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	string n;
	cin>>t;
	getchar();
	while(t--)
	{
		char ans[26] = {'\0'},x;
		int a[26] = {0},k = -1,flag = 1,size = 0;
		cin>>n;
		for(int i=0;i<n.length();i++)
		{
			++a[n[i] - '0'];	
		}
		for(int i=9;i>6;i--)
		{
			if(((a[i] + a[0])>a[0]) && ((a[i] + a[0])>a[i]))
			{
				flag = 0;
				x = i*10;
				k++;
				ans[k] = x;
			}
		}
		for(int i=8;i>6;i--)
		{
			for(int j=1;j<7;j++)
			{
				if(((a[i] + a[j])>a[i]) && ((a[i] + a[j])>a[j]))
				{
					flag = 0;
					x = i*10 + j;
					k++;
					ans[k] = x;
				}
			}
		}
		for(int i=6;i<9;i++)
		{
			for(int j=i+1;j<10;j++)
			{
				if(((a[i] + a[j])>a[i]) && ((a[i] + a[j])>a[j]))
				{
					flag = 0;
					x = i*10 + j;
					k++;
					ans[k] = x;
				}
			}
		}
		if(a[6]>1)
		{
			flag = 0;
			k++;
			ans[k] = 'B';
		}
		if(a[7]>1)
		{
			flag = 0;
			k++;
			ans[k] = 'M';
		}
		if(a[8]>1)
		{
			flag = 0;
			k++;
			ans[k] = 'X';
		}
		if(((a[5] + a[6])>a[5]) && ((a[5] + a[6])>a[6]))
		{
			flag = 0;
			k++;
			ans[k] = 'A';
		}
		if(((a[7] + a[8])>a[7]) && ((a[7] + a[8])>a[8]))
		{
			flag = 0;
			k++;
			ans[k] = 'W';
		}
		if(flag)
		{
			cout<<" "<<endl;
		}
		else
		{
			flag = 0;
			sort(ans,ans+26);
			for(int i=0;i<26;i++)
			{
				if(ans[i]>='A' && ans[i]<='Z')
				{
					for(int j=i;j<26;j++)
					{
						cout<<ans[j];
					}
					flag = 1;
				}
				if(flag)
					break;
			}
			cout<<endl;
		}
	}
return(0);
}
