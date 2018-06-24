#include<iostream>
using namespace std;
int main()
{
	int n,temp,ans1 = 0,ans2 = 0;
	cin>>n;
	while(n--)
	{
		cin>>temp;
		if(temp==0)
		{
			ans2 = max(ans1,ans2);
			ans1 = 0;
			continue;
		}
		ans1++;
		ans2 = max(ans1,ans2);
	}
	cout<<ans2<<endl;
return(0);
}
