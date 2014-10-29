#include<stdio.h>
#include<math.h>
int main() 
{
	int i,t,r,u;
	float a;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&r);
		scanf("%d",&u);

		a=asin((r*9.806)/(u*u))/2;
		    a = a / (2*acos(0.0)) * 180.0;
		    printf("Scenario #%d: ",i+1);
		    if(a>=0&&a<=45)
		    {	
		    	printf("%.2f",a);
		    	printf("\n");
		    }
		    else
			{
				printf("-1");
				printf("\n");
			}

	}
	return 0;
}
