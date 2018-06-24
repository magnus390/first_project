#include<bits/stdc++.h>
using namespace std;
int main()
{
	int testcase,n,m;
	cin>>testcase;
	while(testcase--)
	{
		int ans1 = 0,ans2 = 0;
		string s1,s2;
		cin>>n>>m;
		getchar();
		if(m%2==0)
		{
			for(int i=0;i<n;i++)
			{
				cin>>s1;
				getchar();
				if(i%2==0)
				{
					for(int j=0;j<s1.length();j++)
					{
						if(j%2==0)
						{
							if(s1[j]!='R')
							{
								ans1 = ans1 + 3;
							}
						}
						else
						{
							if(s1[j]!='G')
							{
								ans1 = ans1 + 5;
							}
						}
					}
					for(int j=0;j<s1.length();j++)
					{
						if(j%2==0)
						{
							if(s1[j]!='G')
							{
								ans2 = ans2 + 5;
							}
						}
						else
						{
							if(s1[j]!='R')
							{
								ans2 = ans2 + 3;
							}
						}
					}
				}
				else
				{
					for(int j=0;j<s1.length();j++)
					{
						if(j%2==0)
						{
							if(s1[j]!='G')
							{
								ans1 = ans1 + 5;
							}
						}
						else
						{
							if(s1[j]!='R')
							{
								ans1 = ans1 + 3;
							}
						}
					}
					for(int j=0;j<s1.length();j++)
					{
						if(j%2==0)
						{
							if(s1[j]!='R')
							{
								ans2 = ans2 + 3;
							}
						}
						else
						{
							if(s1[j]!='G')
							{
								ans2 = ans2 + 5;
							}
						}
					}
				}
			}
		}
		else
		{
			for(int i=0;i<n;i++)
			{
				cin>>s1;
				getchar();
				s2 = s2 + s1;
			}
			for(int i=0;i<s2.length();i++)
			{
				if(i%2==0)
				{
					if(s2[i]!='R')
					{
						ans1 = ans1 + 3;
					}		
				}
				else
				{
					if(s2[i]!='G')
					{
						ans1 = ans1 + 5;
					}		
				}
			}
			for(int i=0;i<s2.length();i++)
			{
				if(i%2==0)
				{
					if(s2[i]!='G')
					{
						ans2 = ans2 + 5;
					}		
				}
				else
				{	
					if(s2[i]!='R')
					{
						ans2 = ans2 + 3;
					}
				}
			}
		}
		cout<<min(ans1,ans2)<<endl;	
	}
return(0);
}
