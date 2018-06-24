#include<iostream>
using namespace std;
int main()
{
	int n,temp;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int ans = 0;
		for(int j=0;j<5;j++)
		{
			cin>>temp;
			ans = ans + temp;
		}
		if(ans==0)
		{
			cout<<"Beginner"<<endl;		
		}
		else if(ans==1)
		{
			cout<<"Junior Developer"<<endl;		
		}
		else if(ans==2)
		{
			cout<<"Middle Developer"<<endl;		
		}
		else if(ans==3)
		{
			cout<<"Senior Developer"<<endl;		
		}
		else if(ans==4)
		{
			cout<<"Hacker"<<endl;		
		}		
		else
		{
			cout<<"Jeff Dean"<<endl;
		}	
	}
return(0);
}
