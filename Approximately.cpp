#include<iostream>
using namespace std;
int ans[1000001] = {0};
int precalculate()
{
	int num1 = 103993,num2 = 33102;
	for(int i=0;i<1000001;i++)
	{
		ans[i] = num1/num2;
		num1 = (num1%num2)*10;
	}
}
int main()
{
	precalculate();
	int t,k;
	cin>>t;
	while(t--)
	{
		cin>>k;
		if(k==0)
		{
			cout<<3<<endl;
		}
		else
		{
			cout<<"3.";
			for(int i=1;i<=k;i++)
			{
				cout<<ans[i];	
			}	
			cout<<endl;
		}
	}
return(0);
}
