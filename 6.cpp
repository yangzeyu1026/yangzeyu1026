#include <stdio.h>
int main()
{
	int n, ans = 0;
	scanf("%d",&n);
	for (int i = n; i >= 1; i--)
	{
		for (int j = 1; j <= i-1; j++)
		{
			printf("%02d",j + ans );
		}
		printf("%02d\n",i + ans );
		ans += i;
	}
	return 0;
}