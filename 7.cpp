#include <bits/stdc++.h>
unsigned long long f(int n)
{
	unsigned long long c=1;
	for (int i = 1; i <= n; i++)
	{
		c *= (unsigned long long)i;
	}
	return c;
}
/*int main()
{
	printf("%llu\n",f(50));
	return 0;
}*/
int main()
{
	int n;
	scanf("%d",&n);
	unsigned long long S = 0;
	for (int i = 1; i <= n; i++)
	{
		S += f(i);
	}
	printf("%llu\n",S);
	return 0;
}