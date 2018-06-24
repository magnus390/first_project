#include<iostream>
using namespace std;
int main()
{
	int t;
	string s;
	cin>>t;
	getchar();
	while(t--)
	{
		int count1 = 0,a[26] = {0};
		cin>>s;
		for(int i=0;i<s.length();i++)
		{
			if(a[s[i] - 'a']==0)
			{
				++a[s[i] - 'a'];
				count1++;
			}
			if(count1==26)
				break;
		}
		cout<<count1<<endl;
	}
return(0);
}

