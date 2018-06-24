#include<bits/stdc++.h>
using namespace std;	
int main()
{
	int n,k,mini = INT_MAX,a[101] = {0},ans[6000] = {0},counter = -1,temp = 0;
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(mini>a[j])
			{
				mini = a[j];
			}
			temp = temp^a[j];
			counter++;
			ans[counter] = mini*temp;
		}
		mini = INT_MAX;
		temp = 0;
	}
	sort(ans,ans+(n*(n+1))/2);
	cout<<ans[k-1]<<endl;
return(0);
}
