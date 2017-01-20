#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    int m,n;
    scanf("%d %d",&a,&b);
    c=a+b;
    if(0<=abs(c)&&abs(c)<1000)
    {
    	printf("%d",c);
	}
	if(1000<=abs(c)&&abs(c)<1000000)
	{
       printf("%d,%03d",(c/1000),abs(c%1000));
	}
	if(1000000<=abs(c)&&abs(c)<=2000000)
	{
		printf("%d,%03d,%03d",c/1000000,abs(c%100000/1000),abs(c%1000));
	}
}

