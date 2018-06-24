#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
	int t,n,w,b;
	cin>>t;
	while(t--)
	{
		int temp,counter1,counter2;
		long long ans = 0;
		vector<int> v1,v2;
		cin>>n>>w>>b;
		for(int i=0;i<n;i++)
		{
			cin>>temp;
			v1.push_back(temp);
		}
		for(int i=0;i<n;i++)
		{
			cin>>temp;
			v1[i] = abs(v1[i] - temp);
		}
		for(int i=0;i<w+b;i++)
		{
			cin>>temp;
			v2.push_back(temp);
		}
		sort(v1.rbegin(),v1.rend());
		sort(v2.rbegin(),v2.rend());
		counter1 = 0;
		counter2 = 0;
		while((counter1!=v1.size()) && (counter2!=v2.size()) && (v1[counter1]!=0))
		{
			if(v2[counter2]<=v1[counter1])
			{
				ans = ans + abs(v1[counter1] - v2[counter2]);
				counter1++;
				counter2++;
			}
			else
			{
				counter2++;
			}
		}
		if(counter1!=v1.size()-1 && v1[counter1]!=0)
		{
			for(int i=counter1;i<v1.size();i++)
			{
				ans = ans + v1[i];
			}
		}
		cout<<ans<<endl;
	}
return(0);
}
