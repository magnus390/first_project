#include<iostream>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		long long count1 = 0,count2 = 0,count3 = 0,a[100005],b[100005];
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
			cin>>b[i];
		for(int i=0;i<n;i++)
		{
			if(a[i]<=b[i])
				count1++;
			if(a[i]<=b[n-i-1])
				count2++;
			if(a[i]==b[i])
				count3++;
		}
		if((count1==n) && (count3!=n))
			cout<<"front"<<endl;
		else if((count2==n) && (count3!=n))
			cout<<"back"<<endl;
		else if(count3==n)
			cout<<"both"<<endl;
		else
			cout<<"none"<<endl;
	}
return(0);
}
