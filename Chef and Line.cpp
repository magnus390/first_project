#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long t,n,k,b,temp,ans,x;
	cin>>t;
	while(t--)
	{
		cin>>n>>k>>b;
		vector <long long> v;
		for(int i=0;i<n;i++)
		{
			cin>>temp;
			v.push_back(temp);			
		}
		sort(v.begin(),v.end());
		ans=1;
		temp = 0;
		x = v[0]*k + b;
		for(int i=1;i<n;i++)
		{
			if(x<=v[i])
			{
				x = v[i]*k + b;
				ans++;
			}
		}
		cout<<ans<<endl;
	}
return(0);
}
