#include<bits/stdc++.h>
using namespace std;
#define max 1000000
int l,r;
bool prime[max+1];
void func()
{
	memset(prime,true,sizeof(prime));
	prime[1] = false;
	for(int i=2;i<=1000000;i++)
		if(prime[i])
			for(int j=2*i;j<=1000000;j=j+i)
				prime[j] = false;
}
int main()
{
	func();
	int t;
	cin>>t;
	while(t--)
	{
		int count = 0;
		cin>>l>>r;
		for(int i=l;i<=r;i++)
			if(prime[i])
				count++;
		cout<<count<<endl;
	}
return(0);
}
