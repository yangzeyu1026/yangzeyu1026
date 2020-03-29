#include <bits/stdc++.h>
int main()
{
	int n;
	scanf("%d",&n);
	int count = 0;
	int k = 0;
	for (int i = 1;i*(i+1)/2 <= n ; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			count += i;
		}
		k++;
	}
	if(n - k*(k+1)/2 >= 1)
	{
		for (int i = k*(k+1)/2 + 1; i <= n; i++)
		{
			count += k+1;
		}
	}
	
	printf("%d\n",count );
	return 0;
}