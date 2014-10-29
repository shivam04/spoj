#include <iostream>
using namespace std;

int main() 
{
	int t,f,i,j,k,cnt=0,temp,m,h;
	unsigned long int n,sum=0;
	cin>>t;
	for(i=0;i<t;i++)
	{	sum=0;
		cin>>n;
		cin>>f;
		k=0;
		cnt=f;
		int a[f+1];
		for(j=0;j<f;j++)
		{
			cin>>a[j];
			sum+=a[j];
		}
		for(m=0;m<f;m++)
		{
			for(h=0;h<f-1;h++)
			{
				if(a[h]>a[h+1])
				{
					temp=a[h];
					a[h]=a[h+1];
					a[h+1]=temp;
				}
			}
		}
		if(sum>=n)
		{
		while(sum>=n&&k<f)
		{
			sum-=a[k];
			cnt--;
			k++;
		}
		cout<<"Scenario #"<<i+1<<":";
		cout<<"\n";
		cout<<cnt+1;
		}
		else
		{
		cout<<"Scenario #"<<i+1<<":";
		cout<<"\n";
		cout<<"impossible";
		}
		cout<<"\n";
	}
	return 0;
}
