#include <bits/stdc++.h>
#define maxn 1005
int main()
{
	int n,a[maxn];
	scanf("%d",&n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	for (int i = 0; i < n-1; i++)
	{
		if (a[i]-a[i+1] >= 1)
		{
			a[i+1] = a[i+1];
		}
		else
			a[i+1] = a[i];
	}
	printf("%d\n",a[n-1] );
	return 0;
}