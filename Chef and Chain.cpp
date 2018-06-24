#include<iostream>
using namespace std;
int main()
{
	int t;
	string s;
	cin>>t;
	getchar();
	while(t--)
	{
		cin>>s;
		int count1 = 0,count2 = 0;
		for(int i=0;i<s.length();i++)
		{
			if(i%2==0)
			{
				if(s[i]!='+')
				{
					count1++;
				}
			}
			else
			{
				if(s[i]!='-')
				{
					count1++;
				}
			}
			if(i%2==0)
			{
				if(s[i]!='-')
				{
					count2++;
				}
			}
			else
			{
				if(s[i]!='+')
				{
					count2++;
				}
			}
		}
		if(count1>count2)
		{
			cout<<count2<<endl;
		}
		else
		{
			cout<<count1<<endl;
		}
	}
return(0);
}
