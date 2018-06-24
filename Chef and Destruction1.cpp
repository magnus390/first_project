#include<bits/stdc++.h>
using namespace std;
int main() 
{
	long long int t;
	cin >> t;
	while (t--) 
	{
		long long int n,kp=INT_MIN;
		cin >> n;
		map <long long int, long long int> m;
		int a[n+2];
		for (int i = 0; i < n; i++) 
		{
			cin>>a[i];
			m[a[i]]++;
			kp = max(kp,m[a[i]]);
		}
		if (kp > (n+1)/2)
			cout << kp << endl;
		else
			cout << (n+1)/2 << endl;
	}
	return 0;
} 

