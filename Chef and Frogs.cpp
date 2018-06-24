#include<iostream>
using namespace std;
int main()
{
	int n,p,k,l,r;
	cin>>n>>k>>p;
	{
		int a[n+1],b[n+1];
		bool ans[n+1];
		memset(ans,false,sizeof(ans));
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			b[i] = a[i];
		}
		sort(a,a+n);
		for(int i=0;i<n-1;i++)
		{
			if(a[i+1] - a[i]<=k)
			{
				ans[i] = true;
			}
		}
		if(a[n-2]-a[n-1]<=k)
		{
			ans[n-1] = true;
		}
		for(int i=0;i<p;i++)
		{
			cin>>l>>r;
			l = min(l,r);
			r = max(l,r);
			for(int j=b[l-1])
		}
	}
return(0);
}
