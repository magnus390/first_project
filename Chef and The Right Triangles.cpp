#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,count = 0;
	cin>>t;
	while(t--)
	{
		int x[3] = {0},y[3] = {0},z[3] = {0};
		for(int i=0;i<3;i++)
		{
			cin>>x[i]>>y[i];
		}
		z[0] = pow(abs(x[0] - x[1]),2) + pow(abs(y[0] - y[1]),2);
		z[1] = pow(abs(x[1] - x[2]),2) + pow(abs(y[1] - y[2]),2);
		z[2] = pow(abs(x[2] - x[0]),2) + pow(abs(y[2] - y[0]),2);
		sort(z,z+3);
		if((z[0] + z[1])==z[2])
		{
			count++;
		}
	}
	cout<<count;
return(0);
}
