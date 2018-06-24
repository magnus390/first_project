#include<iostream>
using namespace std;
int main()
{
	long long t,l,r,num;
	cin>>t;
	while(t--)
	{
		long long sum1 = 0,sum2 = 0,i,count = 0;
		cin>>l>>r;
		if(l%2==0)
		{
			for(i=l;i<=r;i=i+2)
			{
				num = i;
				while(num)
				{
					sum1 = sum1 + num%10;
					num = num/10;
					count = 1;	
				}
				if(sum1%3==0 && count)
				{
					sum2 = sum2 + sum1;
					count = 0;
				}
				sum1 = 0;
			}
		}
		else
		{
			l++;
			for(i=l;i<=r;i=i+2)
			{
				num = i;
				while(num!=0)
				{
					sum1 = sum1 + num%10;
					num = num/10;	
					count = 1;
				}
				if(sum1%3==0 && count)
				{
					sum2 = sum2 + i;
					count = 0;
				}
				sum1 = 0;
			}
		}
		cout<<sum2<<endl;
	}
return(0);
}
