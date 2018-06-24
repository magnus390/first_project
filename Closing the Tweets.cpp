#include<iostream>
using namespace std;
int main()
{
	int n,k,x,a[1002] = {0},ans = 0;
	string s;
	cin>>n>>k;
	getchar();
	while(k--)
	{
		cin>>s;
		if(s=="CLICK")
		{
			cin>>x;
			if(a[x]==0)
			{
				a[x] = 1;
				ans++;
				cout<<ans<<endl;
			}
			else
			{
				a[x] = 0;
				ans--;
				cout<<ans<<endl;
			}
		}
		else
		{
			for(int i=0;i<1002;i++)
			{
				a[i] = 0;
			}
			ans = 0;
			cout<<ans<<endl;
		}
	}
}
