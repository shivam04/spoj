#include <iostream>
using namespace std;

int main() {
	int t,a,b,i,c;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>a;
		cin>>b;
		if(a==b+1||b==a+1)
		{
			cout<<"No Number";
			cout<<"\n";
			continue;
		}
		else if((a%2==0&&b%2!=0)||(b%2==0&&a%2!=0))
		{
			cout<<"No Number";
			cout<<"\n";
			continue;
		}
		else if(b-a>0||a-b>3)
		{
			cout<<"No Number";
			cout<<"\n";
			continue;
		}
	
		else if((a%2==0)&&(b%2==0))
		{c=a+b;
		cout<<c;
		cout<<"\n";
		continue;
		}
		else if((a%2!=0)&&(b%2!=0))
		{c=a+b-1;
		cout<<c;
		cout<<"\n";
		continue;
		}
		
	}
	return 0;
}
