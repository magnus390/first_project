#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		map <long long int, long long int> m;
		long long ans = INT_MIN;
		cin>>n;
		int temp;
		for(int i=0;i<n;i++)
		{
			cin>>temp;
			m[temp]++;
			ans = max(ans,m[temp]);
		}
		if(ans>(n+1)/2)
			cout<<ans<<endl;
		else
			cout<<(n+1)/2<<endl;
	}
}
