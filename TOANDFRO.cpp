#include <stdio.h>
#include<string.h>
int main() 
{
    int t,q=0,i,j,k,l,m;
    char a[201];
    while(1)
    {
        scanf("%d",&t);
       if(t==0)
       break;
        scanf("%s",a);
        l=strlen(a);
        k=l/t;
       i=0;m=0;
       while(i<t)
       {      m=i;
              q=t;
         for(j=0;j<k;j++)
        {
           q=t-q;
            if(q==0)
            {
               printf("%c",a[m]);
               m=m+t*2-i*2-1;
             }
            else
            {
               printf("%c",a[m]);
               m=m+i*2+1;
             }
         }
     i++;
}
    printf("\n");
}

	return 0;
}
