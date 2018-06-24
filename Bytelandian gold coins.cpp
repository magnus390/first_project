#include<bits/stdc++.h>
using namespace std;
long long v[10000000] = {0};
long long coin(long long n)
{
	if(n<10000000)
	{
		if(n==0)
			return (0);
		else if(v[n]==0)
			v[n] = max(coin(n/2) + coin(n/3) + coin(n/4), n);
		return(v[n]);	
	}
	else
		return(max(coin(n/2) + coin(n/3) + coin(n/4), n));
}
int main() 
{
	long long n; 	
	while(cin>>n)
	{	
		cout<<coin(n)<<endl;
	}
return(0);
} 
