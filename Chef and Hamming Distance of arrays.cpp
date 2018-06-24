#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,p,i,v,jam,j;
    cin>>t;
    while(t--)
    {
        jam=0;
        cin>>p;
        int a[p],b[p];
        for(i=0;i<p;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        if(p==2 && a[0]==a[1])
        {
            cout<<"0"<<endl;
	        for(i=0;i<p;i++)
            	cout<<a[i]<<" ";
			cout<<endl;
        }
        else if(p==3 &&(a[0]==a[1] || a[1]==a[2] || a[0]==a[2]))
        {
            cout<<p-1<<endl;
            if(a[0]==a[1])
				swap(a[1],a[2]);
            else if(a[1]==a[2])
				swap(a[0],a[1]);
            else
				swap(a[0],a[1]);
            for(i=0;i<p;i++)	
           	 	cout<<a[i]<<" ";
			cout<<endl;
 		}
        else if(p==1)
		{
			cout<<"0"<<endl;
         	for(i=0;i<p;i++)
            	cout<<a[i]<<" ";
			cout<<endl;
        }
        else
		{
            do
			{
                jam=0;
            	for(i=0;i<p;i++)
            	{
                	if(i<p-1 && a[i]==b[i])
                    {
                        if(i<p-3 && b[i]==b[i+1])
                        {
                            swap(b[i+1],b[i+3]);
                            swap(b[i],b[i+2]);
 						}
                        else if(b[i]!=b[i+1])
                        {
                            if(b[i]!=a[i+1])
                            	swap(b[i],b[i+1]);
                            else
                                swap(b[i],b[i-1]);
                        }
                        jam=1;
                    }
                	if(i==p-1 && a[i]==b[i])
                    {
                        if(b[i]==b[i-1])
                        {
                            swap(b[i],b[i-3]);
                            swap(b[i-1],b[i-2]);
 						}
                        else if(b[i]!=b[i-1])
                        {
                            if(b[i]!=a[i-1])
                             	swap(b[i],b[i-1]);
                            else
                               swap(b[i],b[i-2]);
                        } 
                        jam=1; 
                    }
            	}
     		}while(jam==1);
     		cout<<p<<endl;
      		for(i=0;i<p;i++)
            	cout<<b[i]<<" ";
			cout<<endl; 
    	}
	}
}
