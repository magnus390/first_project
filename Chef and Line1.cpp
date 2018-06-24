#include<iostream>
#include<set>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);
	multiset<int>::iterator it;
	long long t,n,k,b,temp;
	long long x;
	cin>>t;
	while(t--)
	{
		long long ans = 1;
		cin>>n>>k>>b;
		multiset<int> m;
		for(long long  i=0;i<n;i++)
		{
			cin>>temp;			
			m.insert(temp);
		}
		it = m.begin();
		x = (*it)*k + b;
		for(++it; it!=m.end(); ++it)
		{
			if(x<=*it)
			{
				x = (*it)*k + b;
				ans++;
			}
		}
		cout<<ans<<endl;
	}
return(0);
}
