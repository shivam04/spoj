#include<stdio.h>
int main()
{
	int n,sum=0,i,avg,c=0;
	while(1)
	{   sum=c=0;
		scanf("%d",&n);
		if(n==-1)
		break;
		int a[n+1];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			sum+=a[i];
		}
		if(sum%n!=0)
		{
		printf("-1");
		}
	 	else
	 	{
	 		avg=sum/n;
	 		for(i=0;i<n;i++)
	 		{
	 			if(a[i]<avg)
	 			{
	 				c=c+avg-a[i];
	 			}
	 		}
	 		printf("%d",c);
	 		}
		printf("\n");
	}
	return 0;
}
