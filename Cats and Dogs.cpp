#include<iostream>
using namespace std;
int main()
{
	long long t,c,d,l;
	cin>>t;
	while(t--)
	{
		cin>>c>>d>>l;
		if(c<=d)
		{
			if((l>=(4*d) && l<=(4*(c+d))) && (l%4==0))
				cout<<"yes"<<endl;
			else
				cout<<"no"<<endl;
		}
		else
		{
			if(2*d>=c)
			{
				if((l>=4*d && l<=(4*(c+d))) && (l%4==0))
					cout<<"yes"<<endl;
				else
					cout<<"no"<<endl;
			}
			else
			{
				if((l>=(4*(c-d)) && l<=(4*(c+d))) && (l%4==0))
					cout<<"yes"<<endl;
				else
					cout<<"no"<<endl;
			}
		}
	}
return(0);
}
