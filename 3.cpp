#include <bits/stdc++.h>
#define maxn 105
int a[maxn], b[maxn];
int main()
{
	int n;
	scanf("%d",&n);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	/*for (int t = 0; t < n; t++)
	{
		a[t] = 0;
	}*/
	memset(b,0,sizeof(b));
	for (int j = 0; j < n; j++)
	{
		for (int k = 0; k < n; k++)
		{
			if(a[k] < a[j]) b[j]++;
		}
	}
	for (int i = 0; i < n-1; i++)
	{
		printf("%d ",b[i] );
	}
	printf("%d\n",b[n] );
	return 0;
}