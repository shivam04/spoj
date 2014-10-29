#include<iostream>
using namespace std; 
int main()
{
	int a,s,i;
	while(1)
	{ s=0;
		cin>>a;
		if(a==0)
		{
			break;
		}
		for(i=0;i<=a;i++)
		{
			s+=i*i;
		}
		cout<<s<<"\n";
	}
	return 0;
}

