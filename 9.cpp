#include <stdio.h>
float f(int n)
{
	float c=0;
	for (float i = 1; i <= n; i++)
	{
		c += 1/i;
	}
	//printf("%f\n", c);
	return c;
}
int main()
{
	int k;
	scanf("%d",&k);
	/*int n=1;
	while(1)
	{
		if(f(n) <= (float)k) n = n+1;
		else break;
	}*/
	double c=0;
	int count=0;
	for (double i = 1; ; i++)
	{
		c += 1/i;
		if(c>(double)k)  {count++; break;}
		else count++;
	}
	printf("%d\n",count);
	return 0;
}