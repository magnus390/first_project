#include<iostream>
using namespace std;
int main()
{
	long long t,n;
	cin>>t;
	while(t--)
	{
		long long num = 2,count = 1;
		cin>>n;
		if(n==1)
			cout<<2<<endl;
		else if(n==3)
			cout<<1<<endl;
		else
		{
			n++;
			while(num<n)
			{
				num = num*2;
				count++;
			}
			if(num==n)
				cout<<(n-1)/2<<endl;
			else
				cout<<-1<<endl;
		}	
	}	
return(0);
}
