#include <stdio.h>
int main()
{
	int n, k;
	scanf("%d%d",&n,&k);
	int i = 0, ans = 0,count = 0;
	for ( i = 1; i <= n; i++)
	{
		if(i%k != 0)
		{
			ans += i;
			count++;
		}
	}
	printf("%.1f %.1f",(n*(n+1)/2-ans)/(double)(n-count),ans/(double)count);
	return 0;
}
