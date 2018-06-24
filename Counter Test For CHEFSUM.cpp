#include<iostream>
using namespace std;
int main()
{
	int t,n;
	long long a[100002] = {0};
	for(int i=0;i<100002;i++)
		a[i] = 100000;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
return(0);
}
