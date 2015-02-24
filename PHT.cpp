#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	int t,i;
	cin>>t;
	long long n,d,s;
	int ans;
	for(i=0;i<t;i++)
	{
		cin>>n;
		d=4+4*n;
		s=sqrt(d);
		ans = (s-2)/2;
		cout<<"Case "<<i+1<<": "<<ans<<"\n";
	}
	return 0;
}
