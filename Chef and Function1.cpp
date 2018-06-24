#include<bits/stdc++.h>
using namespace std;	
int main()
{
	vector<long long> v;
	int n,k,mini = INT_MAX,a[10001] = {0},temp = 0;
	cin>>n>>k;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(mini>a[j])
				mini = a[j];
			temp = temp^a[j];
			v.push_back(mini*temp);
		}
		mini = INT_MAX;
		temp = 0;
	}
	sort(v.begin(),v.end());
	cout<<v[k-1]<<endl;
return(0);
}
