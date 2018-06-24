#include<iostream>
using namespace std;
int main()
{
	int n,q,type,index,x,ans = 0,i,j,store,a[100005] = {0};
	cin>>n>>q;
	for(i=1;i<=n;i++)
		cin>>a[i]; 
	for(i=1;i<=q;i++)
	{
		store = a[1];
		cin>>type>>index>>x;
		if(type==1)
			a[index] = x;
		else
		{
			if(a[1]==x)
			{
				ans++;
				for(j=2;j<=index;j++)
				{
					if((store^a[j])==x)
						ans++;
					store ^= a[j];
				}
			}
			else
			{
				for(j=2;j<=index;j++)
				{
					if((store^a[j])==x)
						ans++;
					store ^= a[j];	
				}
			}	
			cout<<ans<<endl;
			ans = ans^ans;	
		}
	}
return(0);
}
