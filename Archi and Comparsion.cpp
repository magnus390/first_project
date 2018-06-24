#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t,a,b,n;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>n;
		if(a>=0 && b>=0)
		{
			if(a>b)
			{
				cout<<1<<endl;
			}
			else if(a<b)
			{
				cout<<2<<endl;
			}
			else
			{
				cout<<0<<endl;
			}
		}
		else if(a>=0 && b<0)
		{
			if(n%2==0)
			{
				if(a>abs(b))
				{
					cout<<1<<endl;	
				}	
				else if(a<abs(b))
				{
					cout<<2<<endl;
				}
				else
				{
					cout<<0<<endl;
				}
			}
			else
			{
				cout<<1<<endl;
			}
		}
		else if(b>=0 && a<0)
		{
			if(n%2==0)
			{
				if(b>abs(a))
				{
					cout<<2<<endl;	
				}	
				else if(b<abs(a))
				{
					cout<<1<<endl;
				}
				else
				{
					cout<<0<<endl;
				}
			}
			else
			{
				cout<<2<<endl;
			}
		}
		else if(a<0 && b<0)
		{
			if(n%2==0)
			{
				if(abs(a)>abs(b))
				{
					cout<<1<<endl;
				}
				else if(abs(a)<abs(b))
				{
					cout<<2<<endl;
				}
				else
				{
					cout<<0<<endl;
				}
			}
			else
			{
				if(a>b)
				{
					cout<<1<<endl;
				}
				else if(a<b)
				{
					cout<<2<<endl;
				}
				else
				{
					cout<<0<<endl;
				}
			}
		}
	}
return(0);
}
