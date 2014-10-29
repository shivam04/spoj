#include <iostream>
#include<math.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	int a,b,gcd,i,j,x,y;
	while(t--)
	{
		cin>>a>>b;
		x=a;
		y=b;
		if(a<0&&b<0)
		{
			x=fabs(a);
			y=fabs(b);
		}
		else if(a<0)
		x=fabs(a);
		else if(b<0)
		y=fabs(b);
		for(i=1;i<=x&&i<=y;i++)
		{
			if(x%i==0&&y%i==0)
			gcd=i;
		}
		cout<<fabs(a-b)/gcd<<"\n";
	}
	return 0;
}
