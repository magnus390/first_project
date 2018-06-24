#include<iostream>
using namespace std;
int main()
{
	int t,n,temp;
	cin>>t;
	while(t--)
	{
		int ans = 0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>temp;
			if(temp%2!=0)
				ans++;
		}
		if(ans%2==0)
			cout<<1<<endl;
		else
			cout<<2<<endl;
	}
return(0);
}
