#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	char ch[500001];
	cin>>t;
	getchar();
	while(t--)
	{
		int count = 0;
		cin>>str;
		for(int i=0;i<ch.len()-3;i++)
		{
			var = str.substr(i,4);
			sort(var.begin(),var.end());
			if(var=="cefh")
				count++;
		}
		if(!count)
			cout<<"normal"<<endl;
		else
			cout<<"lovely"<<" "<<count<<endl;
	}
return(0);
}
