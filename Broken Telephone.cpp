#include<iostream>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		int count = 0;
		int a,b;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			if(!i)
			{
				cin>>a;
			}
			else
			{
				cin>>b;
				if(a!=b)
				{
					count = count + 2;
					a = b;
				}
			}
		}
		cout<<count<<endl;
	}
return(0);
}
