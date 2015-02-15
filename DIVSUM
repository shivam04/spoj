#include<stdio.h>
#include<math.h>
int main()
{
long int t,n,sum,i;
scanf( "%ld" , &t);
while (t -- )
{
scanf( "%ld" , &n);
if(n ==1 )
{
printf( "%d\n" , 0 );
continue;
}
sum = 1 ;
long int end = sqrt(n);
for (i =2 ;i < end;i ++ )
{
if(n % i ==0 )
sum += i + n / i;
}
if(n % end ==0&&end!=1 )
{
long int q = n / end;
if(end ==q)
sum += q;
else
sum += end + q;
}
printf( "%ld\n" ,sum);
}
return 0;
}



