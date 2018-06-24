#include<iostream>
using namespace std;
int main()
{
	int t,k,n;
	cin>>t;
	while(t--)
	{
		int ans = 0;
		cin>>k;
		for(int i=0;i<k;i++)
		{
			cin>>n;
			while(n)
			{
				ans = ans + n%10;
				n = n/10;
			}
		}
		if(ans%3==0)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
return(0);
}
