#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	long long i,j,t,k,c=0;
	long long a,b;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>a;
		cin>>b;
		for(j=a;j<=b;j++)
		{ c=0;
            if(j==1)
            continue;
             long long b=sqrt(j);
			 for(k=2;k<=b;k++)
			 {
			 	if(j%k==0)
			 	{
			 		c=1;
                    break;
			 	}
			 }
			 	if(c==0)
			 	{
			 		cout<<j;
			 		cout<<"\n";
				}
			
		}
cout<<"\n";
	}
	
	return 0;
}
