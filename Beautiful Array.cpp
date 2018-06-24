#include<iostream>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		long long num,sum= 0,ans = 0;
		cin>>n;
		long long a[4] = {0};
		for(int i=0;i<n;i++)
		{
			cin>>num;
			++a[num%4];
			sum += num;
		}
		if(sum%4!=0)
		{
			cout<<-1<<endl;
		}
		else
		{
			if(a[1]>a[3])
			{
				ans = ans + a[3];
				a[1] = a[1] - a[3];
				a[3] = 0;
				ans = ans + a[1]/2;
				a[2] = a[2] + a[1]/2;
				ans = ans + a[2]/2;
				cout<<ans<<endl;
			}
			else if(a[3]>a[1])
			{
				ans = ans + a[1];
				a[3] = a[3] - a[1];
				a[1] = 0;
				ans = ans + a[3]/2;
				a[2] = a[2] + a[3]/2;
				ans = ans + a[2]/2;
				cout<<ans<<endl;
			}
			else
			{
				ans = ans + a[1] + a[2]/2;
				cout<<ans<<endl;
			}
		}
	}
return(0);
}
