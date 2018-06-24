#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	long long t,n,k;
	cin>>t;
	while(t--)
	{
		long long count = 1;
		cin>>n>>k;
		if(n==1)
		{
			cout<<k;
		}
		else if(k==1 && n!=1)
		{
			for(int i=0;i<n;i++)
			{
				cout<<1<<" ";
			}
		}
		else
		{
			while(pow(2,count)<=k)
			{
				count++;	
			}
			count--;
			count = pow(2,count);
			if(n%2==0)
			{
				cout<<count<<" "<<count-1<<" ";
				for(int i=0;i<n-2;i++)
				{
					cout<<1<<" ";
				}
			}
			else
			{
				if(count==k)
				{
					cout<<count<<" "<<count-1<<" ";
					for(int i=0;i<n-2;i++)
					{
						cout<<1<<" ";
					}
				}	
				else
				{
					cout<<count-1<<" "<<count+1<<" ";
					for(int i=0;i<n-2;i++)
					{
						cout<<1<<" ";
					}
				}
			}
		}	
		cout<<endl;
	}
return(0);
}
