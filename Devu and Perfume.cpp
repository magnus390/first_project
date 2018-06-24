#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,r,c,ans;
	string str;
	cin>>t;
	while(t--)
	{
		int x = INT_MAX,y = INT_MIN,z = INT_MIN,w = INT_MAX,check = 0;
		cin>>r>>c;
		for(int i=0;i<r;i++)
		{
			cin>>str;
			getchar();
			for(int j=0;j<str.length();j++)
			{
				if(str[j]=='*')
				{
					x = min(x,j);
					z = max(z,i);
					w = min(w,i);
					check = 1;
				}
			}
			for(int j=str.length()-1;j>=0;j--)
			{
				if(str[j]=='*')
				{
					y = max(y,j);
					z = max(z,i);
					w = min(w,i);
					check = 1;
				}
			}
		}
		x = abs(x - y) + 1;
		z = abs(w - z) + 1;
		ans = max(x,z);
		if(!check)
		{
			cout<<0<<endl;
		}
		else
		{
			cout<<(ans/2 + 1)<<endl;
		}
	}
return(0);
}
